#include "BinsetEdit.h"
#include <QPainter>

BinsetEdit::BinsetEdit(QWidget* parent, const QString& binStr, bool throwException)
    : QFrame(parent)
{
    this->init(binStr.size(), false);
    
    for (int i = 0; i < binStr.size(); ++i)
    {
        if (binStr[i] == '1')
        {
            m_data[i] = true;
            m_button.at(i)->setText("1");
        }
        else if (binStr[i] == '0')
        {
            m_data[i] = false;
            m_button.at(i)->setText("0");
        }
        else
        {
            if (throwException == true)
            {
                throw type_throw_invalid_binary_character(binStr[i]);
            }
            break;
        }
    }
}

template<size_t _Bit>
BinsetEdit::BinsetEdit(QWidget* parent, const std::bitset<_Bit>& binSet)
    : QFrame(parent)
    , m_data(_Bit)
{
    this->init(_Bit, false);
    
    for (int i = 0; i < _Bit; ++i)
    {
        m_data[i] = binSet.test(i);
        m_button[i]->setText(m_data[i] ? "1" : "0");
    }
}

void BinsetEdit::init(type_size size, type_bit fill) noexcept
{
    if (this->layout() == nullptr)
    {
        QHBoxLayout* layout = new QHBoxLayout;
        layout->setContentsMargins(0, 0, 0, 0);
        layout->setSpacing(0);
        
        this->m_button.resize(int(size));
        this->m_data.resize(int(size));
        
        for (type_size i = 0; i < size; ++i)
        {
            this->m_data[i] = fill;
            m_button[i] = new QPushButton(fill ? "1" : "0", this);
            m_button.at(i)->setObjectName(this->pushButtonObjectName + QString::number(i));
            m_button.at(i)->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
            connect(m_button[i], &QPushButton::clicked, this, &BinsetEdit::onButtonClicked);
            layout->addWidget(m_button[i]);
        }
        this->setLayout(layout);
    }
    else if (int(size) > m_button.size())
    {
        for (type_size i = 0; i < type_size(m_button.size()); ++i)
        {
            this->m_data[i] = fill;
            m_button[i]->setText(fill ? "1" : "0");
        }
        
        int log = m_button.size();
        
        this->m_button.resize(int(size));
        this->m_data.resize(int(size));
        
        for (type_size i = log; i < size; ++i)
        {
            this->m_data[i] = fill;
            m_button[i] = new QPushButton(fill ? "1" : "0", this);
            m_button.at(i)->setObjectName(this->pushButtonObjectName + QString::number(i));
            m_button.at(i)->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
            connect(m_button[i], &QPushButton::clicked, this, &BinsetEdit::onButtonClicked);
            this->layout()->addWidget(m_button[i]);
        }
    }
    else if (int(size) < m_button.size())
    {
        m_button.resize(size);
        m_button.squeeze();
        
        m_data.resize(size);
        m_data.squeeze();
    }
}

void BinsetEdit::setBitTip(int index, const QString& tip) noexcept
{
    if (index >= m_button.size()) return;
    
    m_button.at(index)->setToolTip(tip);
}
QString BinsetEdit::bitTip(int index) const noexcept
{
    if (index >= m_button.size()) return QString();
    
    return m_button.at(index)->toolTip();
}
void BinsetEdit::setBitTips(const QStringList& tips) noexcept
{
    int maxSize = std::max(tips.size(), m_button.size());
    for (int i = 0; i < maxSize; ++i)
    {
        m_button.at(i)->setToolTip(tips.at(i));
    }
}
QStringList BinsetEdit::bitTips() const noexcept
{
    QStringList list;
    for (int i = 0; i < m_button.size(); ++i)
    {
        list << m_button.at(i)->toolTip();
    }
    return list;
}

void BinsetEdit::onButtonClicked()
{
    if (this->m_readOnly) return;
    
    QPushButton* ct = qobject_cast<QPushButton*>(sender());
    
    QString str_index = ct->objectName();
    str_index = str_index.right(str_index.size() - this->pushButtonObjectName.size());
    int index = str_index.toInt();
    
    if (ct->text() == "0")
    {
        ct->setText("1");
        this->m_data[index] = true;
        
        emit this->bitChanged(index, true);
    }
    else
    {
        ct->setText("0");
        this->m_data[index] = false;
        
        emit this->bitChanged(index, false);
    }
    emit this->valueChanged(this->value());
}
