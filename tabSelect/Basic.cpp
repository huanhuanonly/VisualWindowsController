#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_dynamicButton_clicked()
{
    this->m_selectionMode = SelectionMode::Dynamic;
    
    ui->hwndUpdateIntervalLabel->setEnabled(true);
    ui->hwndUpdateIntervalSpinBox->setEnabled(true);
    
    ui->dynamicGroupBox->setEnabled(true);
    ui->staticGroupBox->setEnabled(false);
    
    ui->currentHwndEdit->setReadOnly(true);
}


void MainWindow::on_staticButton_clicked()
{
    this->m_selectionMode = SelectionMode::Static;
    
    ui->hwndUpdateIntervalLabel->setEnabled(false);
    ui->hwndUpdateIntervalSpinBox->setEnabled(false);
    
    ui->dynamicGroupBox->setEnabled(false);
    ui->staticGroupBox->setEnabled(true);
    ui->staticWindowsTreeWidget->setEnabled(true);
    
    ui->currentHwndEdit->setReadOnly(false);
    
    updateWindowTreeInSelectionPage();
}


void MainWindow::on_infoUpdateIntervalSpinBox_valueChanged(int arg1)
{
    this->m_updateInterval_Info = arg1;
    this->m_timerUpdateInfo->start(arg1);
}


void MainWindow::on_hwndUpdateIntervalSpinBox_valueChanged(int arg1)
{
    this->m_updateInterval_Hwnd = arg1;
    this->m_timerUpdateHwnd->start(arg1);
}

void MainWindow::on_currentHwndEdit_valueChange(unsigned long long int value)
{
    auto i = ui->staticWindowsTreeWidget->findItems(QString::number(value), Qt::MatchFixedString);
    if (i.isEmpty() == false) ui->staticWindowsTreeWidget->setCurrentItem(i[0]);
    
    *this->hwnd = value;
}
