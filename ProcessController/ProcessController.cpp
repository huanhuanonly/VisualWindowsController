#include "ProcessController.h"
#include "WindowController/WindowController.h"

#include <Windows.h>
#include <processthreadsapi.h>
#include <Psapi.h>
#include <winternl.h>

ProcessController::ProcessController(const PID& pId)
{
    this->m_pid = pId;
    reload();
}

void ProcessController::reload()
{
    this->m_info.fromPath = sf_getFromPath();
    
    this->m_info.cmdParameterList = sf_getCommangLineParameterList();
    
    this->m_info.startTime = sf_getStartTime();
    
    return;
}

QString ProcessController::sf_getFromPath() const noexcept
{
    wchar_t temp[MAX_PATH + 1];
    ::HANDLE hProcess = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, this->m_pid);
    ::GetModuleFileNameEx(hProcess, NULL, temp, MAX_PATH);
    ::CloseHandle(hProcess);
    return QString::fromWCharArray(temp);
}

QStringList ProcessController::sf_getCommangLineParameterList() const noexcept
{
    return QStringList();
    
//    QStringList str;
    
//    ::HANDLE hProcess = ::OpenProcess(PROCESS_VM_READ, FALSE, this->m_pid);
    
//    ::PROCESS_BASIC_INFORMATION pbi = {0};
//    ::PEB                       peb;
//    ::SIZE_T                     dwDummy;
//    ::DWORD                     dwSize;
//    ::LPVOID                    lpAddress;
//    ::RTL_USER_PROCESS_PARAMETERS para;
    
//    ::HMODULE hModule = ::LoadLibrary(L"Ntdll.dll");
//    ::NTSTATUS(NTAPI* farProc)(::HANDLE, ::PROCESSINFOCLASS, ::PVOID, ::ULONG, ::PULONG) =
//            (::NTSTATUS(NTAPI*)(::HANDLE, ::PROCESSINFOCLASS, ::PVOID, ::ULONG, ::PULONG))
//                (::GetProcAddress(hModule, "NtQueryInformationProcess"));
    
    
//    if (0 != farProc(hProcess, ::ProcessBasicInformation, (PVOID)&pbi, sizeof(pbi), NULL))
//    {
//        return str;
//    }
//    if (pbi.PebBaseAddress == nullptr)
//    {
//        //do somthing 
//    }
//    if (FALSE == ::ReadProcessMemory(hProcess, pbi.PebBaseAddress, &peb, sizeof(peb), &dwDummy))
//    {
//        return str;
//    }
//    if (FALSE == ::ReadProcessMemory(hProcess, peb.ProcessParameters, &para, sizeof(para), &dwDummy))
//    {
//        return str;
//    }

//    lpAddress = para.CommandLine.Buffer;
//    dwSize = para.CommandLine.Length;

//    TCHAR* cmdLineBuffer = new TCHAR[dwSize+1];
//    ZeroMemory(cmdLineBuffer, (dwSize + 1) * sizeof(WCHAR));
//    if (FALSE == ::ReadProcessMemory(hProcess, lpAddress, (LPVOID)cmdLineBuffer, dwSize, &dwDummy))
//    {
//        delete[] cmdLineBuffer;
//        return str;
//    }
    
//    int nArgs;
//    LPWSTR* szArglist = ::CommandLineToArgvW(cmdLineBuffer, &nArgs);
    
//    for (int i = 0; i < nArgs; ++i)
//    {
//        str << QString::fromStdWString(szArglist[i]);
//    }
//    ::LocalFree(szArglist);
    
//    delete[] cmdLineBuffer;
//    return str;
}

QDateTime ProcessController::sf_getStartTime() const noexcept
{
    ::FILETIME fProcessTime, ftExit, ftKernel, ftUser;
    ::HANDLE hProc = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, this->m_pid);
    ::GetProcessTimes(hProc, &fProcessTime, &ftExit, &ftKernel, &ftUser);
    ::CloseHandle(hProc);
    time_t total_us = (((time_t)fProcessTime.dwHighDateTime << 32) | (time_t)fProcessTime.dwLowDateTime) / 10;
    total_us -= 11644473600000000ull;
    total_us /= 1000000;
    
    return QDateTime::fromTime_t(total_us);
}

QMap<HWND, QVector<HWND>> ProcessController::sf_getWindowsFromProcess() const noexcept
{
    const QMap<HWND, QVector<HWND>>& tree = WindowController::getWindowsTree();
    QMap<HWND, QVector<HWND>> ret;
    
    for (auto i = tree.begin(); i != tree.end(); ++i)
    {
        if (WindowController::pId(i.key()) == this->m_pid)
        {
            QVector<HWND> v;
            for (auto j : i.value())
            {
                if (WindowController::pId(j) == this->m_pid)
                {
                    v.append(j);
                }
            }
            ret.insert(i.key(), v);
        }
    }
    return ret;
}
