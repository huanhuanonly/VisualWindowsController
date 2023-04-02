#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_dynamicActiveButton_clicked()
{
    this->m_dynamicMode = DynamicMode::Active;
}


void MainWindow::on_dynamicForegroundButton_clicked()
{
    this->m_dynamicMode = DynamicMode::Foreground;
}


void MainWindow::on_dynamicUnderCursorPointButton_clicked()
{
    this->m_dynamicMode = DynamicMode::UnderCursorPoint;
}


void MainWindow::on_dynamicPUnderCursorPointButton_clicked()
{
    this->m_dynamicMode = DynamicMode::ParentUnderCursorPoint;
}


void MainWindow::on_dynamicDesktopButton_clicked()
{
    this->m_dynamicMode = DynamicMode::Desktop;
}

void MainWindow::on_dynamicFocusButton_clicked()
{
    this->m_dynamicMode = DynamicMode::Focus;
}
