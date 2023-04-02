#include "CursorController.h"
#include <Windows.h>

QPoint CursorController::f_point() const noexcept
{
    ::POINT curpos;
    ::GetCursorPos(&curpos);
    return QPoint(curpos.x, curpos.y);
}

QColor CursorController::f_color() const noexcept
{
    ::POINT curpos;
    ::GetCursorPos(&curpos);
    
    ::HWND hWnd = ::GetDesktopWindow();
    ::HDC hDc = ::GetDC(hWnd);
    
    ::COLORREF color = ::GetPixel(hDc, curpos.x, curpos.y);
    return QColor(GetRValue(color), GetGValue(color), GetBValue(color));
}
