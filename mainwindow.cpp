#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , hwnd(new WindowController)
    , process(new ProcessController)
    , m_timerUpdateInfo(new QTimer(this))
    , m_timerUpdateHwnd(new QTimer(this))
    , m_processCmdLineListModel(new QStringListModel(this))
{
    ui->setupUi(this);
    
    this->m_currentTabPage = CurrentTabPage(ui->tabMainWidget->currentIndex());
    
    this->m_updateInterval_Info = ui->infoUpdateIntervalSpinBox->value();
    this->m_updateInterval_Hwnd = ui->hwndUpdateIntervalSpinBox->value();
    
    connect(m_timerUpdateHwnd, &QTimer::timeout, this, &MainWindow::updateHwnd);
    connect(m_timerUpdateInfo, &QTimer::timeout, this, &MainWindow::updateInformation);
    
    connect(ui->currentHwndRadixComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [&](int index)
    {
        switch (index)
        {
        case 0:
            ui->currentHwndEdit->setBase(RadixLineEdit::RADIX::Hex);
            break;
        case 1:
            ui->currentHwndEdit->setBase(RadixLineEdit::RADIX::Dec);
            break;
        case 2:
            ui->currentHwndEdit->setBase(RadixLineEdit::RADIX::Oct);
            break;
        case 3:
            ui->currentHwndEdit->setBase(RadixLineEdit::RADIX::Bin);
            break;
        }
    });
    ui->basicStyleBinsetFrame->setStyleSheet(R"(
QPushButton {
    background-color: #333333;
    color: #00ffff;
    border: 1px solid #dcdfe6;
    padding: 5px;
    border-radius: 2px;
}
QPushButton:hover {
    background-color: #ecf5ff;
    color: #409eff;
}
QPushButton:pressed, QPushButton:checked {
    border: 1px solid #3a8ee6;
    color: #409eff;
})");
    ui->styleExBinsetFrame->setStyleSheet(R"(
QPushButton {
    background-color: #333333;
    color: #00ffff;
    border: 1px solid #dcdfe6;
    padding: 5px;
    border-radius: 2px;
}
QPushButton:hover {
    background-color: #ecf5ff;
    color: #409eff;
}
QPushButton:pressed, QPushButton:checked {
    border: 1px solid #3a8ee6;
    color: #409eff;
})");
    ui->classStyleBinsetFrame->setStyleSheet(R"(
QPushButton {
    background-color: #333333;
    color: #00ffff;
    border: 1px solid #dcdfe6;
    padding: 5px;
    border-radius: 2px;
}
QPushButton:hover {
    background-color: #ecf5ff;
    color: #409eff;
}
QPushButton:pressed, QPushButton:checked {
    border: 1px solid #3a8ee6;
    color: #409eff;
})");
    
    ui->basicStyleBinsetFrame->setLenght(sizeof(WindowController::WindowInfoVolatile::style) * 8);
    ui->styleExBinsetFrame->setLenght(sizeof(WindowController::WindowInfoVolatile::style) * 8);
    ui->classStyleBinsetFrame->setLenght(sizeof(WindowController::WindowInfoVolatile::style) * 8);
    
    sf_setBinsetEditTips();
    
    connect(ui->basicStyleBinsetFrame, &BinsetEdit::valueChanged, this, [this](BinsetEdit::type_integer_value value)
    {
        hwnd->setStyle(static_cast<WindowController::type_style>(value));
    });
    connect(ui->styleExBinsetFrame, &BinsetEdit::valueChanged, this, [this](BinsetEdit::type_integer_value value)
    {
        hwnd->setStyleEx(static_cast<WindowController::type_style>(value));
    });
    connect(ui->classStyleBinsetFrame, &BinsetEdit::valueChanged, this, [this](BinsetEdit::type_integer_value value)
    {
        hwnd->setClassStyle(static_cast<WindowController::type_style>(value));
    });
    
    QSize maxSize = WindowController::getMaxSize();
    ui->rectLeftSpinBox->setMaximum(maxSize.width() * 2);
    ui->rectLeftSlider->setMaximum(maxSize.width() * 2);
    ui->rectRightSpinBox->setMaximum(maxSize.width() * 2);
    ui->rectRightSlider->setMaximum(maxSize.width() * 2);
    ui->rectTopSpinBox->setMaximum(maxSize.height() * 2);
    ui->rectTopSlider->setMaximum(maxSize.height() * 2);
    ui->rectBottomSpinBox->setMaximum(maxSize.height() * 2);
    ui->rectBottomSlider->setMaximum(maxSize.height() * 2);
    
    ui->rectLeftSpinBox->setMinimum(-maxSize.width());
    ui->rectLeftSlider->setMinimum(-maxSize.width());
    ui->rectRightSpinBox->setMinimum(-maxSize.width());
    ui->rectRightSlider->setMinimum(-maxSize.width());
    ui->rectTopSpinBox->setMinimum(-maxSize.height());
    ui->rectTopSlider->setMinimum(-maxSize.height());
    ui->rectBottomSpinBox->setMinimum(-maxSize.height());
    ui->rectBottomSlider->setMinimum(-maxSize.height());
    
    ui->sizeWidthSpinBox->setMaximum(maxSize.width() * 2);
    ui->sizeWidthSlider->setMaximum(maxSize.width() * 2);
    ui->sizeHeightSpinBox->setMaximum(maxSize.height() * 2);
    ui->sizeHeightSlider->setMaximum(maxSize.height() * 2);
    
    ui->cursorPointXInScreenSpinBox->setMaximum(maxSize.width());
    ui->cursorPointXInScreenSlider->setMaximum(maxSize.width());
    ui->cursorPointXInWindowSpinBox->setMaximum(maxSize.width());
    ui->cursorPointXInWindowSlider->setMaximum(maxSize.width());
    
    ui->cursorPointYInScreenSpinBox->setMaximum(maxSize.height());
    ui->cursorPointYInScreenSlider->setMaximum(maxSize.height());
    ui->cursorPointYInWindowSpinBox->setMaximum(maxSize.height());
    ui->cursorPointYInWindowSlider->setMaximum(maxSize.height());
    
    ui->cursorPointXInWindowSpinBox->setMinimum(-maxSize.width());
    ui->cursorPointXInWindowSlider->setMinimum(-maxSize.width());
    ui->cursorPointYInWindowSpinBox->setMinimum(-maxSize.height());
    ui->cursorPointYInWindowSlider->setMinimum(-maxSize.height());
    
    ui->staticWindowsTreeWidget->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->processWindowTreeWidget->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    
    if (this->m_selectionMode == SelectionMode::Dynamic)
    {
        this->m_timerUpdateHwnd->start(this->m_updateInterval_Hwnd);
    }
    this->m_timerUpdateInfo->start(this->m_updateInterval_Info);
    
    QLabel* copyright = new QLabel(this);
    QFont font = this->font();
    font.setItalic(true);
    font.setPointSize(7);
    copyright->setFont(font);
    copyright->setText(tr("Copyright (c) 2023 YangHuanhuan 3347484963@qq.com. All rights reserved."));
    ui->statusbar->addWidget(copyright);
    
    QToolButton* lockInfo = new QToolButton(this);
    QToolButton* lockHwnd = new QToolButton(this);
    
    lockInfo->setCheckable(true);
    lockHwnd->setCheckable(true);
    
    lockInfo->setText(tr("lI"));
    lockHwnd->setText(tr("lW"));
    
    lockInfo->setIcon(QIcon(":/Resource/lockInfo.svg"));
    lockHwnd->setIcon(QIcon(":/Resource/lockHwnd.svg"));
    
    lockInfo->setToolTip(tr("Lock Info (Ctrl + L)"));
    lockHwnd->setToolTip(tr("Lock Hwnd (Ctrl + W)"));
    
    lockInfo->setShortcut(QString("Ctrl+L"));
    lockHwnd->setShortcut(QString("Ctrl+W"));
    
    connect(lockInfo, &QToolButton::clicked, this, [&](bool checked)
    {
        if (checked) this->m_timerUpdateInfo->stop();
        else this->m_timerUpdateInfo->start();
    });
    connect(lockHwnd, &QToolButton::clicked, this, [&](bool checked)
    {
        if (checked) this->m_timerUpdateHwnd->stop();
        else this->m_timerUpdateHwnd->start();
    });
    
    
    ui->statusbar->addWidget(lockInfo);
    ui->statusbar->addWidget(lockHwnd);
    
    
    QToolButton* save = new QToolButton(this);
    save->setText(tr("Save"));
    save->setIcon(QIcon(":/Resource/saveInfo.svg"));
    save->setToolTip(tr("Save all info to clipboard (Ctrl + S)"));
    save->setShortcut(QString("Ctrl+S"));
    connect(save, &QToolButton::clicked, this, &MainWindow::saveAllInfoToClipboard);
    ui->statusbar->addWidget(save);
    
    QPushButton* aboutButton = new QPushButton(tr("About VWC"), this);
    aboutButton->setFont(font);
    
    aboutButton->setStyleSheet(R"(
QPushButton {
    background-color: #333333;
    color: #00ffff;
    border: 1px solid #dcdfe6;
    padding: 10px;
    border-radius: 15px;
}
QPushButton:hover {
    background-color: #ecf5ff;
    color: #409eff;
}
QPushButton:pressed, QPushButton:checked {
    border: 1px solid #3a8ee6;
    color: #409eff;
})");
    
    ui->statusbar->addPermanentWidget(aboutButton);
    
    connect(aboutButton, &QPushButton::clicked, this, [&]()
    {
        AboutDialog aboutDialog(this);
        
        aboutDialog.show();
        aboutDialog.exec();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    delete hwnd;
}

void MainWindow::on_tabMainWidget_currentChanged(int index)
{
    Q_UNUSED(index)
    
    QString name = ui->tabMainWidget->currentWidget()->objectName();
    
    if (name == this->m_currentTabPageObjectName[CurrentTabPage::Selection])
    {
        this->m_currentTabPage = CurrentTabPage::Selection;
        
        if (this->m_selectionMode == SelectionMode::Static && ui->staticFindBoxEdit->text().isEmpty())
        {
            updateWindowTreeInSelectionPage();
        }
    }
    else
    {
        
        
        if (name == this->m_currentTabPageObjectName[CurrentTabPage::Window])
        {
            this->m_currentTabPage = CurrentTabPage::Window;
            
        }
        else if (name == this->m_currentTabPageObjectName[CurrentTabPage::Process])
        {
            this->m_currentTabPage = CurrentTabPage::Process;
            
        }
        else if (name == this->m_currentTabPageObjectName[CurrentTabPage::Cursor])
        {
            this->m_currentTabPage = CurrentTabPage::Cursor;
            
        }
        else if (name == this->m_currentTabPageObjectName[CurrentTabPage::Class])
        {
            this->m_currentTabPage = CurrentTabPage::Class;
            
        }
    }
}

void MainWindow::updateHwnd()
{
    if (this->m_selectionMode == SelectionMode::Dynamic)
    {
        bool change;
        hwnd->setDynamicWindow(this->m_dynamicMode, &change);
        
        if (change)
        {
            const WindowController::WindowInfoStatic& info = hwnd->windowInfoStatic();
            
            ui->hwndLcdNumber->display(hwnd->toQString());
            on_hwndRadixComboBox_currentTextChanged(ui->hwndRadixComboBox->currentText());
            
            ui->classEdit->setText(info.className);
            ui->pathEdit->setText(info.fromPath);
            
            ui->pidLcdNumber->display(QString::number(info.pid));
            on_pidRadixComboBox_currentTextChanged(ui->pidRadixComboBox->currentText());
            
            ui->codeLabel->setText(info.code == WindowController::WindowCode::Unicode ? "Unicode" : "Ansi");
            ui->dpiLabel->setText(QString("X- %1  Y- %2")
                            .arg(QString::number(info.dpi.width() , 'f', 2))
                            .arg(QString::number(info.dpi.height(), 'f', 2)));
            
            
            
            *process = this->hwnd->windowInfoStatic().pid;
            
            const ProcessController::ProcessInfoStatic processInfo = process->processInfoStatic();
            
            ui->processIdLineEdit->setText(QString::number(this->hwnd->windowInfoStatic().pid));
            ui->processPathLineEdit->setText(processInfo.fromPath);
            ui->processStartDateTimeEdit->setDateTime(processInfo.startTime);
            
            this->m_processCmdLineListModel->setStringList(processInfo.cmdParameterList);
            ui->processCommandLineListView->setModel(this->m_processCmdLineListModel);
        }
    }
}

void MainWindow::updateInformation()
{
    switch (this->m_currentTabPage)
    {
    case CurrentTabPage::Selection:
        
        if (this->m_selectionMode == SelectionMode::Static)
        {
            
        }
        break;
        
    case CurrentTabPage::Window:
    {
        WindowController::WindowInfoVolatile info = this->hwnd->windowInfoVolatile();
        
        if (ui->titleEdit->hasFocus() == false)
        {
            ui->titleEdit->setText(info.title);
        }
        
        if (ui->sizeWidthSpinBox->hasFocus() == false && ui->sizeWidthSlider->hasFocus() == false)
        {
            ui->sizeWidthSpinBox->blockSignals(true);
            ui->sizeWidthSpinBox->setValue(info.rect.right() - info.rect.left());
            ui->sizeWidthSpinBox->blockSignals(false);
            
            ui->sizeWidthSlider->blockSignals(true);
            ui->sizeWidthSlider->setValue(info.rect.right() - info.rect.left());
            ui->sizeWidthSlider->blockSignals(false);
            
        }
        if (ui->sizeHeightSpinBox->hasFocus() == false && ui->sizeHeightSlider->hasFocus() == false)
        {
            ui->sizeHeightSpinBox->blockSignals(true);
            ui->sizeHeightSpinBox->setValue(info.rect.bottom() - info.rect.top());
            ui->sizeHeightSpinBox->blockSignals(false);
            
            ui->sizeHeightSlider->blockSignals(true);
            ui->sizeHeightSlider->setValue(info.rect.bottom() - info.rect.top());
            ui->sizeHeightSlider->blockSignals(false);
        }
        
        if (ui->rectLeftSpinBox->hasFocus() == false && ui->rectLeftSlider->hasFocus() == false)
        {
            ui->rectLeftSpinBox->blockSignals(true);
            ui->rectLeftSpinBox->setValue(info.rect.left());
            ui->rectLeftSpinBox->blockSignals(false);
            
            ui->rectLeftSlider->blockSignals(true);
            ui->rectLeftSlider->setValue(info.rect.left());
            ui->rectLeftSlider->blockSignals(false);
        }
        if (ui->rectRightSpinBox->hasFocus() == false && ui->rectRightSlider->hasFocus() == false)
        {
            ui->rectRightSpinBox->blockSignals(true);
            ui->rectRightSpinBox->setValue(info.rect.right());
            ui->rectRightSpinBox->blockSignals(false);
            
            ui->rectRightSlider->blockSignals(true);
            ui->rectRightSlider->setValue(info.rect.right());
            ui->rectRightSlider->blockSignals(false);
        }
        if (ui->rectTopSpinBox->hasFocus() == false && ui->rectTopSlider->hasFocus() == false)
        {
            ui->rectTopSpinBox->blockSignals(true);
            ui->rectTopSpinBox->setValue(info.rect.top());
            ui->rectTopSpinBox->blockSignals(false);
            
            ui->rectTopSlider->blockSignals(true);
            ui->rectTopSlider->setValue(info.rect.top());
            ui->rectTopSlider->blockSignals(false);
        }
        if (ui->rectBottomSpinBox->hasFocus() == false && ui->rectBottomSlider->hasFocus() == false)
        {
            ui->rectBottomSpinBox->blockSignals(true);
            ui->rectBottomSpinBox->setValue(info.rect.bottom());
            ui->rectBottomSpinBox->blockSignals(false);
            
            ui->rectBottomSlider->blockSignals(true);
            ui->rectBottomSlider->setValue(info.rect.bottom());
            ui->rectBottomSlider->blockSignals(false);
        }
        
        if (ui->opacitySpinBox->hasFocus() == false && ui->opacitySlider->hasFocus() == false)
        {
            ui->opacitySpinBox->blockSignals(true);
            ui->opacitySpinBox->setValue(int(info.alpha));
            ui->opacitySpinBox->blockSignals(false);
            
            ui->opacitySlider->blockSignals(true);
            ui->opacitySlider->setValue(int(info.alpha));
            ui->opacitySlider->blockSignals(false);
        }
        
        if (ui->eraseRedSpinBox->hasFocus() == false
            && ui->eraseGreenSpinBox->hasFocus() == false
            && ui->eraseBlueSpinBox->hasFocus() == false)
        {
            if (info.isErase)
            {
                ui->eraseGroupBox->setChecked(true);
                
                ui->eraseRedSpinBox->blockSignals(true);
                ui->eraseRedSpinBox->setValue(info.eraseColor.red());
                ui->eraseRedSpinBox->blockSignals(false);
                
                ui->eraseGreenSpinBox->blockSignals(true);
                ui->eraseGreenSpinBox->setValue(info.eraseColor.green());
                ui->eraseGreenSpinBox->blockSignals(false);
                
                ui->eraseBlueSpinBox->blockSignals(true);
                ui->eraseBlueSpinBox->setValue(info.eraseColor.blue());
                ui->eraseBlueSpinBox->blockSignals(false);
            }
            else ui->eraseGroupBox->setChecked(false);
        }
        
        ui->activeCheckBox->blockSignals(true);
        ui->activeCheckBox->setChecked(info.isActive);
        ui->activeCheckBox->blockSignals(false);
        
        ui->showCheckBox->blockSignals(true);
        ui->showCheckBox->setChecked(info.isShow);
        ui->showCheckBox->blockSignals(false);
        
        ui->topmostCheckBox->blockSignals(true);
        ui->topmostCheckBox->setChecked(info.isTopmost);
        ui->topmostCheckBox->blockSignals(false);
        
        // set window style
        
        ui->basicStyleBinsetFrame->blockSignals(true);
        ui->basicStyleBinsetFrame->setValue(info.style);
        ui->basicStyleBinsetFrame->blockSignals(false);
        
        ui->styleExBinsetFrame->blockSignals(true);
        ui->styleExBinsetFrame->setValue(info.styleEx);
        ui->styleExBinsetFrame->blockSignals(false);
        
        ui->classStyleBinsetFrame->blockSignals(true);
        ui->classStyleBinsetFrame->setValue(info.classStyle);
        ui->classStyleBinsetFrame->blockSignals(false);
        
        break;
    }   
    case CurrentTabPage::Process:
    {
        ui->currentDateTimeEdit->setDateTime(QDateTime::currentDateTime());
        
        qint64 n = process->processInfoStatic().startTime.secsTo(QDateTime::currentDateTime());
        
        ui->processRunningDateTimeEdit->setText(QString("%1day|%2h,%3m,%4s")
                                            .arg(n / 60 / 60 / 24)
                                            .arg(n / 60 / 60, 2, 10, QChar('0'))
                                            .arg((n / 60) % 60, 2, 10, QChar('0'))
                                            .arg(n % 60, 2, 10, QChar('0')));
        
        break;
    }
    case CurrentTabPage::Cursor:
    {
        QPixmap image;
        
        switch (this->m_windowImageDisplayMode)
        {
        case WindowImageDisplayMode::WindowImage:
            image = hwnd->image(WindowController::ImageCaptureMode::Window);
            break;
        case WindowImageDisplayMode::ScreenImage:
            image = hwnd->image(WindowController::ImageCaptureMode::Screen);
            break;
        }
        QColor color = CursorController::color();
        QPoint curposInScreen = CursorController::point();
        QPoint curposInWindow = this->hwnd->cursorPoint();
        QPoint curposInWindowWithFrame = this->hwnd->cursorPoint(true);
        QSize imageWindowSize = ui->windowImageLabel->size();
        
        QSize magnifierWindowSize = ui->imageMagnifierLabel->size();
        QPixmap magnifier = image.copy(curposInWindowWithFrame.x() - magnifierWindowSize.width() / 4, curposInWindowWithFrame.y() - magnifierWindowSize.height() / 4,
                                        magnifierWindowSize.width() / 2, magnifierWindowSize.height() / 2);
        ui->imageMagnifierLabel->setPixmap(magnifier.scaled(magnifierWindowSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        
        
        if (ui->colorCircleCheckBox->isChecked())
        {
            QPainter painter(&image);
            QPen pen(Qt::DashDotLine);
            pen.setColor(QColor(0x00, 0xff, 0x00));
            pen.setWidth(2);
            painter.setPen(pen);
            
            painter.drawLine(0, curposInWindowWithFrame.y(), image.width(), curposInWindowWithFrame.y());
            painter.drawLine(curposInWindowWithFrame.x(), 0, curposInWindowWithFrame.x(), image.height());
            
            painter.translate(curposInWindowWithFrame.x(), curposInWindowWithFrame.y());
            
            int r = (curposInWindowWithFrame.x() + curposInWindowWithFrame.y()) / 2 % 360;
            pen.setColor(color); painter.setPen(pen);
            painter.drawEllipse(-25, -25, 50, 50);
            
            painter.rotate(r);
            pen.setColor(QColor(0xff, 0x00, 0x00, color.red())); painter.setPen(pen);
            painter.drawRect(-35, -35, 70, 70);
            
            pen.setColor(QColor(0x00, 0xff, 0x00, color.green())); painter.setPen(pen);
            painter.rotate(360 - r * 2);
            painter.drawRect(-45, -45, 90, 90);
            
            pen.setColor(QColor(0x00, 0x00, 0xff, color.blue())); painter.setPen(pen);
            painter.rotate((r * 2) % 360);
            painter.drawRect(-55, -55, 110, 110);
        }
        ui->windowImageLabel->setPixmap(image.scaled(imageWindowSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        
        
        ui->cursorColorBox->setColor(color);
        ui->cursorRColorSlider->setValue(color.red());
        ui->cursorGColorSlider->setValue(color.green());
        ui->cursorBColorSlider->setValue(color.blue());
        
        ui->cursorRColorLabel->setText(QString("R- %1").arg(color.red(),   3, 10, QChar('0')));
        ui->cursorGColorLabel->setText(QString("G- %1").arg(color.green(), 3, 10, QChar('0')));
        ui->cursorBColorLabel->setText(QString("B- %1").arg(color.blue(),  3, 10, QChar('0')));
        
        
        ui->cursorPointXInScreenSpinBox->setValue(curposInScreen.x());
        ui->cursorPointXInScreenSlider->setValue(curposInScreen.x());
        
        ui->cursorPointYInScreenSpinBox->setValue(curposInScreen.y());
        ui->cursorPointYInScreenSlider->setValue(curposInScreen.y());
        
        ui->cursorPointXInWindowSpinBox->setValue(curposInWindow.x());
        ui->cursorPointXInWindowSlider->setValue(curposInWindow.x());
        ui->cursorPointYInWindowSpinBox->setValue(curposInWindow.y());
        ui->cursorPointYInWindowSlider->setValue(curposInWindow.y());
        
        
        break;
    }
    case CurrentTabPage::Class:
        
        break;
    }
    return;
}

void MainWindow::updateWindowTreeInSelectionPage() noexcept
{
    this->m_windowTree.clear();
    this->m_windowTree = WindowController::getWindowsTree();
    
    QTreeWidgetItemIterator it(ui->staticWindowsTreeWidget);
    while (*it)
    {
        int cnt = (*it)->childCount();
        if (cnt)
        {
            for (int i = 0; i < cnt; ++i)
            {
                auto temp = (*it)->child(i);
                
                (*it)->removeChild(temp);
                delete temp;
            }
        }
        ui->staticWindowsTreeWidget->takeTopLevelItem(ui->staticWindowsTreeWidget->indexOfTopLevelItem(*it));
        delete *it;
        ++it;
    }
    
    for (auto i = m_windowTree.begin(); i != m_windowTree.end(); ++i)
    {
        QTreeWidgetItem* node = new QTreeWidgetItem;
        node->setText(0, QString::number(qulonglong(i.key())));
        node->setText(1, WindowController::title(i.key()));
        node->setText(2, WindowController::className(i.key()));
        
        if (!(i.value().isEmpty()))
        {
            for (auto v : i.value())
            {
                QTreeWidgetItem* child_node = new QTreeWidgetItem;
                child_node->setText(0, QString::number(qulonglong(v)));
                child_node->setText(1, WindowController::title(v));
                child_node->setText(2, WindowController::className(v));
                
                node->addChild(child_node);
            }
        }
        ui->staticWindowsTreeWidget->addTopLevelItem(node);
    }
    
    ui->staticWindowsTreeWidget->expandAll();
}

void MainWindow::sf_setBinsetEditTips() noexcept
{
    QMap<WindowController::type_style, int> valueToIndex;
    
    WindowController::type_style currentValue = 1;
    for (int i = 1; i <= sizeof(WindowController::type_style) * 8; ++i)
    {
        valueToIndex[currentValue] = i;
        
        currentValue <<= 1;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00800000L],
tr(R"(WS_BORDER @ 0x00800000L
The window has a thin-line border.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x40000000L],
tr(R"(WS_CHILD @ 0x40000000L (aka WS_CHILDWINDOW)
The window is a child window.
A window with this style cannot have a menu bar.
This style cannot be used with the WS_POPUP style.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x02000000L],
tr(R"(WS_CLIPCHILDREN @ 0x02000000L
Excludes the area occupied by child windows when drawing occurs within the parent window.
This style is used when creating the parent window.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x04000000L],
tr(R"(WS_CLIPSIBLINGS @ 0x04000000L
Clips child windows relative to each other;
that is, when a particular child window receives a WM_PAINT message,
the WS_CLIPSIBLINGS style clips all other overlapping child windows out of the region of the child window to be updated.

If WS_CLIPSIBLINGS is not specified and child windows overlap,
it is possible, when drawing within the client area of a child window,
to draw within the client area of a neighboring child window.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x08000000L],
tr(R"(WS_DISABLED @ 0x08000000L
The window is initially disabled.
A disabled window cannot receive input from the user.
To change this after a window has been created,
use the EnableWindow function.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00400000L],
tr(R"(WS_DLGFRAME @ 0x00400000L
The window has a border of a style typically used with dialog boxes.
A window with this style cannot have a title bar.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00020000L],
tr(R"(WS_GROUP @ 0x00020000L
The window is the first control of a group of controls.
The group consists of this first control and all controls defined after it, up to the next control with the WS_GROUP style.
The first control in each group usually has the WS_TABSTOP style so that the user can move from group to group.
The user can subsequently change the keyboard focus from one control in the group to the next control in the group by using the direction keys.

You can turn this style on and off to change dialog box navigation.
To change this style after a window has been created,
use the SetWindowLong function.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00100000L],
tr(R"(WS_HSCROLL @ 0x00100000L
The window has a horizontal scroll bar.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x20000000L],
tr(R"(WS_MINIMIZE @ 0x20000000L (aka WS_ICONIC)
The window is initially minimized.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x01000000L],
tr(R"(WS_MAXIMIZE @ 0x01000000L
The window is initially maximized.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00010000L],
tr(R"(WS_MAXIMIZEBOX @ 0x00010000L
The window has a maximize button.
Cannot be combined with the WS_EX_CONTEXTHELP style.
The WS_SYSMENU style must also be specified.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00020000L],
tr(R"(WS_MINIMIZEBOX @ 0x00020000L
The window has a minimize button.
Cannot be combined with the WS_EX_CONTEXTHELP style.
The WS_SYSMENU style must also be specified.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x80000000L],
tr(R"(WS_POPUP @ 0x80000000L
The window is a pop-up window.
This style cannot be used with the WS_CHILD style.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00040000L],
tr(R"(WS_SIZEBOX @ 0x00040000L (aka WS_THICKFRAME)
The window has a sizing border.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00080000L],
tr(R"(WS_SYSMENU @ 0x00080000L
The window has a window menu on its title bar.
The WS_CAPTION style must also be specified.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00010000L],
tr(R"(WS_TABSTOP @ 0x00010000L
The window is a control that can receive the keyboard focus when the user presses the TAB key.
Pressing the TAB key changes the keyboard focus to the next control with the WS_TABSTOP style.

You can turn this style on and off to change dialog box navigation.
To change this style after a window has been created,
use the SetWindowLong function.
For user-created windows and modeless dialogs to work with tab stops,
alter the message loop to call the IsDialogMessage function.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x10000000L],
tr(R"(WS_VISIBLE @ 0x10000000L
The window is initially visible.
This style can be turned on and off by using the ShowWindow or SetWindowPos function.)"));
    
    ui->basicStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00200000L],
tr(R"(WS_VSCROLL @ 0x00200000L
The window has a vertical scroll bar.)"));
    
    ////////////////////////////////////////////////////////////////////////////////////////////
    
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000010L],
tr(R"(WS_EX_ACCEPTFILES @ 0x00000010L
The window accepts drag-drop files.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00040000L],
tr(R"(WS_EX_APPWINDOW @ 0x00040000L
Forces a top-level window onto the taskbar when the window is visible.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000200L],
tr(R"(WS_EX_CLIENTEDGE @ 0x00000200L
The window has a border with a sunken edge.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x02000000L],
tr(R"(WS_EX_COMPOSITED @ 0x02000000L
Paints all descendants of a window in bottom-to-top painting order using double-buffering.
Bottom-to-top painting order allows a descendent window to have translucency (alpha) and transparency (color-key) effects,
but only if the descendent window also has the WS_EX_TRANSPARENT bit set.
Double-buffering allows the window and its descendents to be painted without flicker.
This cannot be used if the window has a class style of either CS_OWNDC or CS_CLASSDC.

Windows 2000: This style is not supported.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000400L],
tr(R"(WS_EX_CONTEXTHELP @ 0x00000400L
The title bar of the window includes a question mark.
When the user clicks the question mark, the cursor changes to a question mark with a pointer.
If the user then clicks a child window, the child receives a WM_HELP message.
The child window should pass the message to the parent window procedure,
which should call the WinHelp function using the HELP_WM_HELP command.
The Help application displays a pop-up window that typically contains help for the child window.

WS_EX_CONTEXTHELP cannot be used with the WS_MAXIMIZEBOX or WS_MINIMIZEBOX styles.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00010000L],
tr(R"(WS_EX_CONTROLPARENT @ 0x00010000L
The window itself contains child windows that should take part in dialog box navigation.
If this style is specified,
the dialog manager recurses into children of this window when performing navigation operations such as handling the TAB key,
an arrow key, or a keyboard mnemonic.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000001L],
tr(R"(WS_EX_DLGMODALFRAME @ 0x00000001L
The window has a double border;
the window can, optionally, be created with a title bar by specifying the WS_CAPTION style in the dwStyle parameter.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00080000],
tr(R"(WS_EX_LAYERED @ 0x00080000
The window is a layered window.
This style cannot be used if the window has a class style of either CS_OWNDC or CS_CLASSDC.

Windows 8: The WS_EX_LAYERED style is supported for top-level windows and child windows.
Previous Windows versions support WS_EX_LAYERED only for top-level windows.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00400000L],
tr(R"(WS_EX_LAYOUTRTL @ 0x00400000L
If the shell language is Hebrew, Arabic, or another language that supports reading order alignment,
the horizontal origin of the window is on the right edge.
Increasing horizontal values advance to the left.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00004000L],
tr(R"(WS_EX_LEFTSCROLLBAR @ 0x00004000L
If the shell language is Hebrew, Arabic, or another language that supports reading order alignment,
the vertical scroll bar (if present) is to the left of the client area.
For other languages, the style is ignored.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000040L],
tr(R"(WS_EX_MDICHILD @ 0x00000040L
The window is a MDI child window.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x08000000L],
tr(R"(WS_EX_NOACTIVATE @ 0x08000000L
A top-level window created with this style does not become the foreground window when the user clicks it.
The system does not bring this window to the foreground when the user minimizes or closes the foreground window.

The window should not be activated through programmatic access or via keyboard navigation by accessible technology,
such as Narrator.

To activate the window, use the SetActiveWindow or SetForegroundWindow function.
The window does not appear on the taskbar by default.
To force the window to appear on the taskbar, use the WS_EX_APPWINDOW style.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00100000L],
tr(R"(WS_EX_NOINHERITLAYOUT @ 0x00100000L
The window does not pass its window layout to its child windows.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000004L],
tr(R"(WS_EX_NOPARENTNOTIFY @ 0x00000004L
The child window created with this style does not send the WM_PARENTNOTIFY message to its parent window when it is created or destroyed.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00200000L],
tr(R"(WS_EX_NOREDIRECTIONBITMAP @ 0x00200000L
The window does not render to a redirection surface.
This is for windows that do not have visible content or that use mechanisms other than surfaces to provide their visual.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00001000L],
tr(R"(WS_EX_RIGHT @ 0x00001000L
The window has generic "right-aligned" properties.
This depends on the window class.
This style has an effect only if the shell language is Hebrew, Arabic, or another language that supports reading-order alignment;
otherwise, the style is ignored.

Using the WS_EX_RIGHT style for static or edit controls has the same effect as using the SS_RIGHT or ES_RIGHT style, respectively.
Using this style with button controls has the same effect as using BS_RIGHT and BS_RIGHTBUTTON styles.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00002000L],
tr(R"(WS_EX_RTLREADING @ 0x00002000L
If the shell language is Hebrew, Arabic, or another language that supports reading-order alignment,
the window text is displayed using right-to-left reading-order properties.
For other languages, the style is ignored.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00020000L],
tr(R"(WS_EX_STATICEDGE @ 0x00020000L
The window has a three-dimensional border style intended to be used for items that do not accept user input.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000080L],
tr(R"(WS_EX_TOOLWINDOW @ 0x00000080L
The window is intended to be used as a floating toolbar.
A tool window has a title bar that is shorter than a normal title bar, and the window title is drawn using a smaller font.
A tool window does not appear in the taskbar or in the dialog that appears when the user presses ALT+TAB.
If a tool window has a system menu, its icon is not displayed on the title bar.
However, you can display the system menu by right-clicking or by typing ALT+SPACE.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000008L],
tr(R"(WS_EX_TOPMOST @ 0x00000008L
The window should be placed above all non-topmost windows and should stay above them, even when the window is deactivated.
To add or remove this style, use the SetWindowPos function.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000020L],
tr(R"(WS_EX_TRANSPARENT @ 0x00000020L
The window should not be painted until siblings beneath the window (that were created by the same thread) have been painted.
The window appears transparent because the bits of underlying sibling windows have already been painted.
To achieve transparency without these restrictions, use the SetWindowRgn function.)"));
    
    ui->styleExBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00000100L],
tr(R"(WS_EX_WINDOWEDGE @ 0x00000100L
The window has a border with a raised edge.)"));
    
    ////////////////////////////////////////////////////////////////////////////////////////////
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x1000],
tr(R"(CS_BYTEALIGNCLIENT @ 0x1000
Aligns the window's client area on a byte boundary (in the x direction).
This style affects the width of the window and its horizontal placement on the display.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x2000],
tr(R"(CS_BYTEALIGNWINDOW @ 0x2000
Aligns the window on a byte boundary (in the x direction).
This style affects the width of the window and its horizontal placement on the display.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0040],
tr(R"(CS_CLASSDC @ 0x0040
Allocates one device context to be shared by all windows in the class.
Because window classes are process specific,
it is possible for multiple threads of an application to create a window of the same class.
It is also possible for the threads to attempt to use the device context simultaneously.
When this happens, the system allows only one thread to successfully finish its drawing operation.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0008],
tr(R"(CS_DBLCLKS @ 0x0008
Sends a double-click message to the window procedure when the user double-clicks the mouse while the cursor is within a window belonging to the class.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x00020000],
tr(R"(CS_DROPSHADOW @ 0x00020000
Enables the drop shadow effect on a window.
The effect is turned on and off through SPI_SETDROPSHADOW.
Typically, this is enabled for small, short-lived windows such as menus to emphasize their Z-order relationship to other windows.
Windows created from a class with this style must be top-level windows;
they may not be child windows.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x4000],
tr(R"(CS_GLOBALCLASS @ 0x4000
Indicates that the window class is an application global class.
For more information, see the "Application Global Classes" section of About Window Classes.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0002],
tr(R"(CS_HREDRAW @ 0x0002
Redraws the entire window if a movement or size adjustment changes the width of the client area.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0200],
tr(R"(CS_NOCLOSE @ 0x0200
Disables Close on the window menu.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0020],
tr(R"(CS_OWNDC @ 0x0020
Allocates a unique device context for each window in the class.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0080],
tr(R"(CS_PARENTDC @ 0x0080
Disables Close on the window menu.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0200],
tr(R"(CS_NOCLOSE @ 0x0200
Sets the clipping rectangle of the child window to that of the parent window so that the child can draw on the parent.
A window with the CS_PARENTDC style bit receives a regular device context from the system's cache of device contexts.
It does not give the child the parent's device context or device context settings.
Specifying CS_PARENTDC enhances an application's performance.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0800],
tr(R"(CS_SAVEBITS @ 0x0800
Saves, as a bitmap, the portion of the screen image obscured by a window of this class.
When the window is removed, the system uses the saved bitmap to restore the screen image, including other windows that were obscured.

Therefore, the system does not send WM_PAINT messages to windows that were obscured if the memory used by the bitmap has not been discarded and if other screen actions have not invalidated the stored image.
This style is useful for small windows (for example, menus or dialog boxes) that are displayed briefly and then removed before other screen activity takes place.
This style increases the time required to display the window, because the system must first allocate memory to store the bitmap.)"));
    
    ui->classStyleBinsetFrame->setBitTip((sizeof(WindowController::type_style) * 8) - valueToIndex[0x0001],
tr(R"(CS_VREDRAW @ 0x0001
Redraws the entire window if a movement or size adjustment changes the height of the client area.)"));
    
}

static QString completion(const QString& value, int n)
{
    QString str(value);
    
    if (value.size() < n)
    {
        str += QString(n - value.size(), ' ');
    }
    return str;
}

static QString completion(qulonglong value, int n)
{
    QString str;
    str.setNum(value);
    
    if (str.size() < n)
    {
        str += QString(n - str.size(), ' ');
    }
    return str;
}

void MainWindow::saveAllInfoToClipboard()
{
    QString str;
    
    WindowController::WindowInfoVolatile wi = hwnd->windowInfoVolatile();
    
    qint64 runtime = process->processInfoStatic().startTime.secsTo(QDateTime::currentDateTime());
    QSize maxSize = WindowController::getMaxSize();
    
    
    str += tr("HWND: %1 (Hex %2)\n").arg((unsigned long long int)(*hwnd)).arg(QString::number((unsigned long long int)(*hwnd), 16));
    str += tr("---------------------------------------------\n");
    str += tr("#Title[%1] = %2\n").arg(wi.title.size()).arg(wi.title);
    str += tr("#Class[%1] = %2\n").arg(hwnd->windowInfoStatic().className.size()).arg(hwnd->windowInfoStatic().className);
    str += tr("#Code = %1\n").arg(hwnd->windowInfoStatic().code == WindowController::WindowCode::Unicode ? "Unicode" : "Ansi");
    str += tr("#Rect(left, top, right, bottom) = [%1, %2, %3, %4]\n")
            .arg(wi.rect.left())
            .arg(wi.rect.top())
            .arg(wi.rect.right())
            .arg(wi.rect.bottom());
    str += tr("#Size(width, height) = [%1, %2] (max [%3, %4])\n")
            .arg(hwnd->width())
            .arg(hwnd->height())
            .arg(maxSize.width())
            .arg(maxSize.height());
    str += tr("#Opacity[0~255] = %1\n").arg(hwnd->alpha());
    str += tr("#EraseColor = %1 (%2)\n").arg(hwnd->hasEraseColor() ? "True" : "False").arg(hwnd->eraseColor().name());
    str += tr("#Style = %1 (binary list = %2)\n").arg(hwnd->style()).arg(QString::number(hwnd->style(), 2));
    str += tr("#StyleEx = %1 (binary list = %2)\n").arg(hwnd->styleEx()).arg(QString::number(hwnd->styleEx(), 2));
    str += tr("#ClassStyle = %1 (binary list = %2)\n").arg(hwnd->classStyle()).arg(QString::number(hwnd->classStyle(), 2));
    str += tr("#isTopmost = %1\n").arg(hwnd->isTopmost() ? "True" : "False");
    str += tr("#isShow = %1\n").arg(hwnd->isShow() ? "True" : "False");
    
    str += tr("~\n");
    str += tr("#ProcessID = %1\n").arg((ProcessController::PID)(*process));
    str += tr("#FromPath[%1] = %2\n").arg(hwnd->windowInfoStatic().fromPath.size()).arg(hwnd->windowInfoStatic().fromPath);
    str += tr("#Created on = %1\n").arg(process->processInfoStatic().startTime.toString());
    str += tr("#Runtime = %1day %2h %3m %4s (By %5)\n")
            .arg(runtime / 60 / 60 / 24)
            .arg(runtime / 60 / 60, 2, 10, QChar('0'))
            .arg((runtime / 60) % 60, 2, 10, QChar('0'))
            .arg(runtime % 60, 2, 10, QChar('0'))
            .arg(QDateTime::currentDateTime().toString());
    
    str += tr("~\n");
    str += tr("#Cursor point in current window = (%1, %2)\n").arg(CursorController::x()).arg(CursorController::y());
    str += tr("#Cursor point in current screen = (%1, %2)\n").arg(hwnd->cursorPoint().x()).arg(hwnd->cursorPoint().y());
    str += tr("#Color from cursor point (RGB) = (%1, %2, %3) (aka %4)\n")
            .arg(CursorController::color().red())
            .arg(CursorController::color().green())
            .arg(CursorController::color().blue())
            .arg(CursorController::color().name());
    
    // windows list
    
    QMap<HWND, QVector<HWND>> windowList = WindowController::getWindowsTree();
    
    int winCount = windowList.size();
    int maxTitle = 0;
    int maxClass = 0;
    
    for (auto i = windowList.begin(); i != windowList.end(); ++i)
    {
        maxTitle = std::max(maxTitle, WindowController::title(i.key()).size());
        maxClass = std::max(maxClass, WindowController::className(i.key()).size());
        
        if (!(i.value().isEmpty()))
        {
            for (auto li : i.value())
            {
                ++winCount;
                maxTitle = std::max(maxTitle, WindowController::title(li).size());
                maxClass = std::max(maxClass, WindowController::className(li).size());
            }
        }
    }
    
    str += tr("\n~Window tree [count = %1]\n\n").arg(winCount);
    
    maxTitle += 2;
    maxClass += 2;
    
    str += tr("  HWND%1TITLE%2CLASS\n").arg(QString(18 - 4, ' ')).arg(QString(maxTitle - 5, ' ')).arg(QString(maxClass - 5, ' '));
    str += QString(18 + maxTitle + maxClass, '-') + '\n';
    
    for (auto i = windowList.begin(); i != windowList.end(); ++i)
    {
        str += tr("|-%1%2%3\n")
                .arg(::completion((unsigned long long int)(i.key()), 18))
                .arg(::completion(WindowController::title(i.key()), maxTitle))
                .arg(::completion(WindowController::className(i.key()), maxClass));
        
        if (!(i.value().isEmpty()))
        {
            for (auto li : i.value())
            {
                str += tr("| |-%1%2%3\n")
                        .arg(::completion((unsigned long long int)(li), 18 - 2))
                        .arg(::completion(WindowController::title(li), maxTitle))
                        .arg(::completion(WindowController::className(li), maxClass));
            }
        }
    }
    
    QApplication::clipboard()->setText(str);
}
