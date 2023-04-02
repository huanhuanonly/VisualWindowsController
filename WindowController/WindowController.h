#ifndef WINDOWCONTROLLER_H
#define WINDOWCONTROLLER_H

#include <qwindowdefs_win.h>
#include <QString>
#include <QMap>
#include <QMultiMap>
#include <QRect>
#include <QSizeF>
#include <QColor>
#include <QTime>
#include <QPixmap>
#include <QScreen>
#include <QGuiApplication>

class WindowController
{
public:
    
    using type_style = unsigned long int;
    using type_alpha = unsigned char;
    
    enum class WindowCode : unsigned char
    {
        Unicode,
        Ansi
    };
    
    typedef struct WindowInfoVolatile
    {
        QString title;
        QRect rect;
        
        type_alpha alpha;
        
        bool isErase;
        QColor eraseColor;
        
        bool isActive;
        bool isTopmost;
        bool isShow;
        
        type_style style;
        type_style styleEx;
        type_style classStyle;
        
    } WindowInfoVolatile;
    
    typedef struct WindowInfoStatic
    {
        QSizeF dpi;
        WindowCode code;
        QString className;
        
        unsigned long int pid;
        QString fromPath;
        
    } WindowInfoStatic;
    
    enum class DynamicWindowFlags : int
    {
        Active,
        Foreground,
        UnderCursorPoint,
        ParentUnderCursorPoint,
        Desktop,
        Focus
    };
    
    explicit WindowController() = default;
    explicit WindowController(HWND hWnd);
    
    bool isValid() const noexcept;
    void reload() noexcept;
    
    WindowController& setDynamicWindow(DynamicWindowFlags flag, bool* change = nullptr) noexcept;
    
    WindowInfoVolatile windowInfoVolatile() const noexcept;
    inline const WindowInfoStatic& windowInfoStatic() const noexcept
    {
        return this->staticInfo;
    }
    
    void setTitle(const QString& title) const noexcept;
    QString title() const noexcept;
    
    void setRect(const QRect& rect) const noexcept;
    QRect rect() const noexcept;
    
    void setLeft(int n) const noexcept;
    void setRight(int n) const noexcept;
    void setTop(int n) const noexcept;
    void setBottom(int n) const noexcept;
    
    void setWidth(int value) const noexcept;
    int width() const noexcept;
    
    void setHeight(int value) const noexcept;
    int height() const noexcept;
    
    QPoint point() const noexcept;
    
    void setAlpha(type_alpha value) const noexcept;
    type_alpha alpha() const noexcept;
    
    void setEraseColor(const QColor& color) const noexcept;
    void setEraseColor(bool open) const noexcept;
    QColor eraseColor() const noexcept;
    bool hasEraseColor() const noexcept;
    
    void setActive() const noexcept;
    void setFocus() const noexcept;
    void setForeground() const noexcept;
    
    void setTopmost(bool topmost = true) const noexcept;
    bool isTopmost() const noexcept;
    
    void show() const noexcept;
    bool isShow() const noexcept;
    
    void hide() const noexcept;
    bool isHide() const noexcept;
    
    enum class ImageCaptureMode
    {
        Window,
        Screen
    };

    /**
     * @brief Obtain a frame image of the current window
     * @return Image
     */
    QPixmap image(ImageCaptureMode flag = ImageCaptureMode::Window) const noexcept;
    
    QPoint cursorPoint(bool withFrame = false) const noexcept;
    
    void setStyle(type_style style) const noexcept;
    type_style style() const noexcept;
    
    void setStyleEx(type_style style) const noexcept;
    type_style styleEx() const noexcept;
    
    void setClassStyle(type_style style) const noexcept;
    type_style classStyle() const noexcept;
    
