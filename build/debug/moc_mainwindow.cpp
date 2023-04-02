/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[64];
    char stringdata0[1851];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "updateHwnd"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "updateInformation"
QT_MOC_LITERAL(4, 41, 22), // "saveAllInfoToClipboard"
QT_MOC_LITERAL(5, 64, 31), // "on_tabMainWidget_currentChanged"
QT_MOC_LITERAL(6, 96, 5), // "index"
QT_MOC_LITERAL(7, 102, 29), // "on_cursorColorBox_colorChange"
QT_MOC_LITERAL(8, 132, 34), // "on_cursorRColorSlider_valueCh..."
QT_MOC_LITERAL(9, 167, 5), // "value"
QT_MOC_LITERAL(10, 173, 34), // "on_cursorGColorSlider_valueCh..."
QT_MOC_LITERAL(11, 208, 34), // "on_cursorBColorSlider_valueCh..."
QT_MOC_LITERAL(12, 243, 24), // "on_dynamicButton_clicked"
QT_MOC_LITERAL(13, 268, 23), // "on_staticButton_clicked"
QT_MOC_LITERAL(14, 292, 30), // "on_dynamicActiveButton_clicked"
QT_MOC_LITERAL(15, 323, 34), // "on_dynamicForegroundButton_cl..."
QT_MOC_LITERAL(16, 358, 40), // "on_dynamicUnderCursorPointBut..."
QT_MOC_LITERAL(17, 399, 41), // "on_dynamicPUnderCursorPointBu..."
QT_MOC_LITERAL(18, 441, 31), // "on_dynamicDesktopButton_clicked"
QT_MOC_LITERAL(19, 473, 29), // "on_dynamicFocusButton_clicked"
QT_MOC_LITERAL(20, 503, 41), // "on_infoUpdateIntervalSpinBox_..."
QT_MOC_LITERAL(21, 545, 4), // "arg1"
QT_MOC_LITERAL(22, 550, 41), // "on_hwndUpdateIntervalSpinBox_..."
QT_MOC_LITERAL(23, 592, 30), // "on_currentHwndEdit_valueChange"
QT_MOC_LITERAL(24, 623, 22), // "unsigned long long int"
QT_MOC_LITERAL(25, 646, 23), // "on_titleEdit_textEdited"
QT_MOC_LITERAL(26, 670, 28), // "on_closeWindowButton_clicked"
QT_MOC_LITERAL(27, 699, 30), // "on_destroyWindowButton_clicked"
QT_MOC_LITERAL(28, 730, 28), // "on_killProcessButton_clicked"
QT_MOC_LITERAL(29, 759, 32), // "on_sizeWidthSpinBox_valueChanged"
QT_MOC_LITERAL(30, 792, 31), // "on_sizeWidthSlider_valueChanged"
QT_MOC_LITERAL(31, 824, 33), // "on_sizeHeightSpinBox_valueCha..."
QT_MOC_LITERAL(32, 858, 32), // "on_sizeHeightSlider_valueChanged"
QT_MOC_LITERAL(33, 891, 25), // "on_activeCheckBox_clicked"
QT_MOC_LITERAL(34, 917, 7), // "checked"
QT_MOC_LITERAL(35, 925, 23), // "on_showCheckBox_clicked"
QT_MOC_LITERAL(36, 949, 26), // "on_topmostCheckBox_clicked"
QT_MOC_LITERAL(37, 976, 30), // "on_opacitySpinBox_valueChanged"
QT_MOC_LITERAL(38, 1007, 29), // "on_opacitySlider_valueChanged"
QT_MOC_LITERAL(39, 1037, 24), // "on_eraseGroupBox_clicked"
QT_MOC_LITERAL(40, 1062, 31), // "on_eraseRedSpinBox_valueChanged"
QT_MOC_LITERAL(41, 1094, 33), // "on_eraseGreenSpinBox_valueCha..."
QT_MOC_LITERAL(42, 1128, 32), // "on_eraseBlueSpinBox_valueChanged"
QT_MOC_LITERAL(43, 1161, 26), // "on_titleCopyButton_clicked"
QT_MOC_LITERAL(44, 1188, 26), // "on_classCopyButton_clicked"
QT_MOC_LITERAL(45, 1215, 25), // "on_pathCopyButton_clicked"
QT_MOC_LITERAL(46, 1241, 39), // "on_hwndRadixComboBox_currentT..."
QT_MOC_LITERAL(47, 1281, 38), // "on_pidRadixComboBox_currentTe..."
QT_MOC_LITERAL(48, 1320, 31), // "on_staticFindBoxEdit_textEdited"
QT_MOC_LITERAL(49, 1352, 47), // "on_staticWindowsTreeWidget_it..."
QT_MOC_LITERAL(50, 1400, 35), // "on_imageDisplayWindowButton_c..."
QT_MOC_LITERAL(51, 1436, 35), // "on_imageDisplayScreenButton_c..."
QT_MOC_LITERAL(52, 1472, 26), // "on_saveImageButton_clicked"
QT_MOC_LITERAL(53, 1499, 32), // "on_copyProcessPathButton_clicked"
QT_MOC_LITERAL(54, 1532, 29), // "on_openExplorerButton_clicked"
QT_MOC_LITERAL(55, 1562, 31), // "on_rectLeftSpinBox_valueChanged"
QT_MOC_LITERAL(56, 1594, 30), // "on_rectLeftSlider_valueChanged"
QT_MOC_LITERAL(57, 1625, 32), // "on_rectRightSpinBox_valueChanged"
QT_MOC_LITERAL(58, 1658, 31), // "on_rectRightSlider_valueChanged"
QT_MOC_LITERAL(59, 1690, 30), // "on_rectTopSpinBox_valueChanged"
QT_MOC_LITERAL(60, 1721, 29), // "on_rectTopSlider_valueChanged"
QT_MOC_LITERAL(61, 1751, 33), // "on_rectBottomSpinBox_valueCha..."
QT_MOC_LITERAL(62, 1785, 32), // "on_rectBottomSlider_valueChanged"
QT_MOC_LITERAL(63, 1818, 32) // "on_processIdLineEdit_textChanged"

    },
    "MainWindow\0updateHwnd\0\0updateInformation\0"
    "saveAllInfoToClipboard\0"
    "on_tabMainWidget_currentChanged\0index\0"
    "on_cursorColorBox_colorChange\0"
    "on_cursorRColorSlider_valueChanged\0"
    "value\0on_cursorGColorSlider_valueChanged\0"
    "on_cursorBColorSlider_valueChanged\0"
    "on_dynamicButton_clicked\0"
    "on_staticButton_clicked\0"
    "on_dynamicActiveButton_clicked\0"
    "on_dynamicForegroundButton_clicked\0"
    "on_dynamicUnderCursorPointButton_clicked\0"
    "on_dynamicPUnderCursorPointButton_clicked\0"
    "on_dynamicDesktopButton_clicked\0"
    "on_dynamicFocusButton_clicked\0"
    "on_infoUpdateIntervalSpinBox_valueChanged\0"
    "arg1\0on_hwndUpdateIntervalSpinBox_valueChanged\0"
    "on_currentHwndEdit_valueChange\0"
    "unsigned long long int\0on_titleEdit_textEdited\0"
    "on_closeWindowButton_clicked\0"
    "on_destroyWindowButton_clicked\0"
    "on_killProcessButton_clicked\0"
    "on_sizeWidthSpinBox_valueChanged\0"
    "on_sizeWidthSlider_valueChanged\0"
    "on_sizeHeightSpinBox_valueChanged\0"
    "on_sizeHeightSlider_valueChanged\0"
    "on_activeCheckBox_clicked\0checked\0"
    "on_showCheckBox_clicked\0"
    "on_topmostCheckBox_clicked\0"
    "on_opacitySpinBox_valueChanged\0"
    "on_opacitySlider_valueChanged\0"
    "on_eraseGroupBox_clicked\0"
    "on_eraseRedSpinBox_valueChanged\0"
    "on_eraseGreenSpinBox_valueChanged\0"
    "on_eraseBlueSpinBox_valueChanged\0"
    "on_titleCopyButton_clicked\0"
    "on_classCopyButton_clicked\0"
    "on_pathCopyButton_clicked\0"
    "on_hwndRadixComboBox_currentTextChanged\0"
    "on_pidRadixComboBox_currentTextChanged\0"
    "on_staticFindBoxEdit_textEdited\0"
    "on_staticWindowsTreeWidget_itemSelectionChanged\0"
    "on_imageDisplayWindowButton_clicked\0"
    "on_imageDisplayScreenButton_clicked\0"
    "on_saveImageButton_clicked\0"
    "on_copyProcessPathButton_clicked\0"
    "on_openExplorerButton_clicked\0"
    "on_rectLeftSpinBox_valueChanged\0"
    "on_rectLeftSlider_valueChanged\0"
    "on_rectRightSpinBox_valueChanged\0"
    "on_rectRightSlider_valueChanged\0"
    "on_rectTopSpinBox_valueChanged\0"
    "on_rectTopSlider_valueChanged\0"
    "on_rectBottomSpinBox_valueChanged\0"
    "on_rectBottomSlider_valueChanged\0"
    "on_processIdLineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  299,    2, 0x0a /* Public */,
       3,    0,  300,    2, 0x0a /* Public */,
       4,    0,  301,    2, 0x0a /* Public */,
       5,    1,  302,    2, 0x08 /* Private */,
       7,    1,  305,    2, 0x08 /* Private */,
       8,    1,  308,    2, 0x08 /* Private */,
      10,    1,  311,    2, 0x08 /* Private */,
      11,    1,  314,    2, 0x08 /* Private */,
      12,    0,  317,    2, 0x08 /* Private */,
      13,    0,  318,    2, 0x08 /* Private */,
      14,    0,  319,    2, 0x08 /* Private */,
      15,    0,  320,    2, 0x08 /* Private */,
      16,    0,  321,    2, 0x08 /* Private */,
      17,    0,  322,    2, 0x08 /* Private */,
      18,    0,  323,    2, 0x08 /* Private */,
      19,    0,  324,    2, 0x08 /* Private */,
      20,    1,  325,    2, 0x08 /* Private */,
      22,    1,  328,    2, 0x08 /* Private */,
      23,    1,  331,    2, 0x08 /* Private */,
      25,    1,  334,    2, 0x08 /* Private */,
      26,    0,  337,    2, 0x08 /* Private */,
      27,    0,  338,    2, 0x08 /* Private */,
      28,    0,  339,    2, 0x08 /* Private */,
      29,    1,  340,    2, 0x08 /* Private */,
      30,    1,  343,    2, 0x08 /* Private */,
      31,    1,  346,    2, 0x08 /* Private */,
      32,    1,  349,    2, 0x08 /* Private */,
      33,    1,  352,    2, 0x08 /* Private */,
      35,    1,  355,    2, 0x08 /* Private */,
      36,    1,  358,    2, 0x08 /* Private */,
      37,    1,  361,    2, 0x08 /* Private */,
      38,    1,  364,    2, 0x08 /* Private */,
      39,    1,  367,    2, 0x08 /* Private */,
      40,    1,  370,    2, 0x08 /* Private */,
      41,    1,  373,    2, 0x08 /* Private */,
      42,    1,  376,    2, 0x08 /* Private */,
      43,    0,  379,    2, 0x08 /* Private */,
      44,    0,  380,    2, 0x08 /* Private */,
      45,    0,  381,    2, 0x08 /* Private */,
      46,    1,  382,    2, 0x08 /* Private */,
      47,    1,  385,    2, 0x08 /* Private */,
      48,    1,  388,    2, 0x08 /* Private */,
      49,    0,  391,    2, 0x08 /* Private */,
      50,    0,  392,    2, 0x08 /* Private */,
      51,    0,  393,    2, 0x08 /* Private */,
      52,    0,  394,    2, 0x08 /* Private */,
      53,    0,  395,    2, 0x08 /* Private */,
      54,    0,  396,    2, 0x08 /* Private */,
      55,    1,  397,    2, 0x08 /* Private */,
      56,    1,  400,    2, 0x08 /* Private */,
      57,    1,  403,    2, 0x08 /* Private */,
      58,    1,  406,    2, 0x08 /* Private */,
      59,    1,  409,    2, 0x08 /* Private */,
      60,    1,  412,    2, 0x08 /* Private */,
      61,    1,  415,    2, 0x08 /* Private */,
      62,    1,  418,    2, 0x08 /* Private */,
      63,    1,  421,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 24,    9,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateHwnd(); break;
        case 1: _t->updateInformation(); break;
        case 2: _t->saveAllInfoToClipboard(); break;
        case 3: _t->on_tabMainWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_cursorColorBox_colorChange((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->on_cursorRColorSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_cursorGColorSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_cursorBColorSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_dynamicButton_clicked(); break;
        case 9: _t->on_staticButton_clicked(); break;
        case 10: _t->on_dynamicActiveButton_clicked(); break;
        case 11: _t->on_dynamicForegroundButton_clicked(); break;
        case 12: _t->on_dynamicUnderCursorPointButton_clicked(); break;
        case 13: _t->on_dynamicPUnderCursorPointButton_clicked(); break;
        case 14: _t->on_dynamicDesktopButton_clicked(); break;
        case 15: _t->on_dynamicFocusButton_clicked(); break;
        case 16: _t->on_infoUpdateIntervalSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_hwndUpdateIntervalSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_currentHwndEdit_valueChange((*reinterpret_cast< unsigned long long int(*)>(_a[1]))); break;
        case 19: _t->on_titleEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->on_closeWindowButton_clicked(); break;
        case 21: _t->on_destroyWindowButton_clicked(); break;
        case 22: _t->on_killProcessButton_clicked(); break;
        case 23: _t->on_sizeWidthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_sizeWidthSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_sizeHeightSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_sizeHeightSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_activeCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_showCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->on_topmostCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->on_opacitySpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_opacitySlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_eraseGroupBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_eraseRedSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_eraseGreenSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_eraseBlueSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_titleCopyButton_clicked(); break;
        case 37: _t->on_classCopyButton_clicked(); break;
        case 38: _t->on_pathCopyButton_clicked(); break;
        case 39: _t->on_hwndRadixComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->on_pidRadixComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->on_staticFindBoxEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->on_staticWindowsTreeWidget_itemSelectionChanged(); break;
        case 43: _t->on_imageDisplayWindowButton_clicked(); break;
        case 44: _t->on_imageDisplayScreenButton_clicked(); break;
        case 45: _t->on_saveImageButton_clicked(); break;
        case 46: _t->on_copyProcessPathButton_clicked(); break;
        case 47: _t->on_openExplorerButton_clicked(); break;
        case 48: _t->on_rectLeftSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_rectLeftSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_rectRightSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_rectRightSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->on_rectTopSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->on_rectTopSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->on_rectBottomSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->on_rectBottomSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->on_processIdLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
