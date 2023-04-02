#ifndef SINGLECOLORWIDGET_H
#define SINGLECOLORWIDGET_H

#include <QWidget>

class SingleColorWidget : public QWidget
{
    Q_OBJECT
    
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChange)
    Q_PROPERTY(bool drawRect READ rectDrawing WRITE setRectDrawing)
    Q_PROPERTY(QColor rectColor READ rectColor WRITE setRectColor)
    
public:
    explicit SingleColorWidget(QWidget* parent = nullptr, const QColor& color = QColor());
    
    
    inline void setColor(const QColor& color) noexcept
    {
        m_color = color;
        this->update();
        emit colorChange(color);
    }
    
    inline QColor color() const noexcept
    {
        return m_color;
    }
    
    inline void setRectDrawing(bool draw) noexcept
    {
        m_rectDrawing = draw;
    }
    
    inline bool rectDrawing() const noexcept
    {
        return m_rectDrawing;
    }
    
    inline void setRectColor(const QColor& color) noexcept
    {
        m_rectColor = color;
    }
    
    inline QColor rectColor() const noexcept
    {
        return m_rectColor;
    }
    
signals:
    void colorChange(const QColor& color);
    
protected:
    void paintEvent(QPaintEvent* event) override;
    
private:
    
    QColor  m_color;
    
    bool    m_rectDrawing = false;
    QColor  m_rectColor;
};

#endif // SINGLECOLORWIDGET_H
