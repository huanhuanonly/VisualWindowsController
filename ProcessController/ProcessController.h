#ifndef PROCESSCONTROLLER_H
#define PROCESSCONTROLLER_H

#include <qwindowdefs_win.h>
#include <QString>
#include <QStringList>
#include <QDateTime>
#include <QMap>

class ProcessController
{
public:
    using PID = unsigned long int;
    
    using ProcessInfoStatic = struct
    {
        QString fromPath;
        QStringList cmdParameterList;
        
        QDateTime startTime;
    };

    using ProcessInfoVolatile = struct
    {
        uint cpuUsage;
    };
    
    explicit ProcessController() = default;
    explicit ProcessController(const PID& pId);
    
    virtual ~ProcessController() {}
    
    inline const ProcessInfoStatic& processInfoStatic() const noexcept
    {
        return this->m_info;
    }
    
    inline QMap<HWND, QVector<HWND>> windowTreeFromThisProcess() const noexcept
    {
        return sf_getWindowsFromProcess();
    }

    
    static inline QString fromPath(const PID& pId) noexcept
    {
        return ProcessController().sf_setPid(pId).sf_getFromPath();
    }

    static inline QDateTime startTime(const PID& pId) noexcept
    {
        return ProcessController().sf_setPid(pId).sf_getStartTime();
    }
    
    static inline QStringList commandLineParameterList(const PID& pId) noexcept
    {
        return ProcessController().sf_setPid(pId).sf_getCommangLineParameterList();
    }
    
    inline ProcessController& operator=(const PID& pId) noexcept
    {
        this->m_pid = pId;
        reload();
        return *this;
    }
    
    inline bool operator==(const ProcessController& p) noexcept
    {
        return this->m_pid == p.m_pid;
    }
    inline bool operator==(const PID& p) noexcept
    {
        return this->m_pid == p;
    }
    
    inline operator PID() noexcept
    {
        return m_pid;
    }
    
protected:
    void reload();
    
    inline ProcessController& sf_setPid(const PID& pId) noexcept
    {
        m_pid = pId;
        return *this;
    }
    
    QString sf_getFromPath() const noexcept;
    QStringList sf_getCommangLineParameterList() const noexcept;
    QDateTime sf_getStartTime() const noexcept;
    
    QMap<HWND, QVector<HWND>> sf_getWindowsFromProcess() const noexcept;
    
private:
    PID m_pid;
    ProcessInfoStatic m_info;
};

#endif // PROCESSCONTROLLER_H