    /**
     * @brief   Close this window, send a WM_CLOSE message
     * @warning This window may refuse to close
     */
    bool close() noexcept;
    /**
     * @brief   Call DestroyWindow() to destroy the window
     * @warning Send a WM_DESTROY message directly
     */
    bool destroy() noexcept;
    /**
     * @brief   Destroy the process that this window belongs to
     * @warning All windows and child windows of this process will be closed
     * @if      If the other party has permissions higher than their own height, this operation will fail
     */
    bool killProcess() noexcept;
    
    
    // static-inline //
    
    static inline bool isValid(HWND hWnd) noexcept
    {
        return WindowController(false).f_setHwnd(hWnd).isValid();
    }
    
    static inline QString title(HWND hWnd) noexcept
    {
        return WindowController(false).f_setHwnd(hWnd).title();
    }
    
    static inline QString className(HWND hWnd) noexcept
    {
        return WindowController(false).f_setHwnd(hWnd).f_className();
    }
    
    static inline unsigned long int pId(HWND hWnd) noexcept
    {
        return WindowController(false).f_setHwnd(hWnd).f_getWindowPid();
    }
    
    static inline QSize getMaxSize()
    {
        return WindowController(false).f_getMaxSize();
    }
    
    static inline QVector<HWND> getAllParentWindow()
    {
        return WindowController(false).f_getParentWindowList();
    }
    static inline QVector<HWND> getAllChildWindow(HWND parent)
    {
        return WindowController(false).f_getChildWindowList(parent);
    }
    /**
     * @brief Get windows tree, contains handles to all windows
     * @returns a secondary tree
     */
    static inline QMap<HWND, QVector<HWND>> getWindowsTree()
    {
        return WindowController(false).f_getWindowsTree();
    }
    /**
     * @brief getWindowTree
     * @param tree
     */
    static inline void getWindowsTree(
            QMultiMap<HWND, HWND>& tree,
            void (*fun_insert)(HWND, HWND),
            void (*fun_remove)(HWND, HWND))
    {
        WindowController(false).f_getWindowsTree(tree, fun_insert, fun_remove);
    }
    
    
    inline QString toQString(int base = 10) const noexcept
    {
        return QString::number((unsigned long long int)(ctwin), base);
    }
    
    // operator-inline //
    
    inline WindowController& operator=(HWND hWnd)
    {
        ctwin = hWnd;
        this->reload();
        return *this;
    }
    inline WindowController& operator=(unsigned long long int hWnd)
    {
        ctwin = (HWND)(hWnd);
        this->reload();
        return *this;
    }
    inline bool operator==(HWND hWnd)
    {
        return ctwin == hWnd;
    }
    inline operator HWND()
    {
        return ctwin;
    }
    inline operator unsigned long long int()
    {
        return reinterpret_cast<unsigned long long int>(ctwin);
    }
    
    static constexpr const HWND hwnd_empty = HWND(nullptr);
    
    static constexpr const uint maxlen_title = 1024;
    static constexpr const uint maxlen_class = 1024;
    
private:
    /**
     * @brief Empty constructor
     */
    explicit WindowController(bool) { }
    
    /**
     * @brief reload() will not be called
     * @param hWnd
     * @return self
     */
    inline WindowController& f_setHwnd(HWND hWnd) noexcept
    {
        ctwin = hWnd;
        return *this;
    }
    
    QString f_className() const noexcept; 
    
    unsigned long int f_getWindowPid() const noexcept;
    
    QVector<HWND> f_getParentWindowList() const noexcept;
    QVector<HWND> f_getChildWindowList(HWND parent) const noexcept;
    QMap<HWND, QVector<HWND>> f_getWindowsTree() const noexcept;
    
    void f_getWindowsTree(
            QMultiMap<HWND, HWND>& tree,
            void (*fun_insert)(HWND, HWND),
            void (*fun_remove)(HWND, HWND)) const noexcept;
    
    QSize f_getMaxSize() const noexcept;
    
private:
    HWND ctwin;
    WindowInfoStatic staticInfo;
};

#endif // WINDOWCONTROLLER_H
