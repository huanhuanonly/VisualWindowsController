#include "WindowController.h"
#include <Windows.h>
#include <Psapi.h>
#include <QtWinExtras/QtWin>
#include <QDebug>

WindowController::WindowController(HWND hWnd)
    : ctwin(hWnd)
{
    reload();
}

bool WindowController::isValid() const noexcept
{
    return bool(::IsWindow(ctwin));
}


void WindowController::reload() noexcept
{
    HDC hdc = GetDC(ctwin);
    staticInfo.dpi.setWidth(double(GetDeviceCaps(hdc, DESKTOPHORZRES)) / double(GetDeviceCaps(hdc, HORZRES)));
    staticInfo.dpi.setHeight(double(GetDeviceCaps(hdc, DESKTOPVERTRES)) / double(GetDeviceCaps(hdc, VERTRES)));
    ReleaseDC(ctwin, hdc);
    
    if (::IsWindowUnicode(ctwin))
    {
        staticInfo.code = WindowCode::Unicode;
    }
    else staticInfo.code = WindowCode::Ansi;
    
    ::GetWindowThreadProcessId(ctwin, &staticInfo.pid);
    
    wchar_t temp[this->maxlen_class];
    ::RealGetWindowClass(ctwin, temp, this->maxlen_class);
    this->staticInfo.className = QString::fromWCharArray(temp);
    
    
    ::GetWindowThreadProcessId(ctwin, &staticInfo.pid);
    ::HANDLE hProcess = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, staticInfo.pid);
    ::GetModuleFileNameEx(hProcess, NULL, temp, MAX_PATH);
    ::CloseHandle(hProcess);
    this->staticInfo.fromPath = QString::fromWCharArray(temp);
}

void WindowController::setTitle(const QString& title) const noexcept
{
    ::SetWindowText(ctwin, title.toStdWString().c_str());
}

QString WindowController::title() const noexcept
{
    wchar_t titleName[this->maxlen_title];
    ::GetWindowText(this->ctwin, titleName, this->maxlen_title);
    return QString::fromWCharArray(titleName);
}

void WindowController::setRect(const QRect& rect) const noexcept
{
    ::MoveWindow(ctwin, rect.left(), rect.right(), rect.right() - rect.left(), rect.bottom() - rect.top(), TRUE);
}
QRect WindowController::rect() const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    return QRect(rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top);
}

void WindowController::setLeft(int n) const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    ::SetWindowPos(ctwin, NULL, n, rect.top, rect.right - n, rect.bottom - rect.top, SWP_NOZORDER);
}
void WindowController::setRight(int n) const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    ::SetWindowPos(ctwin, NULL, 0, 0, n - rect.left, rect.bottom - rect.top, SWP_NOZORDER | SWP_NOMOVE);
}
void WindowController::setTop(int n) const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    ::SetWindowPos(ctwin, NULL, rect.left, n, rect.right - rect.left, rect.bottom - n, SWP_NOZORDER);
}
void WindowController::setBottom(int n) const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    ::SetWindowPos(ctwin, NULL, 0, 0, rect.right - rect.left, n - rect.top, SWP_NOZORDER | SWP_NOMOVE);
}

void WindowController::setWidth(int value) const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);

    ::SetWindowPos(ctwin, NULL, 0, 0, value, rect.bottom - rect.top, SWP_NOZORDER | SWP_NOMOVE);
}
int WindowController::width() const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    
    return rect.right - rect.left;
}

void WindowController::setHeight(int value) const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);

    ::SetWindowPos(ctwin, NULL, 0, 0, rect.right - rect.left, value, SWP_NOZORDER | SWP_NOMOVE);
}
int WindowController::height() const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    
    return rect.bottom - rect.top;
}

QPoint WindowController::point() const noexcept
{
    ::RECT rect;
    ::GetWindowRect(ctwin, &rect);
    
    return QPoint(rect.left, rect.top);
}

