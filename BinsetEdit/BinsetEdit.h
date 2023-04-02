#ifndef BINSETEDIT_H
#define BINSETEDIT_H

#include <QWidget>
#include <QFrame>
#include <QtGui>
#include <QPushButton>
#include <QLayout>
#include <bitset>

class BinsetEdit : public QFrame
{
    Q_OBJECT
    
    Q_PROPERTY(type_integer_value value READ value WRITE setValue NOTIFY valueChanged)
    Q_PROPERTY(bool readOnly READ readOnly WRITE setReadOnly)
    
public:
    
    using type_bit = bool;
    using type_size = unsigned int;
    using type_integer_value = unsigned long long int;
    
    using type_throw_invalid_binary_character = QChar;
    
    explicit BinsetEdit(QWidget* parent = nullptr) : QFrame(parent) {}
    
    explicit BinsetEdit(QWidget* parent, int binCnt, type_bit fill = false)
        : QFrame(parent) { this->init(binCnt, fill); }
    
    explicit BinsetEdit(QWidget* parent, const QString& binStr, bool throwException = true);
    
    template<size_t _Bit>
    explicit BinsetEdit(QWidget* parent, const std::bitset<_Bit>& binSet);
    
    
    inline void setLenght(type_size len, type_bit fill = false) noexcept
    {
        this->init(len, fill);
    }
    inline type_size lenght() const noexcept
    {
        return this->m_button.size();
    }
    
    
    inline void setValue(const type_integer_value& value) noexcept
    {
        std::bitset<sizeof(value) * 8> v(value);
        std::string s = v.to_string();
        
        if (this->m_data.size() > sizeof(value) * 8)
        {
            s = std::string(m_data.size() - sizeof(value) * 8, '0') + s;
        }
        else if (this->m_data.size() < sizeof(value) * 8)
        {
            s = s.substr(sizeof(value) * 8 - this->m_data.size());
        }
        
        
        for (int i = 0; i < int(s.size()); ++i)
        {
            if (this->m_data[i] != type_bit(s[i] - '0'))
            {
                this->m_data[i] = type_bit(s[i] - '0');
                this->m_button.at(i)->setText(type_bit(s[i] - '0') ? "1" : "0");
                emit this->bitChanged(i, this->m_data[i]);
            }
        }
        
        emit this->valueChanged(value);
    }
    inline type_integer_value value() const noexcept
    {
        QString str(this->m_data.size(), '0');
        
        for (int i = 0; i < this->m_data.size(); ++i)
        {
            if (this->m_data.at(i))
            {
                str[i] = '1';
            }
        }
        return str.toULongLong(nullptr, 2);
    }
    
    
    void setBitTip(int index, const QString& tip) noexcept;
    QString bitTip(int index) const noexcept;
    
    void setBitTips(const QStringList& tips) noexcept;
    QStringList bitTips() const noexcept;
    
    inline void setReadOnly(bool readOnly) noexcept
    {
        this->m_readOnly = readOnly;
    }
    inline bool readOnly() const noexcept
    {
        return this->m_readOnly;
    }
    
    
    
    inline QVector<type_bit> data() const noexcept
    {
        return this->m_data;
    }
    
    inline const type_bit& at(int pos) const noexcept
    {
        return this->m_data[pos];
    }
    
    inline type_bit& operator[](int pos) noexcept
    {
        return this->m_data[pos];
    }
    
    inline operator QString() const noexcept
    {
        QString str(m_data.size(), '0');
        
        for (int i = 0; i < m_data.size(); ++i)
        {
            if (m_data[i] == true)
            {
                str[i] = '1';
            }
        }
        
        return str;
    }
    
    inline operator type_integer_value() const noexcept
    {
        return this->value();
    }
    
    const QString pushButtonObjectName = "BinsetEdit__PushButton__";
    
protected:
    
    virtual void init(type_size size, type_bit fill = false) noexcept;
    
private slots:
    
    void onButtonClicked();
    
signals:
    void valueChanged(const type_integer_value& value);
    void bitChanged(int pos, type_bit value);
    
private:
    QVector<type_bit> m_data;
    QVector<QPushButton*> m_button;
    
    bool m_readOnly = false;
};

#endif // BINSETEDIT_H
