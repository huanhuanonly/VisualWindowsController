#include "SingleColorWidget.h"
#include <QPainter>
#include <QPaintEvent>

SingleColorWidget::SingleColorWidget(QWidget* parent, const QColor& color)
    : QWidget(parent)
    , m_color(color)
{
    
}

void SingleColorWidget::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.fillRect(event->rect(), m_color);
    
    if (m_rectDrawing)
    {
        painter.drawRect(event->rect());
    }
    QWidget::paintEvent(event);
}