void WindowController::setAlpha(type_alpha value) const noexcept
{
    ::SetWindowLong(ctwin, GWL_EXSTYLE, ::GetWindowLong(ctwin, GWL_EXSTYLE) | WS_EX_LAYERED);
    
    ::COLORREF color;
    ::DWORD flag;
    
    ::GetLayeredWindowAttributes(ctwin, &color, NULL, &flag);
    
    if (flag & LWA_COLORKEY)
    {
        ::SetLayeredWindowAttributes(ctwin, color, value, flag);
    }
    else ::SetLayeredWindowAttributes(ctwin, color, value, flag | LWA_ALPHA);
}
WindowController::type_alpha WindowController::alpha() const noexcept
{
    if (!(::GetWindowLong(ctwin, GWL_EXSTYLE) & WS_EX_LAYERED)) return type_alpha(255);
    
    type_alpha alpha;
    ::GetLayeredWindowAttributes(ctwin, NULL, (BYTE*)(&alpha), NULL);
    return type_alpha(alpha);
}

void WindowController::setEraseColor(const QColor& color) const noexcept
{
    ::SetWindowLong(ctwin, GWL_EXSTYLE, ::GetWindowLong(ctwin, GWL_EXSTYLE) | WS_EX_LAYERED);
    
    ::BYTE alpha;
    ::DWORD flag;
    
    ::GetLayeredWindowAttributes(ctwin, NULL, &alpha, &flag);
    if (flag & LWA_ALPHA)
    {
        ::SetLayeredWindowAttributes(ctwin, RGB(color.red(), color.green(), color.blue()), alpha, LWA_ALPHA | LWA_COLORKEY);
    }
    else ::SetLayeredWindowAttributes(ctwin, RGB(color.red(), color.green(), color.blue()), 0, LWA_COLORKEY);
}
void WindowController::setEraseColor(bool open) const noexcept
{
    ::BYTE alpha;
    ::COLORREF color;
    ::DWORD flag;
    
    ::GetLayeredWindowAttributes(ctwin, &color, &alpha, &flag);
    
    if (open)
    {
        ::SetWindowLong(ctwin, GWL_EXSTYLE, ::GetWindowLong(ctwin, GWL_EXSTYLE) | WS_EX_LAYERED);
        ::SetLayeredWindowAttributes(ctwin, color, alpha, flag | LWA_COLORKEY);
    }
    else
    {
        if (flag & LWA_ALPHA)
        {
            ::SetLayeredWindowAttributes(ctwin, color, alpha, LWA_ALPHA);
        }
        else ::SetWindowLong(ctwin, GWL_EXSTYLE, ::GetWindowLong(ctwin, GWL_EXSTYLE) &~ WS_EX_LAYERED);
    }
}
QColor WindowController::eraseColor() const noexcept
{
    ::COLORREF color;
    ::GetLayeredWindowAttributes(ctwin, &color, NULL, NULL);
    return QColor(GetRValue(color), GetGValue(color), GetBValue(color));
}
bool WindowController::hasEraseColor() const noexcept
{
    if (!(::GetWindowLong(ctwin, GWL_EXSTYLE) & WS_EX_LAYERED)) return false;
    
    ::DWORD flag;
    ::GetLayeredWindowAttributes(ctwin, NULL, NULL, &flag);
    return flag & LWA_COLORKEY;
}

void WindowController::setActive() const noexcept
{
    ::SetActiveWindow(ctwin);
}
void WindowController::setFocus() const noexcept
{
    ::SetFocus(ctwin);
}
void WindowController::setForeground() const noexcept
{
    ::SetForegroundWindow(ctwin);
}

