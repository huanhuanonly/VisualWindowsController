/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "BinsetEdit/BinsetEdit.h"
#include "RadixLineEdit/RadixLineEdit.h"
#include "SingleColorWidget/SingleColorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabMainWidget;
    QWidget *tabSelect;
    QGridLayout *gridLayout_3;
    QFrame *selectionModeFrame;
    QHBoxLayout *horizontalLayout_11;
    QLabel *selectionModeLabel;
    QRadioButton *dynamicButton;
    QRadioButton *staticButton;
    QGroupBox *staticGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *staticFindBoxEdit;
    QTreeWidget *staticWindowsTreeWidget;
    QGroupBox *dynamicGroupBox;
    QGridLayout *gridLayout_5;
    QRadioButton *dynamicUnderCursorPointButton;
    QRadioButton *dynamicPUnderCursorPointButton;
    QRadioButton *dynamicDesktopButton;
    QRadioButton *dynamicFocusButton;
    QRadioButton *dynamicActiveButton;
    QRadioButton *dynamicForegroundButton;
    QWidget *updateIntervalWidget;
    QGridLayout *updateIntervalGridLayout;
    QSpinBox *infoUpdateIntervalSpinBox;
    QLabel *infoUpdateIntervalLabel;
    QLabel *hwndUpdateIntervalLabel;
    QSpinBox *hwndUpdateIntervalSpinBox;
    QGroupBox *currentHwndGroupBox;
    QHBoxLayout *horizontalLayout_12;
    RadixLineEdit *currentHwndEdit;
    QComboBox *currentHwndRadixComboBox;
    QWidget *tabWindow;
    QGridLayout *tabWindowGridLayout;
    QWidget *pathWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *pathLabel;
    QLineEdit *pathEdit;
    QToolButton *pathCopyButton;
    QWidget *closeWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *closeWindowButton;
    QPushButton *destroyWindowButton;
    QPushButton *killProcessButton;
    QWidget *pidWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *pidLabel;
    QLCDNumber *pidLcdNumber;
    QComboBox *pidRadixComboBox;
    QWidget *classWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *classLabel;
    QLineEdit *classEdit;
    QToolButton *classCopyButton;
    QWidget *hwndWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *hwndLabel;
    QLCDNumber *hwndLcdNumber;
    QComboBox *hwndRadixComboBox;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titleLabel;
    QLineEdit *titleEdit;
    QToolButton *titleCopyButton;
    QGroupBox *styleGroupBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *basicStyleLabel;
    BinsetEdit *basicStyleBinsetFrame;
    QLabel *styleExLabel;
    BinsetEdit *styleExBinsetFrame;
    QLabel *classStyleLabel;
    BinsetEdit *classStyleBinsetFrame;
    QWidget *tabWindowMidWidget;
    QGridLayout *gridLayout_7;
    QGroupBox *rectGroupBox;
    QGridLayout *gridLayout;
    QSpinBox *rectLeftSpinBox;
    QSpinBox *rectRightSpinBox;
    QLabel *rectLeftLabel;
    QSlider *rectRightSlider;
    QSlider *rectTopSlider;
    QSpinBox *rectTopSpinBox;
    QLabel *rectTopLabel;
    QSlider *rectBottomSlider;
    QSlider *rectLeftSlider;
    QLabel *rectBottomLabel;
    QLabel *rectRightLabel;
    QSpinBox *rectBottomSpinBox;
    QGroupBox *sizeGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *sizeWidthLabel;
    QSpinBox *sizeWidthSpinBox;
    QSlider *sizeWidthSlider;
    QLabel *sizeHeightLabel;
    QSpinBox *sizeHeightSpinBox;
    QSlider *sizeHeightSlider;
    QGroupBox *dpiGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *dpiLabel;
    QGroupBox *codeGroupBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *codeLabel;
    QGroupBox *otherGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *activeCheckBox;
    QCheckBox *showCheckBox;
    QCheckBox *topmostCheckBox;
    QGroupBox *opacityGroupBox;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *opacitySpinBox;
    QSlider *opacitySlider;
    QGroupBox *eraseGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *eraseRedSpinBox;
    QSpinBox *eraseGreenSpinBox;
    QSpinBox *eraseBlueSpinBox;
    QWidget *tabProcess;
    QGridLayout *gridLayout_6;
    QDateTimeEdit *processStartDateTimeEdit;
    QListView *processCommandLineListView;
    QLabel *currentTimeLabel;
    QLabel *processIdLabel;
    QLineEdit *processPathLineEdit;
    QLabel *processStartTimeLabel;
    QLabel *processPathLabel;
    QGroupBox *processWindowsListGroupBox;
    QHBoxLayout *processWindowListLayout;
    QTreeWidget *processWindowTreeWidget;
    QLineEdit *processIdLineEdit;
    QLabel *processCommandLineLabel;
    QDateTimeEdit *currentDateTimeEdit;
    QFrame *processTimeSplitLine;
    QLineEdit *processRunningDateTimeEdit;
    QPushButton *copyProcessPathButton;
    QPushButton *openExplorerButton;
    QWidget *tabCursor;
    QHBoxLayout *tabCursorLayout;
    QWidget *cursorLeftWidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *windowImageGroupBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *windowImageLabel;
    QWidget *cursorColorWidget;
    QGridLayout *cursorColorWidgetLayout;
    SingleColorWidget *cursorColorBox;
    QLabel *cursorRColorLabel;
    QSlider *cursorRColorSlider;
    QLabel *cursorGColorLabel;
    QSlider *cursorGColorSlider;
    QLabel *cursorBColorLabel;
    QSlider *cursorBColorSlider;
    QWidget *cursorRightWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *imageDisplayModeWidget;
    QVBoxLayout *imageDisplayModeLayout;
    QRadioButton *imageDisplayWindowButton;
    QRadioButton *imageDisplayScreenButton;
    QFrame *splitline;
    QCheckBox *colorCircleCheckBox;
    QGroupBox *imageMagnifierGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *imageMagnifierLabel;
    QGroupBox *cursorCoordinatePointGroupBox;
    QGridLayout *cursorCoordinatePointLayout;
    QLabel *cursorPointInScreenLabel;
    QSpinBox *cursorPointXInScreenSpinBox;
    QSlider *cursorPointXInScreenSlider;
    QSpinBox *cursorPointYInScreenSpinBox;
    QSlider *cursorPointYInScreenSlider;
    QLabel *cursorPointInWindowLabel;
    QSpinBox *cursorPointXInWindowSpinBox;
    QSlider *cursorPointXInWindowSlider;
    QSpinBox *cursorPointYInWindowSpinBox;
    QSlider *cursorPointYInWindowSlider;
    QPushButton *saveImageButton;
    QWidget *tabClass;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(794, 640);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(791, 640));
        QFont font;
        font.setFamily(QString::fromUtf8("Cascadia Mono ExtraLight"));
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabMainWidget = new QTabWidget(centralwidget);
        tabMainWidget->setObjectName(QString::fromUtf8("tabMainWidget"));
        tabMainWidget->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cascadia Mono Light"));
        font1.setPointSize(9);
        font1.setItalic(false);
        tabMainWidget->setFont(font1);
        tabMainWidget->setTabPosition(QTabWidget::West);
        tabMainWidget->setTabShape(QTabWidget::Rounded);
        tabMainWidget->setElideMode(Qt::ElideNone);
        tabMainWidget->setUsesScrollButtons(true);
        tabMainWidget->setDocumentMode(false);
        tabMainWidget->setTabsClosable(false);
        tabMainWidget->setMovable(true);
        tabMainWidget->setTabBarAutoHide(false);
        tabSelect = new QWidget();
        tabSelect->setObjectName(QString::fromUtf8("tabSelect"));
        tabSelect->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(tabSelect);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        selectionModeFrame = new QFrame(tabSelect);
        selectionModeFrame->setObjectName(QString::fromUtf8("selectionModeFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectionModeFrame->sizePolicy().hasHeightForWidth());
        selectionModeFrame->setSizePolicy(sizePolicy1);
        selectionModeFrame->setFont(font1);
        selectionModeFrame->setFrameShape(QFrame::Box);
        selectionModeFrame->setFrameShadow(QFrame::Raised);
        selectionModeFrame->setLineWidth(1);
        horizontalLayout_11 = new QHBoxLayout(selectionModeFrame);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        selectionModeLabel = new QLabel(selectionModeFrame);
        selectionModeLabel->setObjectName(QString::fromUtf8("selectionModeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectionModeLabel->sizePolicy().hasHeightForWidth());
        selectionModeLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(selectionModeLabel);

        dynamicButton = new QRadioButton(selectionModeFrame);
        dynamicButton->setObjectName(QString::fromUtf8("dynamicButton"));
        dynamicButton->setChecked(true);
        dynamicButton->setAutoRepeat(false);

        horizontalLayout_11->addWidget(dynamicButton);

        staticButton = new QRadioButton(selectionModeFrame);
        staticButton->setObjectName(QString::fromUtf8("staticButton"));

        horizontalLayout_11->addWidget(staticButton);


        gridLayout_3->addWidget(selectionModeFrame, 1, 0, 1, 1);

        staticGroupBox = new QGroupBox(tabSelect);
        staticGroupBox->setObjectName(QString::fromUtf8("staticGroupBox"));
        staticGroupBox->setEnabled(false);
        verticalLayout_3 = new QVBoxLayout(staticGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        staticFindBoxEdit = new QLineEdit(staticGroupBox);
        staticFindBoxEdit->setObjectName(QString::fromUtf8("staticFindBoxEdit"));
        staticFindBoxEdit->setMaxLength(1024);
        staticFindBoxEdit->setFrame(true);
        staticFindBoxEdit->setDragEnabled(false);
        staticFindBoxEdit->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(staticFindBoxEdit);

        staticWindowsTreeWidget = new QTreeWidget(staticGroupBox);
        staticWindowsTreeWidget->setObjectName(QString::fromUtf8("staticWindowsTreeWidget"));
        staticWindowsTreeWidget->setEnabled(false);
        staticWindowsTreeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        staticWindowsTreeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        staticWindowsTreeWidget->setAutoScroll(true);
        staticWindowsTreeWidget->setDragEnabled(false);
        staticWindowsTreeWidget->setDragDropOverwriteMode(false);
        staticWindowsTreeWidget->setAllColumnsShowFocus(false);
        staticWindowsTreeWidget->setColumnCount(3);
        staticWindowsTreeWidget->header()->setVisible(true);
        staticWindowsTreeWidget->header()->setCascadingSectionResizes(false);
        staticWindowsTreeWidget->header()->setHighlightSections(false);
        staticWindowsTreeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        staticWindowsTreeWidget->header()->setStretchLastSection(true);

        verticalLayout_3->addWidget(staticWindowsTreeWidget);


        gridLayout_3->addWidget(staticGroupBox, 3, 0, 1, 2);

        dynamicGroupBox = new QGroupBox(tabSelect);
        dynamicGroupBox->setObjectName(QString::fromUtf8("dynamicGroupBox"));
        dynamicGroupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(dynamicGroupBox->sizePolicy().hasHeightForWidth());
        dynamicGroupBox->setSizePolicy(sizePolicy1);
        dynamicGroupBox->setMinimumSize(QSize(0, 100));
        dynamicGroupBox->setCheckable(false);
        gridLayout_5 = new QGridLayout(dynamicGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        dynamicUnderCursorPointButton = new QRadioButton(dynamicGroupBox);
        dynamicUnderCursorPointButton->setObjectName(QString::fromUtf8("dynamicUnderCursorPointButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dynamicUnderCursorPointButton->sizePolicy().hasHeightForWidth());
        dynamicUnderCursorPointButton->setSizePolicy(sizePolicy3);
        dynamicUnderCursorPointButton->setChecked(true);

        gridLayout_5->addWidget(dynamicUnderCursorPointButton, 1, 1, 1, 2);

        dynamicPUnderCursorPointButton = new QRadioButton(dynamicGroupBox);
        dynamicPUnderCursorPointButton->setObjectName(QString::fromUtf8("dynamicPUnderCursorPointButton"));
        sizePolicy3.setHeightForWidth(dynamicPUnderCursorPointButton->sizePolicy().hasHeightForWidth());
        dynamicPUnderCursorPointButton->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(dynamicPUnderCursorPointButton, 2, 1, 1, 2);

        dynamicDesktopButton = new QRadioButton(dynamicGroupBox);
        dynamicDesktopButton->setObjectName(QString::fromUtf8("dynamicDesktopButton"));
        sizePolicy3.setHeightForWidth(dynamicDesktopButton->sizePolicy().hasHeightForWidth());
        dynamicDesktopButton->setSizePolicy(sizePolicy3);
        dynamicDesktopButton->setCheckable(true);
        dynamicDesktopButton->setChecked(false);

        gridLayout_5->addWidget(dynamicDesktopButton, 1, 3, 1, 1);

        dynamicFocusButton = new QRadioButton(dynamicGroupBox);
        dynamicFocusButton->setObjectName(QString::fromUtf8("dynamicFocusButton"));
        sizePolicy3.setHeightForWidth(dynamicFocusButton->sizePolicy().hasHeightForWidth());
        dynamicFocusButton->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(dynamicFocusButton, 2, 3, 1, 1);

        dynamicActiveButton = new QRadioButton(dynamicGroupBox);
        dynamicActiveButton->setObjectName(QString::fromUtf8("dynamicActiveButton"));
        sizePolicy3.setHeightForWidth(dynamicActiveButton->sizePolicy().hasHeightForWidth());
        dynamicActiveButton->setSizePolicy(sizePolicy3);
        dynamicActiveButton->setChecked(false);

        gridLayout_5->addWidget(dynamicActiveButton, 2, 0, 1, 1);

        dynamicForegroundButton = new QRadioButton(dynamicGroupBox);
        dynamicForegroundButton->setObjectName(QString::fromUtf8("dynamicForegroundButton"));
        sizePolicy3.setHeightForWidth(dynamicForegroundButton->sizePolicy().hasHeightForWidth());
        dynamicForegroundButton->setSizePolicy(sizePolicy3);
        dynamicForegroundButton->setChecked(false);

        gridLayout_5->addWidget(dynamicForegroundButton, 1, 0, 1, 1);


        gridLayout_3->addWidget(dynamicGroupBox, 2, 0, 1, 2);

        updateIntervalWidget = new QWidget(tabSelect);
        updateIntervalWidget->setObjectName(QString::fromUtf8("updateIntervalWidget"));
        sizePolicy1.setHeightForWidth(updateIntervalWidget->sizePolicy().hasHeightForWidth());
        updateIntervalWidget->setSizePolicy(sizePolicy1);
        updateIntervalWidget->setAutoFillBackground(false);
        updateIntervalGridLayout = new QGridLayout(updateIntervalWidget);
        updateIntervalGridLayout->setObjectName(QString::fromUtf8("updateIntervalGridLayout"));
        infoUpdateIntervalSpinBox = new QSpinBox(updateIntervalWidget);
        infoUpdateIntervalSpinBox->setObjectName(QString::fromUtf8("infoUpdateIntervalSpinBox"));
        infoUpdateIntervalSpinBox->setMaximum(1000);
        infoUpdateIntervalSpinBox->setValue(20);

        updateIntervalGridLayout->addWidget(infoUpdateIntervalSpinBox, 0, 1, 1, 1);

        infoUpdateIntervalLabel = new QLabel(updateIntervalWidget);
        infoUpdateIntervalLabel->setObjectName(QString::fromUtf8("infoUpdateIntervalLabel"));

        updateIntervalGridLayout->addWidget(infoUpdateIntervalLabel, 0, 0, 1, 1);

        hwndUpdateIntervalLabel = new QLabel(updateIntervalWidget);
        hwndUpdateIntervalLabel->setObjectName(QString::fromUtf8("hwndUpdateIntervalLabel"));

        updateIntervalGridLayout->addWidget(hwndUpdateIntervalLabel, 1, 0, 1, 1);

        hwndUpdateIntervalSpinBox = new QSpinBox(updateIntervalWidget);
        hwndUpdateIntervalSpinBox->setObjectName(QString::fromUtf8("hwndUpdateIntervalSpinBox"));
        hwndUpdateIntervalSpinBox->setFrame(true);
        hwndUpdateIntervalSpinBox->setProperty("showGroupSeparator", QVariant(false));
        hwndUpdateIntervalSpinBox->setMaximum(1000);
        hwndUpdateIntervalSpinBox->setValue(20);

        updateIntervalGridLayout->addWidget(hwndUpdateIntervalSpinBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(updateIntervalWidget, 1, 1, 1, 1);

        currentHwndGroupBox = new QGroupBox(tabSelect);
        currentHwndGroupBox->setObjectName(QString::fromUtf8("currentHwndGroupBox"));
        horizontalLayout_12 = new QHBoxLayout(currentHwndGroupBox);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        currentHwndEdit = new RadixLineEdit(currentHwndGroupBox);
        currentHwndEdit->setObjectName(QString::fromUtf8("currentHwndEdit"));
        currentHwndEdit->setMaxLength(64);
        currentHwndEdit->setFrame(false);
        currentHwndEdit->setReadOnly(true);

        horizontalLayout_12->addWidget(currentHwndEdit);

        currentHwndRadixComboBox = new QComboBox(currentHwndGroupBox);
        currentHwndRadixComboBox->addItem(QString());
        currentHwndRadixComboBox->addItem(QString());
        currentHwndRadixComboBox->addItem(QString());
        currentHwndRadixComboBox->addItem(QString());
        currentHwndRadixComboBox->setObjectName(QString::fromUtf8("currentHwndRadixComboBox"));
        currentHwndRadixComboBox->setEditable(false);
        currentHwndRadixComboBox->setFrame(true);

        horizontalLayout_12->addWidget(currentHwndRadixComboBox);


        gridLayout_3->addWidget(currentHwndGroupBox, 0, 0, 1, 2);

        tabMainWidget->addTab(tabSelect, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QString::fromUtf8("tabWindow"));
        tabWindowGridLayout = new QGridLayout(tabWindow);
        tabWindowGridLayout->setObjectName(QString::fromUtf8("tabWindowGridLayout"));
        tabWindowGridLayout->setHorizontalSpacing(7);
        tabWindowGridLayout->setVerticalSpacing(0);
        tabWindowGridLayout->setContentsMargins(0, 0, 0, 0);
        pathWidget = new QWidget(tabWindow);
        pathWidget->setObjectName(QString::fromUtf8("pathWidget"));
        sizePolicy1.setHeightForWidth(pathWidget->sizePolicy().hasHeightForWidth());
        pathWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(pathWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        pathLabel = new QLabel(pathWidget);
        pathLabel->setObjectName(QString::fromUtf8("pathLabel"));
        sizePolicy3.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy3);
        pathLabel->setMinimumSize(QSize(50, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cascadia Mono Light"));
        font2.setPointSize(10);
        font2.setItalic(false);
        pathLabel->setFont(font2);

        horizontalLayout_6->addWidget(pathLabel);

        pathEdit = new QLineEdit(pathWidget);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));
        pathEdit->setAutoFillBackground(false);
        pathEdit->setMaxLength(1024);
        pathEdit->setFrame(false);
        pathEdit->setEchoMode(QLineEdit::Normal);
        pathEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pathEdit->setDragEnabled(false);
        pathEdit->setReadOnly(true);
        pathEdit->setClearButtonEnabled(false);

        horizontalLayout_6->addWidget(pathEdit);

        pathCopyButton = new QToolButton(pathWidget);
        pathCopyButton->setObjectName(QString::fromUtf8("pathCopyButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resource/copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pathCopyButton->setIcon(icon);
        pathCopyButton->setCheckable(false);
        pathCopyButton->setChecked(false);
        pathCopyButton->setPopupMode(QToolButton::DelayedPopup);
        pathCopyButton->setAutoRaise(false);
        pathCopyButton->setArrowType(Qt::NoArrow);

        horizontalLayout_6->addWidget(pathCopyButton);


        tabWindowGridLayout->addWidget(pathWidget, 4, 0, 1, 3);

        closeWidget = new QWidget(tabWindow);
        closeWidget->setObjectName(QString::fromUtf8("closeWidget"));
        sizePolicy3.setHeightForWidth(closeWidget->sizePolicy().hasHeightForWidth());
        closeWidget->setSizePolicy(sizePolicy3);
        closeWidget->setMinimumSize(QSize(160, 150));
        verticalLayout = new QVBoxLayout(closeWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        closeWindowButton = new QPushButton(closeWidget);
        closeWindowButton->setObjectName(QString::fromUtf8("closeWindowButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(closeWindowButton->sizePolicy().hasHeightForWidth());
        closeWindowButton->setSizePolicy(sizePolicy4);
        closeWindowButton->setAutoDefault(false);
        closeWindowButton->setFlat(false);

        verticalLayout->addWidget(closeWindowButton);

        destroyWindowButton = new QPushButton(closeWidget);
        destroyWindowButton->setObjectName(QString::fromUtf8("destroyWindowButton"));
        sizePolicy4.setHeightForWidth(destroyWindowButton->sizePolicy().hasHeightForWidth());
        destroyWindowButton->setSizePolicy(sizePolicy4);
        destroyWindowButton->setAutoDefault(false);
        destroyWindowButton->setFlat(false);

        verticalLayout->addWidget(destroyWindowButton);

        killProcessButton = new QPushButton(closeWidget);
        killProcessButton->setObjectName(QString::fromUtf8("killProcessButton"));
        sizePolicy4.setHeightForWidth(killProcessButton->sizePolicy().hasHeightForWidth());
        killProcessButton->setSizePolicy(sizePolicy4);
        killProcessButton->setAutoDefault(false);
        killProcessButton->setFlat(false);

        verticalLayout->addWidget(killProcessButton);


        tabWindowGridLayout->addWidget(closeWidget, 6, 2, 1, 1);

        pidWidget = new QWidget(tabWindow);
        pidWidget->setObjectName(QString::fromUtf8("pidWidget"));
        sizePolicy1.setHeightForWidth(pidWidget->sizePolicy().hasHeightForWidth());
        pidWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(pidWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        pidLabel = new QLabel(pidWidget);
        pidLabel->setObjectName(QString::fromUtf8("pidLabel"));
        sizePolicy3.setHeightForWidth(pidLabel->sizePolicy().hasHeightForWidth());
        pidLabel->setSizePolicy(sizePolicy3);
        pidLabel->setMinimumSize(QSize(50, 0));
        pidLabel->setFont(font2);
        pidLabel->setTextFormat(Qt::AutoText);

        horizontalLayout_5->addWidget(pidLabel);

        pidLcdNumber = new QLCDNumber(pidWidget);
        pidLcdNumber->setObjectName(QString::fromUtf8("pidLcdNumber"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pidLcdNumber->sizePolicy().hasHeightForWidth());
        pidLcdNumber->setSizePolicy(sizePolicy5);
        pidLcdNumber->setFrameShape(QFrame::Panel);
        pidLcdNumber->setFrameShadow(QFrame::Raised);
        pidLcdNumber->setLineWidth(1);
        pidLcdNumber->setMidLineWidth(0);
        pidLcdNumber->setSmallDecimalPoint(false);
        pidLcdNumber->setDigitCount(64);
        pidLcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(pidLcdNumber);

        pidRadixComboBox = new QComboBox(pidWidget);
        pidRadixComboBox->addItem(QString());
        pidRadixComboBox->addItem(QString());
        pidRadixComboBox->addItem(QString());
        pidRadixComboBox->addItem(QString());
        pidRadixComboBox->setObjectName(QString::fromUtf8("pidRadixComboBox"));
        sizePolicy3.setHeightForWidth(pidRadixComboBox->sizePolicy().hasHeightForWidth());
        pidRadixComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(pidRadixComboBox);


        tabWindowGridLayout->addWidget(pidWidget, 1, 0, 1, 3);

        classWidget = new QWidget(tabWindow);
        classWidget->setObjectName(QString::fromUtf8("classWidget"));
        sizePolicy1.setHeightForWidth(classWidget->sizePolicy().hasHeightForWidth());
        classWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(classWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        classLabel = new QLabel(classWidget);
        classLabel->setObjectName(QString::fromUtf8("classLabel"));
        sizePolicy3.setHeightForWidth(classLabel->sizePolicy().hasHeightForWidth());
        classLabel->setSizePolicy(sizePolicy3);
        classLabel->setMinimumSize(QSize(50, 0));
        classLabel->setFont(font2);

        horizontalLayout_3->addWidget(classLabel);

        classEdit = new QLineEdit(classWidget);
        classEdit->setObjectName(QString::fromUtf8("classEdit"));
        classEdit->setAutoFillBackground(false);
        classEdit->setMaxLength(1024);
        classEdit->setFrame(false);
        classEdit->setEchoMode(QLineEdit::Normal);
        classEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        classEdit->setDragEnabled(false);
        classEdit->setReadOnly(true);
        classEdit->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(classEdit);

        classCopyButton = new QToolButton(classWidget);
        classCopyButton->setObjectName(QString::fromUtf8("classCopyButton"));
        classCopyButton->setIcon(icon);
        classCopyButton->setCheckable(false);
        classCopyButton->setChecked(false);
        classCopyButton->setPopupMode(QToolButton::DelayedPopup);
        classCopyButton->setAutoRaise(false);
        classCopyButton->setArrowType(Qt::NoArrow);

        horizontalLayout_3->addWidget(classCopyButton);


        tabWindowGridLayout->addWidget(classWidget, 3, 0, 1, 3);

        hwndWidget = new QWidget(tabWindow);
        hwndWidget->setObjectName(QString::fromUtf8("hwndWidget"));
        sizePolicy1.setHeightForWidth(hwndWidget->sizePolicy().hasHeightForWidth());
        hwndWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(hwndWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        hwndLabel = new QLabel(hwndWidget);
        hwndLabel->setObjectName(QString::fromUtf8("hwndLabel"));
        sizePolicy3.setHeightForWidth(hwndLabel->sizePolicy().hasHeightForWidth());
        hwndLabel->setSizePolicy(sizePolicy3);
        hwndLabel->setMinimumSize(QSize(50, 0));
        hwndLabel->setFont(font2);
        hwndLabel->setFrameShape(QFrame::NoFrame);
        hwndLabel->setTextFormat(Qt::AutoText);

        horizontalLayout_4->addWidget(hwndLabel);

        hwndLcdNumber = new QLCDNumber(hwndWidget);
        hwndLcdNumber->setObjectName(QString::fromUtf8("hwndLcdNumber"));
        sizePolicy5.setHeightForWidth(hwndLcdNumber->sizePolicy().hasHeightForWidth());
        hwndLcdNumber->setSizePolicy(sizePolicy5);
        hwndLcdNumber->setFrameShape(QFrame::Panel);
        hwndLcdNumber->setFrameShadow(QFrame::Raised);
        hwndLcdNumber->setLineWidth(1);
        hwndLcdNumber->setMidLineWidth(0);
        hwndLcdNumber->setSmallDecimalPoint(false);
        hwndLcdNumber->setDigitCount(64);
        hwndLcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(hwndLcdNumber);

        hwndRadixComboBox = new QComboBox(hwndWidget);
        hwndRadixComboBox->addItem(QString());
        hwndRadixComboBox->addItem(QString());
        hwndRadixComboBox->addItem(QString());
        hwndRadixComboBox->addItem(QString());
        hwndRadixComboBox->setObjectName(QString::fromUtf8("hwndRadixComboBox"));
        sizePolicy3.setHeightForWidth(hwndRadixComboBox->sizePolicy().hasHeightForWidth());
        hwndRadixComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(hwndRadixComboBox);


        tabWindowGridLayout->addWidget(hwndWidget, 0, 0, 1, 3);

        titleWidget = new QWidget(tabWindow);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        sizePolicy1.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(titleWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        titleLabel = new QLabel(titleWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        sizePolicy3.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy3);
        titleLabel->setMinimumSize(QSize(50, 0));
        titleLabel->setFont(font2);
        titleLabel->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(titleLabel);

        titleEdit = new QLineEdit(titleWidget);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));
        titleEdit->setMaxLength(1024);
        titleEdit->setFrame(false);
        titleEdit->setEchoMode(QLineEdit::Normal);
        titleEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        titleEdit->setDragEnabled(false);
        titleEdit->setReadOnly(false);
        titleEdit->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(titleEdit);

        titleCopyButton = new QToolButton(titleWidget);
        titleCopyButton->setObjectName(QString::fromUtf8("titleCopyButton"));
        titleCopyButton->setIcon(icon);
        titleCopyButton->setCheckable(false);
        titleCopyButton->setChecked(false);
        titleCopyButton->setPopupMode(QToolButton::DelayedPopup);
        titleCopyButton->setAutoRaise(false);
        titleCopyButton->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(titleCopyButton);


        tabWindowGridLayout->addWidget(titleWidget, 2, 0, 1, 3);

        styleGroupBox = new QGroupBox(tabWindow);
        styleGroupBox->setObjectName(QString::fromUtf8("styleGroupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(styleGroupBox->sizePolicy().hasHeightForWidth());
        styleGroupBox->setSizePolicy(sizePolicy6);
        styleGroupBox->setMinimumSize(QSize(0, 150));
        styleGroupBox->setCheckable(false);
        verticalLayout_7 = new QVBoxLayout(styleGroupBox);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        basicStyleLabel = new QLabel(styleGroupBox);
        basicStyleLabel->setObjectName(QString::fromUtf8("basicStyleLabel"));
        sizePolicy3.setHeightForWidth(basicStyleLabel->sizePolicy().hasHeightForWidth());
        basicStyleLabel->setSizePolicy(sizePolicy3);

        verticalLayout_7->addWidget(basicStyleLabel);

        basicStyleBinsetFrame = new BinsetEdit(styleGroupBox);
        basicStyleBinsetFrame->setObjectName(QString::fromUtf8("basicStyleBinsetFrame"));
        sizePolicy6.setHeightForWidth(basicStyleBinsetFrame->sizePolicy().hasHeightForWidth());
        basicStyleBinsetFrame->setSizePolicy(sizePolicy6);
        basicStyleBinsetFrame->setFrameShape(QFrame::StyledPanel);
        basicStyleBinsetFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(basicStyleBinsetFrame);

        styleExLabel = new QLabel(styleGroupBox);
        styleExLabel->setObjectName(QString::fromUtf8("styleExLabel"));
        sizePolicy3.setHeightForWidth(styleExLabel->sizePolicy().hasHeightForWidth());
        styleExLabel->setSizePolicy(sizePolicy3);

        verticalLayout_7->addWidget(styleExLabel);

        styleExBinsetFrame = new BinsetEdit(styleGroupBox);
        styleExBinsetFrame->setObjectName(QString::fromUtf8("styleExBinsetFrame"));
        sizePolicy6.setHeightForWidth(styleExBinsetFrame->sizePolicy().hasHeightForWidth());
        styleExBinsetFrame->setSizePolicy(sizePolicy6);
        styleExBinsetFrame->setFrameShape(QFrame::StyledPanel);
        styleExBinsetFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(styleExBinsetFrame);

        classStyleLabel = new QLabel(styleGroupBox);
        classStyleLabel->setObjectName(QString::fromUtf8("classStyleLabel"));
        sizePolicy3.setHeightForWidth(classStyleLabel->sizePolicy().hasHeightForWidth());
        classStyleLabel->setSizePolicy(sizePolicy3);

        verticalLayout_7->addWidget(classStyleLabel);

        classStyleBinsetFrame = new BinsetEdit(styleGroupBox);
        classStyleBinsetFrame->setObjectName(QString::fromUtf8("classStyleBinsetFrame"));
        classStyleBinsetFrame->setFrameShape(QFrame::StyledPanel);
        classStyleBinsetFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(classStyleBinsetFrame);


        tabWindowGridLayout->addWidget(styleGroupBox, 6, 0, 1, 2);

        tabWindowMidWidget = new QWidget(tabWindow);
        tabWindowMidWidget->setObjectName(QString::fromUtf8("tabWindowMidWidget"));
        gridLayout_7 = new QGridLayout(tabWindowMidWidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        rectGroupBox = new QGroupBox(tabWindowMidWidget);
        rectGroupBox->setObjectName(QString::fromUtf8("rectGroupBox"));
        sizePolicy3.setHeightForWidth(rectGroupBox->sizePolicy().hasHeightForWidth());
        rectGroupBox->setSizePolicy(sizePolicy3);
        rectGroupBox->setMinimumSize(QSize(300, 170));
        rectGroupBox->setCheckable(false);
        gridLayout = new QGridLayout(rectGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        rectLeftSpinBox = new QSpinBox(rectGroupBox);
        rectLeftSpinBox->setObjectName(QString::fromUtf8("rectLeftSpinBox"));
        rectLeftSpinBox->setMinimumSize(QSize(75, 0));
        rectLeftSpinBox->setWrapping(false);
        rectLeftSpinBox->setFrame(true);
        rectLeftSpinBox->setReadOnly(false);
        rectLeftSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        rectLeftSpinBox->setAccelerated(false);
        rectLeftSpinBox->setKeyboardTracking(false);
        rectLeftSpinBox->setProperty("showGroupSeparator", QVariant(false));
        rectLeftSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(rectLeftSpinBox, 0, 1, 1, 1);

        rectRightSpinBox = new QSpinBox(rectGroupBox);
        rectRightSpinBox->setObjectName(QString::fromUtf8("rectRightSpinBox"));
        rectRightSpinBox->setMinimumSize(QSize(75, 0));
        rectRightSpinBox->setMaximumSize(QSize(75, 16777215));
        rectRightSpinBox->setWrapping(false);
        rectRightSpinBox->setFrame(true);
        rectRightSpinBox->setReadOnly(false);
        rectRightSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        rectRightSpinBox->setAccelerated(false);
        rectRightSpinBox->setKeyboardTracking(false);
        rectRightSpinBox->setProperty("showGroupSeparator", QVariant(false));
        rectRightSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(rectRightSpinBox, 0, 4, 1, 2);

        rectLeftLabel = new QLabel(rectGroupBox);
        rectLeftLabel->setObjectName(QString::fromUtf8("rectLeftLabel"));
        sizePolicy3.setHeightForWidth(rectLeftLabel->sizePolicy().hasHeightForWidth());
        rectLeftLabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(rectLeftLabel, 0, 0, 1, 1);

        rectRightSlider = new QSlider(rectGroupBox);
        rectRightSlider->setObjectName(QString::fromUtf8("rectRightSlider"));
        sizePolicy1.setHeightForWidth(rectRightSlider->sizePolicy().hasHeightForWidth());
        rectRightSlider->setSizePolicy(sizePolicy1);
        rectRightSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(rectRightSlider, 1, 3, 1, 3);

        rectTopSlider = new QSlider(rectGroupBox);
        rectTopSlider->setObjectName(QString::fromUtf8("rectTopSlider"));
        sizePolicy1.setHeightForWidth(rectTopSlider->sizePolicy().hasHeightForWidth());
        rectTopSlider->setSizePolicy(sizePolicy1);
        rectTopSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(rectTopSlider, 3, 0, 1, 2);

        rectTopSpinBox = new QSpinBox(rectGroupBox);
        rectTopSpinBox->setObjectName(QString::fromUtf8("rectTopSpinBox"));
        rectTopSpinBox->setMinimumSize(QSize(75, 0));
        rectTopSpinBox->setWrapping(false);
        rectTopSpinBox->setFrame(true);
        rectTopSpinBox->setReadOnly(false);
        rectTopSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        rectTopSpinBox->setAccelerated(false);
        rectTopSpinBox->setKeyboardTracking(false);
        rectTopSpinBox->setProperty("showGroupSeparator", QVariant(false));
        rectTopSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(rectTopSpinBox, 2, 1, 1, 1);

        rectTopLabel = new QLabel(rectGroupBox);
        rectTopLabel->setObjectName(QString::fromUtf8("rectTopLabel"));
        sizePolicy3.setHeightForWidth(rectTopLabel->sizePolicy().hasHeightForWidth());
        rectTopLabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(rectTopLabel, 2, 0, 1, 1);

        rectBottomSlider = new QSlider(rectGroupBox);
        rectBottomSlider->setObjectName(QString::fromUtf8("rectBottomSlider"));
        sizePolicy1.setHeightForWidth(rectBottomSlider->sizePolicy().hasHeightForWidth());
        rectBottomSlider->setSizePolicy(sizePolicy1);
        rectBottomSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(rectBottomSlider, 3, 3, 1, 3);

        rectLeftSlider = new QSlider(rectGroupBox);
        rectLeftSlider->setObjectName(QString::fromUtf8("rectLeftSlider"));
        sizePolicy1.setHeightForWidth(rectLeftSlider->sizePolicy().hasHeightForWidth());
        rectLeftSlider->setSizePolicy(sizePolicy1);
        rectLeftSlider->setTracking(true);
        rectLeftSlider->setOrientation(Qt::Horizontal);
        rectLeftSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(rectLeftSlider, 1, 0, 1, 2);

        rectBottomLabel = new QLabel(rectGroupBox);
        rectBottomLabel->setObjectName(QString::fromUtf8("rectBottomLabel"));
        sizePolicy3.setHeightForWidth(rectBottomLabel->sizePolicy().hasHeightForWidth());
        rectBottomLabel->setSizePolicy(sizePolicy3);
        rectBottomLabel->setMinimumSize(QSize(65, 20));
        rectBottomLabel->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(rectBottomLabel, 2, 3, 1, 1);

        rectRightLabel = new QLabel(rectGroupBox);
        rectRightLabel->setObjectName(QString::fromUtf8("rectRightLabel"));
        sizePolicy3.setHeightForWidth(rectRightLabel->sizePolicy().hasHeightForWidth());
        rectRightLabel->setSizePolicy(sizePolicy3);
        rectRightLabel->setMinimumSize(QSize(65, 20));

        gridLayout->addWidget(rectRightLabel, 0, 3, 1, 1);

        rectBottomSpinBox = new QSpinBox(rectGroupBox);
        rectBottomSpinBox->setObjectName(QString::fromUtf8("rectBottomSpinBox"));
        rectBottomSpinBox->setMinimumSize(QSize(75, 0));
        rectBottomSpinBox->setMaximumSize(QSize(75, 16777215));
        rectBottomSpinBox->setWrapping(false);
        rectBottomSpinBox->setFrame(true);
        rectBottomSpinBox->setReadOnly(false);
        rectBottomSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        rectBottomSpinBox->setAccelerated(false);
        rectBottomSpinBox->setKeyboardTracking(false);
        rectBottomSpinBox->setProperty("showGroupSeparator", QVariant(false));
        rectBottomSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(rectBottomSpinBox, 2, 4, 1, 1);


        gridLayout_7->addWidget(rectGroupBox, 0, 0, 2, 1);

        sizeGroupBox = new QGroupBox(tabWindowMidWidget);
        sizeGroupBox->setObjectName(QString::fromUtf8("sizeGroupBox"));
        sizePolicy5.setHeightForWidth(sizeGroupBox->sizePolicy().hasHeightForWidth());
        sizeGroupBox->setSizePolicy(sizePolicy5);
        sizeGroupBox->setMinimumSize(QSize(400, 110));
        gridLayout_2 = new QGridLayout(sizeGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sizeWidthLabel = new QLabel(sizeGroupBox);
        sizeWidthLabel->setObjectName(QString::fromUtf8("sizeWidthLabel"));
        sizePolicy3.setHeightForWidth(sizeWidthLabel->sizePolicy().hasHeightForWidth());
        sizeWidthLabel->setSizePolicy(sizePolicy3);
        sizeWidthLabel->setMinimumSize(QSize(65, 20));

        gridLayout_2->addWidget(sizeWidthLabel, 0, 0, 1, 1);

        sizeWidthSpinBox = new QSpinBox(sizeGroupBox);
        sizeWidthSpinBox->setObjectName(QString::fromUtf8("sizeWidthSpinBox"));
        sizePolicy3.setHeightForWidth(sizeWidthSpinBox->sizePolicy().hasHeightForWidth());
        sizeWidthSpinBox->setSizePolicy(sizePolicy3);
        sizeWidthSpinBox->setMinimumSize(QSize(75, 0));
        sizeWidthSpinBox->setMaximumSize(QSize(75, 16777215));
        sizeWidthSpinBox->setWrapping(false);
        sizeWidthSpinBox->setFrame(true);
        sizeWidthSpinBox->setReadOnly(false);
        sizeWidthSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sizeWidthSpinBox->setAccelerated(false);
        sizeWidthSpinBox->setKeyboardTracking(false);
        sizeWidthSpinBox->setProperty("showGroupSeparator", QVariant(false));
        sizeWidthSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout_2->addWidget(sizeWidthSpinBox, 0, 1, 1, 1);

        sizeWidthSlider = new QSlider(sizeGroupBox);
        sizeWidthSlider->setObjectName(QString::fromUtf8("sizeWidthSlider"));
        sizePolicy1.setHeightForWidth(sizeWidthSlider->sizePolicy().hasHeightForWidth());
        sizeWidthSlider->setSizePolicy(sizePolicy1);
        sizeWidthSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sizeWidthSlider, 0, 2, 1, 1);

        sizeHeightLabel = new QLabel(sizeGroupBox);
        sizeHeightLabel->setObjectName(QString::fromUtf8("sizeHeightLabel"));
        sizePolicy3.setHeightForWidth(sizeHeightLabel->sizePolicy().hasHeightForWidth());
        sizeHeightLabel->setSizePolicy(sizePolicy3);
        sizeHeightLabel->setMinimumSize(QSize(65, 20));

        gridLayout_2->addWidget(sizeHeightLabel, 1, 0, 1, 1);

        sizeHeightSpinBox = new QSpinBox(sizeGroupBox);
        sizeHeightSpinBox->setObjectName(QString::fromUtf8("sizeHeightSpinBox"));
        sizePolicy3.setHeightForWidth(sizeHeightSpinBox->sizePolicy().hasHeightForWidth());
        sizeHeightSpinBox->setSizePolicy(sizePolicy3);
        sizeHeightSpinBox->setMinimumSize(QSize(75, 0));
        sizeHeightSpinBox->setMaximumSize(QSize(75, 16777215));
        sizeHeightSpinBox->setWrapping(false);
        sizeHeightSpinBox->setFrame(true);
        sizeHeightSpinBox->setReadOnly(false);
        sizeHeightSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sizeHeightSpinBox->setAccelerated(false);
        sizeHeightSpinBox->setKeyboardTracking(false);
        sizeHeightSpinBox->setProperty("showGroupSeparator", QVariant(false));
        sizeHeightSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout_2->addWidget(sizeHeightSpinBox, 1, 1, 1, 1);

        sizeHeightSlider = new QSlider(sizeGroupBox);
        sizeHeightSlider->setObjectName(QString::fromUtf8("sizeHeightSlider"));
        sizePolicy1.setHeightForWidth(sizeHeightSlider->sizePolicy().hasHeightForWidth());
        sizeHeightSlider->setSizePolicy(sizePolicy1);
        sizeHeightSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sizeHeightSlider, 1, 2, 1, 1);


        gridLayout_7->addWidget(sizeGroupBox, 0, 1, 1, 3);

        dpiGroupBox = new QGroupBox(tabWindowMidWidget);
        dpiGroupBox->setObjectName(QString::fromUtf8("dpiGroupBox"));
        sizePolicy5.setHeightForWidth(dpiGroupBox->sizePolicy().hasHeightForWidth());
        dpiGroupBox->setSizePolicy(sizePolicy5);
        dpiGroupBox->setMinimumSize(QSize(170, 50));
        horizontalLayout_7 = new QHBoxLayout(dpiGroupBox);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        dpiLabel = new QLabel(dpiGroupBox);
        dpiLabel->setObjectName(QString::fromUtf8("dpiLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cascadia Mono Light"));
        font3.setPointSize(9);
        font3.setItalic(true);
        dpiLabel->setFont(font3);
        dpiLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(dpiLabel);


        gridLayout_7->addWidget(dpiGroupBox, 1, 1, 1, 1);

        codeGroupBox = new QGroupBox(tabWindowMidWidget);
        codeGroupBox->setObjectName(QString::fromUtf8("codeGroupBox"));
        sizePolicy5.setHeightForWidth(codeGroupBox->sizePolicy().hasHeightForWidth());
        codeGroupBox->setSizePolicy(sizePolicy5);
        codeGroupBox->setMinimumSize(QSize(90, 50));
        horizontalLayout_8 = new QHBoxLayout(codeGroupBox);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        codeLabel = new QLabel(codeGroupBox);
        codeLabel->setObjectName(QString::fromUtf8("codeLabel"));
        codeLabel->setFont(font3);
        codeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(codeLabel);


        gridLayout_7->addWidget(codeGroupBox, 1, 2, 1, 1);

        otherGroupBox = new QGroupBox(tabWindowMidWidget);
        otherGroupBox->setObjectName(QString::fromUtf8("otherGroupBox"));
        sizePolicy3.setHeightForWidth(otherGroupBox->sizePolicy().hasHeightForWidth());
        otherGroupBox->setSizePolicy(sizePolicy3);
        verticalLayout_2 = new QVBoxLayout(otherGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        activeCheckBox = new QCheckBox(otherGroupBox);
        activeCheckBox->setObjectName(QString::fromUtf8("activeCheckBox"));
        activeCheckBox->setCheckable(true);
        activeCheckBox->setChecked(false);
        activeCheckBox->setTristate(false);

        verticalLayout_2->addWidget(activeCheckBox);

        showCheckBox = new QCheckBox(otherGroupBox);
        showCheckBox->setObjectName(QString::fromUtf8("showCheckBox"));
        showCheckBox->setCheckable(true);
        showCheckBox->setChecked(false);
        showCheckBox->setTristate(false);

        verticalLayout_2->addWidget(showCheckBox);

        topmostCheckBox = new QCheckBox(otherGroupBox);
        topmostCheckBox->setObjectName(QString::fromUtf8("topmostCheckBox"));
        topmostCheckBox->setCheckable(true);
        topmostCheckBox->setChecked(false);
        topmostCheckBox->setTristate(false);

        verticalLayout_2->addWidget(topmostCheckBox);


        gridLayout_7->addWidget(otherGroupBox, 1, 3, 2, 1);

        opacityGroupBox = new QGroupBox(tabWindowMidWidget);
        opacityGroupBox->setObjectName(QString::fromUtf8("opacityGroupBox"));
        sizePolicy5.setHeightForWidth(opacityGroupBox->sizePolicy().hasHeightForWidth());
        opacityGroupBox->setSizePolicy(sizePolicy5);
        opacityGroupBox->setMinimumSize(QSize(300, 0));
        horizontalLayout_9 = new QHBoxLayout(opacityGroupBox);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);
        opacitySpinBox = new QSpinBox(opacityGroupBox);
        opacitySpinBox->setObjectName(QString::fromUtf8("opacitySpinBox"));
        sizePolicy3.setHeightForWidth(opacitySpinBox->sizePolicy().hasHeightForWidth());
        opacitySpinBox->setSizePolicy(sizePolicy3);
        opacitySpinBox->setMinimumSize(QSize(75, 0));
        opacitySpinBox->setFrame(true);
        opacitySpinBox->setReadOnly(false);
        opacitySpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        opacitySpinBox->setAccelerated(false);
        opacitySpinBox->setKeyboardTracking(false);
        opacitySpinBox->setProperty("showGroupSeparator", QVariant(false));
        opacitySpinBox->setMaximum(255);
        opacitySpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_9->addWidget(opacitySpinBox);

        opacitySlider = new QSlider(opacityGroupBox);
        opacitySlider->setObjectName(QString::fromUtf8("opacitySlider"));
        sizePolicy1.setHeightForWidth(opacitySlider->sizePolicy().hasHeightForWidth());
        opacitySlider->setSizePolicy(sizePolicy1);
        opacitySlider->setMaximum(255);
        opacitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(opacitySlider);


        gridLayout_7->addWidget(opacityGroupBox, 2, 0, 1, 1);

        eraseGroupBox = new QGroupBox(tabWindowMidWidget);
        eraseGroupBox->setObjectName(QString::fromUtf8("eraseGroupBox"));
        sizePolicy5.setHeightForWidth(eraseGroupBox->sizePolicy().hasHeightForWidth());
        eraseGroupBox->setSizePolicy(sizePolicy5);
        eraseGroupBox->setMinimumSize(QSize(270, 0));
        eraseGroupBox->setFlat(false);
        eraseGroupBox->setCheckable(true);
        eraseGroupBox->setChecked(false);
        horizontalLayout_10 = new QHBoxLayout(eraseGroupBox);
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(5, 5, 5, 5);
        eraseRedSpinBox = new QSpinBox(eraseGroupBox);
        eraseRedSpinBox->setObjectName(QString::fromUtf8("eraseRedSpinBox"));
        eraseRedSpinBox->setMinimumSize(QSize(75, 0));
        eraseRedSpinBox->setWrapping(false);
        eraseRedSpinBox->setFrame(true);
        eraseRedSpinBox->setReadOnly(false);
        eraseRedSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        eraseRedSpinBox->setAccelerated(false);
        eraseRedSpinBox->setKeyboardTracking(false);
        eraseRedSpinBox->setProperty("showGroupSeparator", QVariant(false));
        eraseRedSpinBox->setMaximum(255);
        eraseRedSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_10->addWidget(eraseRedSpinBox);

        eraseGreenSpinBox = new QSpinBox(eraseGroupBox);
        eraseGreenSpinBox->setObjectName(QString::fromUtf8("eraseGreenSpinBox"));
        eraseGreenSpinBox->setMinimumSize(QSize(75, 0));
        eraseGreenSpinBox->setWrapping(false);
        eraseGreenSpinBox->setFrame(true);
        eraseGreenSpinBox->setReadOnly(false);
        eraseGreenSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        eraseGreenSpinBox->setAccelerated(false);
        eraseGreenSpinBox->setKeyboardTracking(false);
        eraseGreenSpinBox->setProperty("showGroupSeparator", QVariant(false));
        eraseGreenSpinBox->setMaximum(255);
        eraseGreenSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_10->addWidget(eraseGreenSpinBox);

        eraseBlueSpinBox = new QSpinBox(eraseGroupBox);
        eraseBlueSpinBox->setObjectName(QString::fromUtf8("eraseBlueSpinBox"));
        eraseBlueSpinBox->setMinimumSize(QSize(75, 0));
        eraseBlueSpinBox->setWrapping(false);
        eraseBlueSpinBox->setFrame(true);
        eraseBlueSpinBox->setReadOnly(false);
        eraseBlueSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        eraseBlueSpinBox->setAccelerated(false);
        eraseBlueSpinBox->setKeyboardTracking(false);
        eraseBlueSpinBox->setProperty("showGroupSeparator", QVariant(false));
        eraseBlueSpinBox->setMaximum(255);
        eraseBlueSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_10->addWidget(eraseBlueSpinBox);


        gridLayout_7->addWidget(eraseGroupBox, 2, 1, 1, 2);


        tabWindowGridLayout->addWidget(tabWindowMidWidget, 5, 0, 1, 3);

        tabMainWidget->addTab(tabWindow, QString());
        tabProcess = new QWidget();
        tabProcess->setObjectName(QString::fromUtf8("tabProcess"));
        gridLayout_6 = new QGridLayout(tabProcess);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        processStartDateTimeEdit = new QDateTimeEdit(tabProcess);
        processStartDateTimeEdit->setObjectName(QString::fromUtf8("processStartDateTimeEdit"));
        processStartDateTimeEdit->setEnabled(true);
        processStartDateTimeEdit->setReadOnly(true);

        gridLayout_6->addWidget(processStartDateTimeEdit, 1, 1, 1, 1);

        processCommandLineListView = new QListView(tabProcess);
        processCommandLineListView->setObjectName(QString::fromUtf8("processCommandLineListView"));
        processCommandLineListView->setResizeMode(QListView::Fixed);
        processCommandLineListView->setModelColumn(0);
        processCommandLineListView->setWordWrap(false);

        gridLayout_6->addWidget(processCommandLineListView, 4, 1, 1, 5);

        currentTimeLabel = new QLabel(tabProcess);
        currentTimeLabel->setObjectName(QString::fromUtf8("currentTimeLabel"));
        sizePolicy3.setHeightForWidth(currentTimeLabel->sizePolicy().hasHeightForWidth());
        currentTimeLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(currentTimeLabel, 1, 2, 1, 1);

        processIdLabel = new QLabel(tabProcess);
        processIdLabel->setObjectName(QString::fromUtf8("processIdLabel"));
        sizePolicy3.setHeightForWidth(processIdLabel->sizePolicy().hasHeightForWidth());
        processIdLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(processIdLabel, 0, 0, 1, 1);

        processPathLineEdit = new QLineEdit(tabProcess);
        processPathLineEdit->setObjectName(QString::fromUtf8("processPathLineEdit"));
        processPathLineEdit->setFrame(true);
        processPathLineEdit->setDragEnabled(false);
        processPathLineEdit->setReadOnly(true);
        processPathLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_6->addWidget(processPathLineEdit, 2, 1, 1, 5);

        processStartTimeLabel = new QLabel(tabProcess);
        processStartTimeLabel->setObjectName(QString::fromUtf8("processStartTimeLabel"));
        sizePolicy3.setHeightForWidth(processStartTimeLabel->sizePolicy().hasHeightForWidth());
        processStartTimeLabel->setSizePolicy(sizePolicy3);
        processStartTimeLabel->setFrameShape(QFrame::NoFrame);

        gridLayout_6->addWidget(processStartTimeLabel, 1, 0, 1, 1);

        processPathLabel = new QLabel(tabProcess);
        processPathLabel->setObjectName(QString::fromUtf8("processPathLabel"));
        sizePolicy3.setHeightForWidth(processPathLabel->sizePolicy().hasHeightForWidth());
        processPathLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(processPathLabel, 2, 0, 1, 1);

        processWindowsListGroupBox = new QGroupBox(tabProcess);
        processWindowsListGroupBox->setObjectName(QString::fromUtf8("processWindowsListGroupBox"));
        processWindowListLayout = new QHBoxLayout(processWindowsListGroupBox);
        processWindowListLayout->setObjectName(QString::fromUtf8("processWindowListLayout"));
        processWindowListLayout->setContentsMargins(0, 0, 0, 0);
        processWindowTreeWidget = new QTreeWidget(processWindowsListGroupBox);
        processWindowTreeWidget->setObjectName(QString::fromUtf8("processWindowTreeWidget"));
        processWindowTreeWidget->setColumnCount(3);

        processWindowListLayout->addWidget(processWindowTreeWidget);


        gridLayout_6->addWidget(processWindowsListGroupBox, 5, 0, 1, 6);

        processIdLineEdit = new QLineEdit(tabProcess);
        processIdLineEdit->setObjectName(QString::fromUtf8("processIdLineEdit"));
        processIdLineEdit->setFrame(true);
        processIdLineEdit->setReadOnly(true);

        gridLayout_6->addWidget(processIdLineEdit, 0, 1, 1, 5);

        processCommandLineLabel = new QLabel(tabProcess);
        processCommandLineLabel->setObjectName(QString::fromUtf8("processCommandLineLabel"));
        sizePolicy3.setHeightForWidth(processCommandLineLabel->sizePolicy().hasHeightForWidth());
        processCommandLineLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(processCommandLineLabel, 4, 0, 1, 1);

        currentDateTimeEdit = new QDateTimeEdit(tabProcess);
        currentDateTimeEdit->setObjectName(QString::fromUtf8("currentDateTimeEdit"));
        currentDateTimeEdit->setFrame(true);
        currentDateTimeEdit->setReadOnly(true);

        gridLayout_6->addWidget(currentDateTimeEdit, 1, 3, 1, 1);

        processTimeSplitLine = new QFrame(tabProcess);
        processTimeSplitLine->setObjectName(QString::fromUtf8("processTimeSplitLine"));
        processTimeSplitLine->setFrameShape(QFrame::VLine);
        processTimeSplitLine->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(processTimeSplitLine, 1, 4, 1, 1);

        processRunningDateTimeEdit = new QLineEdit(tabProcess);
        processRunningDateTimeEdit->setObjectName(QString::fromUtf8("processRunningDateTimeEdit"));
        processRunningDateTimeEdit->setReadOnly(true);

        gridLayout_6->addWidget(processRunningDateTimeEdit, 1, 5, 1, 1);

        copyProcessPathButton = new QPushButton(tabProcess);
        copyProcessPathButton->setObjectName(QString::fromUtf8("copyProcessPathButton"));

        gridLayout_6->addWidget(copyProcessPathButton, 3, 1, 1, 2);

        openExplorerButton = new QPushButton(tabProcess);
        openExplorerButton->setObjectName(QString::fromUtf8("openExplorerButton"));

        gridLayout_6->addWidget(openExplorerButton, 3, 3, 1, 3);

        tabMainWidget->addTab(tabProcess, QString());
        tabCursor = new QWidget();
        tabCursor->setObjectName(QString::fromUtf8("tabCursor"));
        tabCursorLayout = new QHBoxLayout(tabCursor);
        tabCursorLayout->setSpacing(0);
        tabCursorLayout->setObjectName(QString::fromUtf8("tabCursorLayout"));
        tabCursorLayout->setContentsMargins(0, 0, 0, 0);
        cursorLeftWidget = new QWidget(tabCursor);
        cursorLeftWidget->setObjectName(QString::fromUtf8("cursorLeftWidget"));
        verticalLayout_6 = new QVBoxLayout(cursorLeftWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        windowImageGroupBox = new QGroupBox(cursorLeftWidget);
        windowImageGroupBox->setObjectName(QString::fromUtf8("windowImageGroupBox"));
        verticalLayout_4 = new QVBoxLayout(windowImageGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        windowImageLabel = new QLabel(windowImageGroupBox);
        windowImageLabel->setObjectName(QString::fromUtf8("windowImageLabel"));
        windowImageLabel->setAlignment(Qt::AlignCenter);
        windowImageLabel->setWordWrap(false);

        verticalLayout_4->addWidget(windowImageLabel);


        verticalLayout_6->addWidget(windowImageGroupBox);

        cursorColorWidget = new QWidget(cursorLeftWidget);
        cursorColorWidget->setObjectName(QString::fromUtf8("cursorColorWidget"));
        sizePolicy1.setHeightForWidth(cursorColorWidget->sizePolicy().hasHeightForWidth());
        cursorColorWidget->setSizePolicy(sizePolicy1);
        cursorColorWidgetLayout = new QGridLayout(cursorColorWidget);
        cursorColorWidgetLayout->setObjectName(QString::fromUtf8("cursorColorWidgetLayout"));
        cursorColorWidgetLayout->setHorizontalSpacing(7);
        cursorColorWidgetLayout->setContentsMargins(0, 0, 0, 0);
        cursorColorBox = new SingleColorWidget(cursorColorWidget);
        cursorColorBox->setObjectName(QString::fromUtf8("cursorColorBox"));
        cursorColorBox->setMinimumSize(QSize(80, 80));
        cursorColorBox->setMaximumSize(QSize(80, 80));
        cursorColorBox->setProperty("color", QVariant(QColor(0, 0, 0)));
        cursorColorBox->setProperty("drawRect", QVariant(true));
        cursorColorBox->setProperty("rectColor", QVariant(QColor(0, 0, 0)));

        cursorColorWidgetLayout->addWidget(cursorColorBox, 0, 0, 3, 1);

        cursorRColorLabel = new QLabel(cursorColorWidget);
        cursorRColorLabel->setObjectName(QString::fromUtf8("cursorRColorLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        cursorRColorLabel->setPalette(palette);

        cursorColorWidgetLayout->addWidget(cursorRColorLabel, 0, 1, 1, 1);

        cursorRColorSlider = new QSlider(cursorColorWidget);
        cursorRColorSlider->setObjectName(QString::fromUtf8("cursorRColorSlider"));
        cursorRColorSlider->setMaximum(255);
        cursorRColorSlider->setTracking(true);
        cursorRColorSlider->setOrientation(Qt::Horizontal);
        cursorRColorSlider->setTickPosition(QSlider::NoTicks);

        cursorColorWidgetLayout->addWidget(cursorRColorSlider, 0, 2, 1, 1);

        cursorGColorLabel = new QLabel(cursorColorWidget);
        cursorGColorLabel->setObjectName(QString::fromUtf8("cursorGColorLabel"));
        QPalette palette1;
        QBrush brush3(QColor(0, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        cursorGColorLabel->setPalette(palette1);

        cursorColorWidgetLayout->addWidget(cursorGColorLabel, 1, 1, 1, 1);

        cursorGColorSlider = new QSlider(cursorColorWidget);
        cursorGColorSlider->setObjectName(QString::fromUtf8("cursorGColorSlider"));
        cursorGColorSlider->setMaximum(255);
        cursorGColorSlider->setOrientation(Qt::Horizontal);

        cursorColorWidgetLayout->addWidget(cursorGColorSlider, 1, 2, 1, 1);

        cursorBColorLabel = new QLabel(cursorColorWidget);
        cursorBColorLabel->setObjectName(QString::fromUtf8("cursorBColorLabel"));
        QPalette palette2;
        QBrush brush4(QColor(0, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        cursorBColorLabel->setPalette(palette2);

        cursorColorWidgetLayout->addWidget(cursorBColorLabel, 2, 1, 1, 1);

        cursorBColorSlider = new QSlider(cursorColorWidget);
        cursorBColorSlider->setObjectName(QString::fromUtf8("cursorBColorSlider"));
        cursorBColorSlider->setMaximum(255);
        cursorBColorSlider->setOrientation(Qt::Horizontal);

        cursorColorWidgetLayout->addWidget(cursorBColorSlider, 2, 2, 1, 1);


        verticalLayout_6->addWidget(cursorColorWidget);


        tabCursorLayout->addWidget(cursorLeftWidget);

        cursorRightWidget = new QWidget(tabCursor);
        cursorRightWidget->setObjectName(QString::fromUtf8("cursorRightWidget"));
        sizePolicy2.setHeightForWidth(cursorRightWidget->sizePolicy().hasHeightForWidth());
        cursorRightWidget->setSizePolicy(sizePolicy2);
        verticalLayout_5 = new QVBoxLayout(cursorRightWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        imageDisplayModeWidget = new QWidget(cursorRightWidget);
        imageDisplayModeWidget->setObjectName(QString::fromUtf8("imageDisplayModeWidget"));
        sizePolicy1.setHeightForWidth(imageDisplayModeWidget->sizePolicy().hasHeightForWidth());
        imageDisplayModeWidget->setSizePolicy(sizePolicy1);
        imageDisplayModeLayout = new QVBoxLayout(imageDisplayModeWidget);
        imageDisplayModeLayout->setObjectName(QString::fromUtf8("imageDisplayModeLayout"));
        imageDisplayModeLayout->setContentsMargins(5, 5, 5, 5);
        imageDisplayWindowButton = new QRadioButton(imageDisplayModeWidget);
        imageDisplayWindowButton->setObjectName(QString::fromUtf8("imageDisplayWindowButton"));
        sizePolicy3.setHeightForWidth(imageDisplayWindowButton->sizePolicy().hasHeightForWidth());
        imageDisplayWindowButton->setSizePolicy(sizePolicy3);
        imageDisplayWindowButton->setChecked(true);

        imageDisplayModeLayout->addWidget(imageDisplayWindowButton);

        imageDisplayScreenButton = new QRadioButton(imageDisplayModeWidget);
        imageDisplayScreenButton->setObjectName(QString::fromUtf8("imageDisplayScreenButton"));
        sizePolicy3.setHeightForWidth(imageDisplayScreenButton->sizePolicy().hasHeightForWidth());
        imageDisplayScreenButton->setSizePolicy(sizePolicy3);

        imageDisplayModeLayout->addWidget(imageDisplayScreenButton);

        splitline = new QFrame(imageDisplayModeWidget);
        splitline->setObjectName(QString::fromUtf8("splitline"));
        splitline->setLineWidth(1);
        splitline->setFrameShape(QFrame::HLine);
        splitline->setFrameShadow(QFrame::Sunken);

        imageDisplayModeLayout->addWidget(splitline);

        colorCircleCheckBox = new QCheckBox(imageDisplayModeWidget);
        colorCircleCheckBox->setObjectName(QString::fromUtf8("colorCircleCheckBox"));
        colorCircleCheckBox->setCheckable(true);
        colorCircleCheckBox->setChecked(true);
        colorCircleCheckBox->setAutoRepeat(false);

        imageDisplayModeLayout->addWidget(colorCircleCheckBox);


        verticalLayout_5->addWidget(imageDisplayModeWidget);

        imageMagnifierGroupBox = new QGroupBox(cursorRightWidget);
        imageMagnifierGroupBox->setObjectName(QString::fromUtf8("imageMagnifierGroupBox"));
        sizePolicy.setHeightForWidth(imageMagnifierGroupBox->sizePolicy().hasHeightForWidth());
        imageMagnifierGroupBox->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(imageMagnifierGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        imageMagnifierLabel = new QLabel(imageMagnifierGroupBox);
        imageMagnifierLabel->setObjectName(QString::fromUtf8("imageMagnifierLabel"));
        imageMagnifierLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(imageMagnifierLabel, 0, 0, 1, 1);


        verticalLayout_5->addWidget(imageMagnifierGroupBox);

        cursorCoordinatePointGroupBox = new QGroupBox(cursorRightWidget);
        cursorCoordinatePointGroupBox->setObjectName(QString::fromUtf8("cursorCoordinatePointGroupBox"));
        sizePolicy1.setHeightForWidth(cursorCoordinatePointGroupBox->sizePolicy().hasHeightForWidth());
        cursorCoordinatePointGroupBox->setSizePolicy(sizePolicy1);
        cursorCoordinatePointLayout = new QGridLayout(cursorCoordinatePointGroupBox);
        cursorCoordinatePointLayout->setObjectName(QString::fromUtf8("cursorCoordinatePointLayout"));
        cursorCoordinatePointLayout->setContentsMargins(5, 5, 5, 5);
        cursorPointInScreenLabel = new QLabel(cursorCoordinatePointGroupBox);
        cursorPointInScreenLabel->setObjectName(QString::fromUtf8("cursorPointInScreenLabel"));

        cursorCoordinatePointLayout->addWidget(cursorPointInScreenLabel, 0, 0, 1, 2);

        cursorPointXInScreenSpinBox = new QSpinBox(cursorCoordinatePointGroupBox);
        cursorPointXInScreenSpinBox->setObjectName(QString::fromUtf8("cursorPointXInScreenSpinBox"));

        cursorCoordinatePointLayout->addWidget(cursorPointXInScreenSpinBox, 1, 0, 1, 1);

        cursorPointXInScreenSlider = new QSlider(cursorCoordinatePointGroupBox);
        cursorPointXInScreenSlider->setObjectName(QString::fromUtf8("cursorPointXInScreenSlider"));
        cursorPointXInScreenSlider->setOrientation(Qt::Horizontal);

        cursorCoordinatePointLayout->addWidget(cursorPointXInScreenSlider, 1, 1, 1, 1);

        cursorPointYInScreenSpinBox = new QSpinBox(cursorCoordinatePointGroupBox);
        cursorPointYInScreenSpinBox->setObjectName(QString::fromUtf8("cursorPointYInScreenSpinBox"));

        cursorCoordinatePointLayout->addWidget(cursorPointYInScreenSpinBox, 2, 0, 1, 1);

        cursorPointYInScreenSlider = new QSlider(cursorCoordinatePointGroupBox);
        cursorPointYInScreenSlider->setObjectName(QString::fromUtf8("cursorPointYInScreenSlider"));
        cursorPointYInScreenSlider->setOrientation(Qt::Horizontal);

        cursorCoordinatePointLayout->addWidget(cursorPointYInScreenSlider, 2, 1, 1, 1);

        cursorPointInWindowLabel = new QLabel(cursorCoordinatePointGroupBox);
        cursorPointInWindowLabel->setObjectName(QString::fromUtf8("cursorPointInWindowLabel"));

        cursorCoordinatePointLayout->addWidget(cursorPointInWindowLabel, 3, 0, 1, 2);

        cursorPointXInWindowSpinBox = new QSpinBox(cursorCoordinatePointGroupBox);
        cursorPointXInWindowSpinBox->setObjectName(QString::fromUtf8("cursorPointXInWindowSpinBox"));

        cursorCoordinatePointLayout->addWidget(cursorPointXInWindowSpinBox, 4, 0, 1, 1);

        cursorPointXInWindowSlider = new QSlider(cursorCoordinatePointGroupBox);
        cursorPointXInWindowSlider->setObjectName(QString::fromUtf8("cursorPointXInWindowSlider"));
        cursorPointXInWindowSlider->setOrientation(Qt::Horizontal);

        cursorCoordinatePointLayout->addWidget(cursorPointXInWindowSlider, 4, 1, 1, 1);

        cursorPointYInWindowSpinBox = new QSpinBox(cursorCoordinatePointGroupBox);
        cursorPointYInWindowSpinBox->setObjectName(QString::fromUtf8("cursorPointYInWindowSpinBox"));

        cursorCoordinatePointLayout->addWidget(cursorPointYInWindowSpinBox, 5, 0, 1, 1);

        cursorPointYInWindowSlider = new QSlider(cursorCoordinatePointGroupBox);
        cursorPointYInWindowSlider->setObjectName(QString::fromUtf8("cursorPointYInWindowSlider"));
        cursorPointYInWindowSlider->setOrientation(Qt::Horizontal);

        cursorCoordinatePointLayout->addWidget(cursorPointYInWindowSlider, 5, 1, 1, 1);


        verticalLayout_5->addWidget(cursorCoordinatePointGroupBox);

        saveImageButton = new QPushButton(cursorRightWidget);
        saveImageButton->setObjectName(QString::fromUtf8("saveImageButton"));
        sizePolicy5.setHeightForWidth(saveImageButton->sizePolicy().hasHeightForWidth());
        saveImageButton->setSizePolicy(sizePolicy5);
        saveImageButton->setCheckable(false);

        verticalLayout_5->addWidget(saveImageButton);


        tabCursorLayout->addWidget(cursorRightWidget);

        tabMainWidget->addTab(tabCursor, QString());
        tabClass = new QWidget();
        tabClass->setObjectName(QString::fromUtf8("tabClass"));
        tabClass->setEnabled(true);
        tabMainWidget->addTab(tabClass, QString());

        horizontalLayout->addWidget(tabMainWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabMainWidget->setCurrentIndex(1);
        currentHwndRadixComboBox->setCurrentIndex(1);
        closeWindowButton->setDefault(false);
        destroyWindowButton->setDefault(false);
        killProcessButton->setDefault(false);
        pidRadixComboBox->setCurrentIndex(1);
        hwndRadixComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Visual Windows Controller", nullptr));
        selectionModeLabel->setText(QCoreApplication::translate("MainWindow", "Selection Mode:", nullptr));
        dynamicButton->setText(QCoreApplication::translate("MainWindow", "Use Dynamic", nullptr));
        staticButton->setText(QCoreApplication::translate("MainWindow", "Use Static", nullptr));
        staticGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Static", nullptr));
        staticFindBoxEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Find Window", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = staticWindowsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "CLASS", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "TITLE", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "HWND", nullptr));
        dynamicGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Dynamic", nullptr));
        dynamicUnderCursorPointButton->setText(QCoreApplication::translate("MainWindow", "Under the cursor point", nullptr));
        dynamicPUnderCursorPointButton->setText(QCoreApplication::translate("MainWindow", "Parent window under the cursor point", nullptr));
        dynamicDesktopButton->setText(QCoreApplication::translate("MainWindow", "Currnet Desktop", nullptr));
        dynamicFocusButton->setText(QCoreApplication::translate("MainWindow", "Current Focus", nullptr));
        dynamicActiveButton->setText(QCoreApplication::translate("MainWindow", "Current Active", nullptr));
        dynamicForegroundButton->setText(QCoreApplication::translate("MainWindow", "Current Foreground", nullptr));
#if QT_CONFIG(tooltip)
        updateIntervalWidget->setToolTip(QCoreApplication::translate("MainWindow", "Update interval (Please do not set too high or too low)", nullptr));
#endif // QT_CONFIG(tooltip)
        infoUpdateIntervalSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " ms", nullptr));
        infoUpdateIntervalLabel->setText(QCoreApplication::translate("MainWindow", "Info-UpdateInterval", nullptr));
        hwndUpdateIntervalLabel->setText(QCoreApplication::translate("MainWindow", "Hwnd-UpdateInterval", nullptr));
        hwndUpdateIntervalSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " ms", nullptr));
        currentHwndGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Current HWND", nullptr));
        currentHwndEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter current handle of window", nullptr));
        currentHwndRadixComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Hex", nullptr));
        currentHwndRadixComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Dec", nullptr));
        currentHwndRadixComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Oct", nullptr));
        currentHwndRadixComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Bin", nullptr));

        tabMainWidget->setTabText(tabMainWidget->indexOf(tabSelect), QCoreApplication::translate("MainWindow", "Select", nullptr));
        pathLabel->setText(QCoreApplication::translate("MainWindow", "Path", nullptr));
        pathEdit->setText(QString());
        pathEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "(No text)", nullptr));
#if QT_CONFIG(tooltip)
        pathCopyButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        pathCopyButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        closeWindowButton->setText(QCoreApplication::translate("MainWindow", "CloseThisWindow", nullptr));
        destroyWindowButton->setText(QCoreApplication::translate("MainWindow", "DestroyThisWindow", nullptr));
        killProcessButton->setText(QCoreApplication::translate("MainWindow", "KillThisProcess", nullptr));
        pidLabel->setText(QCoreApplication::translate("MainWindow", "PID", nullptr));
        pidRadixComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Hex", nullptr));
        pidRadixComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Dec", nullptr));
        pidRadixComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Oct", nullptr));
        pidRadixComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Bin", nullptr));

        classLabel->setText(QCoreApplication::translate("MainWindow", "Class", nullptr));
        classEdit->setText(QString());
        classEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "(No text)", nullptr));
#if QT_CONFIG(tooltip)
        classCopyButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        classCopyButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        hwndLabel->setText(QCoreApplication::translate("MainWindow", "HWND", nullptr));
        hwndRadixComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Hex", nullptr));
        hwndRadixComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Dec", nullptr));
        hwndRadixComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Oct", nullptr));
        hwndRadixComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Bin", nullptr));

        titleLabel->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        titleEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "(No text)", nullptr));
#if QT_CONFIG(tooltip)
        titleCopyButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        titleCopyButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        styleGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Style", nullptr));
        basicStyleLabel->setText(QCoreApplication::translate("MainWindow", "Basic Style", nullptr));
        styleExLabel->setText(QCoreApplication::translate("MainWindow", "Style Ex", nullptr));
        classStyleLabel->setText(QCoreApplication::translate("MainWindow", "Class Style", nullptr));
        rectGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Rect", nullptr));
        rectLeftSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        rectLeftSpinBox->setPrefix(QString());
        rectRightSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        rectRightSpinBox->setPrefix(QString());
        rectLeftLabel->setText(QCoreApplication::translate("MainWindow", "left:", nullptr));
        rectTopSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        rectTopSpinBox->setPrefix(QString());
        rectTopLabel->setText(QCoreApplication::translate("MainWindow", "top:", nullptr));
        rectBottomLabel->setText(QCoreApplication::translate("MainWindow", "bottom:", nullptr));
        rectRightLabel->setText(QCoreApplication::translate("MainWindow", "right:", nullptr));
        rectBottomSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        rectBottomSpinBox->setPrefix(QString());
        sizeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Size", nullptr));
        sizeWidthLabel->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        sizeWidthSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        sizeWidthSpinBox->setPrefix(QString());
        sizeHeightLabel->setText(QCoreApplication::translate("MainWindow", "Height:", nullptr));
        sizeHeightSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        sizeHeightSpinBox->setPrefix(QString());
        dpiGroupBox->setTitle(QCoreApplication::translate("MainWindow", "DPI", nullptr));
        dpiLabel->setText(QCoreApplication::translate("MainWindow", "X- 1.00  Y- 1.00", nullptr));
        codeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Code", nullptr));
        codeLabel->setText(QCoreApplication::translate("MainWindow", "Unicode", nullptr));
        otherGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Other attribute", nullptr));
        activeCheckBox->setText(QCoreApplication::translate("MainWindow", "Active", nullptr));
        showCheckBox->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        topmostCheckBox->setText(QCoreApplication::translate("MainWindow", "Topmost", nullptr));
        opacityGroupBox->setTitle(QCoreApplication::translate("MainWindow", "OpacityAlpha", nullptr));
        opacitySpinBox->setSuffix(QString());
        opacitySpinBox->setPrefix(QString());
        eraseGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Erase the specified color", nullptr));
        eraseRedSpinBox->setSuffix(QString());
        eraseRedSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "R = ", nullptr));
        eraseGreenSpinBox->setSuffix(QString());
        eraseGreenSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "R = ", nullptr));
        eraseBlueSpinBox->setSuffix(QString());
        eraseBlueSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "B = ", nullptr));
        tabMainWidget->setTabText(tabMainWidget->indexOf(tabWindow), QCoreApplication::translate("MainWindow", "Window", nullptr));
        currentTimeLabel->setText(QCoreApplication::translate("MainWindow", "Current Time", nullptr));
        processIdLabel->setText(QCoreApplication::translate("MainWindow", "Process ID", nullptr));
        processStartTimeLabel->setText(QCoreApplication::translate("MainWindow", "Start Time", nullptr));
        processPathLabel->setText(QCoreApplication::translate("MainWindow", "Process Path", nullptr));
        processWindowsListGroupBox->setTitle(QCoreApplication::translate("MainWindow", "List of windows for this process", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = processWindowTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("MainWindow", "CLASS", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "TITLE", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "HWND", nullptr));
        processCommandLineLabel->setText(QCoreApplication::translate("MainWindow", "CmdLine", nullptr));
        copyProcessPathButton->setText(QCoreApplication::translate("MainWindow", "Copy Path", nullptr));
        openExplorerButton->setText(QCoreApplication::translate("MainWindow", "Open Explorer", nullptr));
        tabMainWidget->setTabText(tabMainWidget->indexOf(tabProcess), QCoreApplication::translate("MainWindow", "Process", nullptr));
        windowImageGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Window Image", nullptr));
        windowImageLabel->setText(QCoreApplication::translate("MainWindow", "Window Image", nullptr));
        cursorRColorLabel->setText(QCoreApplication::translate("MainWindow", "R- 000", nullptr));
        cursorGColorLabel->setText(QCoreApplication::translate("MainWindow", "G- 000", nullptr));
        cursorBColorLabel->setText(QCoreApplication::translate("MainWindow", "B- 000", nullptr));
        imageDisplayWindowButton->setText(QCoreApplication::translate("MainWindow", "Window image", nullptr));
        imageDisplayScreenButton->setText(QCoreApplication::translate("MainWindow", "Screen image", nullptr));
        colorCircleCheckBox->setText(QCoreApplication::translate("MainWindow", "Open Color Circle", nullptr));
        imageMagnifierGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Image Magnifier", nullptr));
        imageMagnifierLabel->setText(QCoreApplication::translate("MainWindow", "Image Magnifier", nullptr));
        cursorCoordinatePointGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Cursor coordinate point", nullptr));
        cursorPointInScreenLabel->setText(QCoreApplication::translate("MainWindow", "In Screen", nullptr));
        cursorPointXInScreenSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        cursorPointXInScreenSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "X- ", nullptr));
        cursorPointYInScreenSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        cursorPointYInScreenSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "Y- ", nullptr));
        cursorPointInWindowLabel->setText(QCoreApplication::translate("MainWindow", "In Window", nullptr));
        cursorPointXInWindowSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        cursorPointXInWindowSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "X- ", nullptr));
        cursorPointYInWindowSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "px", nullptr));
        cursorPointYInWindowSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "Y- ", nullptr));
        saveImageButton->setText(QCoreApplication::translate("MainWindow", "Save image\n"
"(Ctrl + I)", nullptr));
#if QT_CONFIG(shortcut)
        saveImageButton->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        tabMainWidget->setTabText(tabMainWidget->indexOf(tabCursor), QCoreApplication::translate("MainWindow", "Cursor", nullptr));
        tabMainWidget->setTabText(tabMainWidget->indexOf(tabClass), QCoreApplication::translate("MainWindow", "Class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
