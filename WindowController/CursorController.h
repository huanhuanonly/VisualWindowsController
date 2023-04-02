#ifndef CURSORCONTROLLER_H
#define CURSORCONTROLLER_H

#include <QObject>
#include <QPoint>
#include <QColor>

class CursorController
{
public:
    explicit CursorController() = default;
    
    static inline QPoint point() noexcept
    {
        return CursorController().f_point();
    }
    
    static inline int x() noexcept
    {
        return CursorController().f_point().x();
    }
    static inline int y() noexcept
    {
        return CursorController().f_point().y();
    }
    
    static inline QColor color() noexcept
    {
        return CursorController().f_color();
    }
    
private:
    
    QPoint f_point() const noexcept;
    QColor f_color() const noexcept;
};

#endif // CURSORCONTROLLER_H