void WindowController::setTopmost(bool topmost) const noexcept
{
    if (topmost)
    {
        ::SetWindowPos(ctwin, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    }
    else
    {
        ::SetWindowPos(ctwin, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    }
}
bool WindowController::isTopmost() const noexcept
{
    ::LONG style = ::GetWindowLong(ctwin, GWL_EXSTYLE);
    return style & WS_EX_TOPMOST;
}

void WindowController::show() const noexcept
{
    ::ShowWindow(ctwin, SW_SHOW);
}
bool WindowController::isShow() const noexcept
{
    return ::IsWindowVisible(ctwin);
}

void WindowController::hide() const noexcept
{
    ::ShowWindow(ctwin, SW_HIDE);
}
bool WindowController::isHide() const noexcept
{
    return !(::IsWindowVisible(ctwin));
}

QPixmap WindowController::image(WindowController::ImageCaptureMode flag) const noexcept
{
    switch (flag)
    {
    case ImageCaptureMode::Window:
    {
        ::HDC hdc = ::GetDC(ctwin);
        QPixmap pixmap = QtWin::fromHBITMAP(::HBITMAP(::GetCurrentObject(hdc, OBJ_BITMAP)));
        ::ReleaseDC(ctwin, hdc);
        return pixmap;
    }
    case ImageCaptureMode::Screen:
    {
        QScreen* screen = QGuiApplication::primaryScreen();
        QRect rect = this->rect();
        return screen->grabWindow(0, rect.left(), rect.top(), rect.right() - rect.left(), rect.bottom() - rect.top());
    }
    default: return QPixmap();
    }
}

QPoint WindowController::cursorPoint(bool withFrame) const noexcept
{
    ::POINT curpos;
    ::GetCursorPos(&curpos);
    
    if (withFrame)
    {
        ::RECT rect;
        ::GetWindowRect(ctwin, &rect);
        
        return QPoint(curpos.x - rect.left, curpos.y - rect.top);
    }
    
    ::ScreenToClient(ctwin, &curpos);
    
    return QPoint(curpos.x, curpos.y);
}

void WindowController::setStyle(type_style style) const noexcept
{
    ::SetWindowLong(ctwin, GWL_STYLE, style);
}
WindowController::type_style WindowController::style() const noexcept
{
    union
    {
        long l;
        type_style ul;
    } style;
    
    style.l = ::GetWindowLong(ctwin, GWL_STYLE);
    return style.ul;
}

void WindowController::setStyleEx(type_style style) const noexcept
{
    ::SetWindowLong(ctwin, GWL_EXSTYLE, style);
}
WindowController::type_style WindowController::styleEx() const noexcept
{
    union
    {
        long l;
        type_style ul;
    } style;
    
    style.l = ::GetWindowLong(ctwin, GWL_EXSTYLE);
    return style.ul;
}

void WindowController::setClassStyle(type_style style) const noexcept
{
    ::SetClassLong(ctwin, GCL_STYLE, style);
}
WindowController::type_style WindowController::classStyle() const noexcept
{
    union
    {
        long l;
        type_style ul;
    } style;
    
    style.l = ::GetClassLong(ctwin, GCL_STYLE);
    return style.ul;
}

WindowController::WindowInfoVolatile WindowController::windowInfoVolatile() const noexcept
{
    WindowInfoVolatile wiv;
    
    wiv.title = this->title();
    wiv.rect = this->rect();
    wiv.alpha = this->alpha();
    if ((wiv.isErase = this->hasEraseColor()))
    {
        wiv.eraseColor = this->eraseColor();
    }
    
    wiv.isActive = ::GetActiveWindow() == ctwin;
    wiv.isShow = this->isShow();
    wiv.isTopmost = this->isTopmost();
    
    wiv.style = this->style();
    wiv.styleEx = this->styleEx();
    wiv.classStyle = this->classStyle();
    
    return wiv;
}

WindowController& WindowController::setDynamicWindow(WindowController::DynamicWindowFlags flag, bool* change) noexcept
{
    ::HWND original = ctwin;
    
    switch (flag)
    {
    case DynamicWindowFlags::Active:
        ctwin = ::GetActiveWindow();
        break;
        
    case DynamicWindowFlags::Foreground:
        ctwin = ::GetForegroundWindow();
        break;
        
    case DynamicWindowFlags::UnderCursorPoint:
    {
        POINT curpos;
        ::GetCursorPos(&curpos);
        ctwin = ::WindowFromPoint(curpos);
        break;
    }
    case DynamicWindowFlags::ParentUnderCursorPoint:
    {
        POINT curpos;
        ::GetCursorPos(&curpos);
        ctwin = ::WindowFromPoint(curpos);
        
        HWND parent = ::GetParent(ctwin);
        if (parent) ctwin = parent;
        break;
    }
    case DynamicWindowFlags::Desktop:
        ctwin = ::GetDesktopWindow();
        break;
        
    case DynamicWindowFlags::Focus:
        ctwin = ::GetFocus();
        break;
    }
    this->reload();
    
    if (change != nullptr) { if (original != ctwin) *change = true; else *change = false; }
    return *this;
}


bool WindowController::close() noexcept
{
    return ::CloseWindow(this->ctwin);
}
bool WindowController::destroy() noexcept
{
    return ::DestroyWindow(this->ctwin);
}
bool WindowController::killProcess() noexcept
{
    return ::TerminateProcess(::OpenProcess(PROCESS_TERMINATE, FALSE, this->staticInfo.pid), 0);
}


QSize WindowController::f_getMaxSize() const noexcept
{
    return QSize(::GetSystemMetrics(SM_CXSCREEN), ::GetSystemMetrics(SM_CYSCREEN));
}

QString WindowController::f_className() const noexcept
{
    wchar_t temp[this->maxlen_class];
    ::RealGetWindowClass(ctwin, temp, this->maxlen_class);
    return QString::fromWCharArray(temp);
}

unsigned long int WindowController::f_getWindowPid() const noexcept
{
    unsigned long int pid;
    ::GetWindowThreadProcessId(ctwin, &pid);
    return pid;
}

static BOOL __stdcall sf_proc_getParentWindowList(HWND hWnd, QVector<HWND>* carrier)
{
    carrier->append(hWnd);
	return TRUE;
}
QVector<HWND> WindowController::f_getParentWindowList() const noexcept
{
    QVector<HWND> v;
    ::EnumWindows(WNDENUMPROC(sf_proc_getParentWindowList), LPARAM(&v));
    return v;
}

QVector<HWND> WindowController::f_getChildWindowList(HWND parent) const noexcept
{
    QVector<HWND> v;
    ::EnumChildWindows(parent, WNDENUMPROC(sf_proc_getParentWindowList), LPARAM(&v));
    return v;
}

static BOOL __stdcall sf_proc_getWindowsTree(HWND hWnd, QMap<HWND, QVector<HWND>>* tree)
{
    QVector<HWND> v;
    ::EnumChildWindows(hWnd, WNDENUMPROC(sf_proc_getParentWindowList), LPARAM(&v));
    tree->insert(hWnd, v);
    
    return TRUE;
}
QMap<HWND, QVector<HWND>> WindowController::f_getWindowsTree() const noexcept
{
    QMap<HWND, QVector<HWND>> tree;
    ::EnumWindows(WNDENUMPROC(sf_proc_getWindowsTree), LPARAM(&tree));
    
    return tree;
}

void WindowController::f_getWindowsTree(
            QMultiMap<HWND, HWND>& tree,
            void (*fun_insert)(HWND, HWND),
            void (*fun_remove)(HWND, HWND)) const noexcept
{
    for (auto i = tree.begin(); i != tree.end(); ++i)
    {
        
        for (auto v : tree.values(i.key()))
        {
            if (!(::IsWindow(v)))
            {
                tree.remove(v);
                fun_remove(i.key(), v);
            }
        }
        
        if (!(::IsWindow(i.key())))
        {
            tree.remove(i.key());
            fun_remove(i.key(), WindowController::hwnd_empty);
        }
    }
    
    QVector<HWND> parent = f_getParentWindowList();
    
    for (auto i : parent)
    {
        if (tree.find(i) == tree.end())
        {
            fun_insert(i, WindowController::hwnd_empty);
            
            QVector<HWND> child = f_getChildWindowList(i);
            if (child.isEmpty())
            {
                tree.insert(i, WindowController::hwnd_empty);
            }
            else
            {
                tree.insert(i, WindowController::hwnd_empty);
                tree.replace(i, child.at(0));
                fun_insert(i, child.at(0));
                
                for (int j = 1; j < child.size(); ++j)
                {
                    tree.insert(i, child.at(j));
                    fun_insert(i, child.at(j));
                }
            }
        }
        else
        {
            QVector<HWND> child = f_getChildWindowList(i);
            
            if (child.isEmpty() == false)
            {
                if (tree.find(i, 0) != tree.end())
                {
                    tree.remove(i, 0);
                }
                
                for (auto j : child)
                {
                    if (tree.find(i, j) == tree.end())
                    {
                        tree.insert(i, j);
                        fun_insert(i, j);
                    }
                }
            }
        }
    }
    return;
}
