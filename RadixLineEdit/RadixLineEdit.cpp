#include "RadixLineEdit.h"

RadixLineEdit::RadixLineEdit(QWidget* parent, RADIX base)
    : QLineEdit(parent)
    , m_base(base)
{
    switch (base)
    {
    case RADIX::Dec:
        m_exp = new QRegExpValidator(QRegExp("[0-9]+"), this);
        break;
    case RADIX::Hex:
        m_exp = new QRegExpValidator(QRegExp("[0-9A-Fa-f]+"), this);
        break;
    case RADIX::Oct:
        m_exp = new QRegExpValidator(QRegExp("[0-7]+"), this);
        break;
    case RADIX::Bin:
        m_exp = new QRegExpValidator(QRegExp("[0|1]+"), this);
        break;
    }
    this->setValidator(m_exp);
    
    connect(this, &QLineEdit::textEdited, this, &RadixLineEdit::onTextEditted);
}

template<typename T>
void RadixLineEdit::setValue(T value) noexcept
{
    this->setText(QString::number(value, int(m_base)));
    emit valueChange(value);
}

unsigned long long int RadixLineEdit::value() const noexcept
{
    return this->text().toULongLong(nullptr, int(m_base));
}

void RadixLineEdit::setBase(RADIX base) noexcept
{
    unsigned long long int log = this->value();
    m_base = base;
    switch (base)
    {
    case RADIX::Dec:
        m_exp->setRegExp(QRegExp("[0-9]+"));
        break;
    case RADIX::Hex:
        m_exp->setRegExp(QRegExp("[0-9A-Fa-f]+"));
        break;
    case RADIX::Oct:
        m_exp->setRegExp(QRegExp("[0-7]+"));
        break;
    case RADIX::Bin:
        m_exp->setRegExp(QRegExp("[0|1]+"));
        break;
    }
    this->setValue(log);
}
