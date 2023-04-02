#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QValidator>
#include <QComboBox>
#include <QCursor>
#include <QPainter>
#include <QClipboard>
#include <QApplication>
#include <QProcess>
#include <QMutableMapIterator>
#include <QStringListModel>

#include <QDebug>

#include "WindowController/WindowController.h"
#include "WindowController/CursorController.h"
#include "ProcessController/ProcessController.h"

#include "AboutDialog/aboutdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
    enum class CurrentTabPage
    {
        Selection,
        Window,
        Process,
        Cursor,
        Class
    };
    
    enum class SelectionMode : bool
    {
        Dynamic,
        Static
    };
    
    enum class WindowImageDisplayMode : bool
    {
        WindowImage,
        ScreenImage
    };
    
    using DynamicMode = WindowController::DynamicWindowFlags;
    
    
    void updateWindowTreeInSelectionPage() noexcept;
    
    static inline int getBaseFromRadixComboBox(const QComboBox* const & combobox) noexcept
    {
        const QString& text = combobox->currentText();
        
        if (text == "Hex") return 16;
        if (text == "Dec") return 10;
        if (text == "Oct") return 8;
        if (text == "Bin") return 2;
        
        return 10;
    }
    
public slots:
    void updateHwnd();
    void updateInformation();
    
    void saveAllInfoToClipboard();
    
private slots:
    void on_tabMainWidget_currentChanged(int index);
    void on_cursorColorBox_colorChange(const QColor &);
    
    void on_cursorRColorSlider_valueChanged(int value);
    void on_cursorGColorSlider_valueChanged(int value);
    void on_cursorBColorSlider_valueChanged(int value);
    
    void on_dynamicButton_clicked();
    void on_staticButton_clicked();
    
    void on_dynamicActiveButton_clicked();
    void on_dynamicForegroundButton_clicked();
    void on_dynamicUnderCursorPointButton_clicked();
    void on_dynamicPUnderCursorPointButton_clicked();
    void on_dynamicDesktopButton_clicked();
    void on_dynamicFocusButton_clicked();
    
    void on_infoUpdateIntervalSpinBox_valueChanged(int arg1);
    void on_hwndUpdateIntervalSpinBox_valueChanged(int arg1);
    
    void on_currentHwndEdit_valueChange(unsigned long long int value);
    
    void on_titleEdit_textEdited(const QString& arg1);
    
    void on_closeWindowButton_clicked();
    void on_destroyWindowButton_clicked();
    void on_killProcessButton_clicked();
    
    void on_sizeWidthSpinBox_valueChanged(int arg1);
    void on_sizeWidthSlider_valueChanged(int value);
    void on_sizeHeightSpinBox_valueChanged(int arg1);
    void on_sizeHeightSlider_valueChanged(int value);
    
    void on_activeCheckBox_clicked(bool checked);
    void on_showCheckBox_clicked(bool checked);
    void on_topmostCheckBox_clicked(bool checked);
    void on_opacitySpinBox_valueChanged(int arg1);
    void on_opacitySlider_valueChanged(int value);
    
    void on_eraseGroupBox_clicked(bool checked);
    void on_eraseRedSpinBox_valueChanged(int arg1);
    void on_eraseGreenSpinBox_valueChanged(int arg1);
    void on_eraseBlueSpinBox_valueChanged(int arg1);
    
    void on_titleCopyButton_clicked();
    void on_classCopyButton_clicked();
    void on_pathCopyButton_clicked();
    
    void on_hwndRadixComboBox_currentTextChanged(const QString& arg1);
    void on_pidRadixComboBox_currentTextChanged(const QString& arg1);
    
    void on_staticFindBoxEdit_textEdited(const QString& arg1);
    
    void on_staticWindowsTreeWidget_itemSelectionChanged();
    
    void on_imageDisplayWindowButton_clicked();
    void on_imageDisplayScreenButton_clicked();
    
    void on_saveImageButton_clicked();
    
    void on_copyProcessPathButton_clicked();
    void on_openExplorerButton_clicked();
    
    void on_rectLeftSpinBox_valueChanged(int arg1);
    void on_rectLeftSlider_valueChanged(int value);
    void on_rectRightSpinBox_valueChanged(int arg1);
    void on_rectRightSlider_valueChanged(int value);
    void on_rectTopSpinBox_valueChanged(int arg1);
    void on_rectTopSlider_valueChanged(int value);
    void on_rectBottomSpinBox_valueChanged(int arg1);
    void on_rectBottomSlider_valueChanged(int value);
    
    void on_processIdLineEdit_textChanged(const QString& arg1);
    
private:
    void sf_setBinsetEditTips() noexcept;
    
private:
    Ui::MainWindow* ui;
    
    WindowController* hwnd;
    ProcessController* process;
    
    CurrentTabPage m_currentTabPage;
    
    const QMap<CurrentTabPage, QString> m_currentTabPageObjectName
    {
        {CurrentTabPage::Selection, QString("tabSelect")},
        {CurrentTabPage::Window, QString("tabWindow")},
        {CurrentTabPage::Process, QString("tabProcess")},
        {CurrentTabPage::Cursor, QString("tabCursor")},
        {CurrentTabPage::Class, QString("tabClass")}
    };
    
    SelectionMode m_selectionMode = SelectionMode::Dynamic;
    DynamicMode m_dynamicMode = DynamicMode::UnderCursorPoint;
    WindowImageDisplayMode m_windowImageDisplayMode = WindowImageDisplayMode::WindowImage;
    
    unsigned int m_updateInterval_Info;
    unsigned int m_updateInterval_Hwnd;
    
    QTimer* m_timerUpdateInfo;
    QTimer* m_timerUpdateHwnd;
    
    QMap<HWND, QVector<HWND>> m_windowTree;
    
    QStringListModel* m_processCmdLineListModel;
};
#endif // MAINWINDOW_H
