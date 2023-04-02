#ifndef RADIXLINEEDIT_H
#define RADIXLINEEDIT_H

#include <QLineEdit>
#include <QRegExpValidator>

class RadixLineEdit : public QLineEdit
{
    Q_OBJECT
    
public:
    
    enum class RADIX : int
    {
        Dec = 10,
        Hex = 16,
        Oct = 8,
        Bin = 2
    };
    
    explicit RadixLineEdit(QWidget* parent = nullptr, RADIX base = RADIX::Dec);
    
    template<typename T>
    void setValue(T value) noexcept;
    
    unsigned long long int value() const noexcept;
    
    void setBase(RADIX base) noexcept;
    inline RADIX base() const noexcept { return m_base; }
    
private slots:
    void onTextEditted(const QString&) { emit valueChange(this->value()); }
    
signals:
    void valueChange(unsigned long long int value);
    
private:
    RADIX m_base;
    QRegExpValidator* m_exp;
};

#endif // RADIXLINEEDIT_H
