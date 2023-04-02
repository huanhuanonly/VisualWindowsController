#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QFile>
#include <QFileDialog>
#include <QDebug>

void MainWindow::on_cursorColorBox_colorChange(const QColor& color)
{
    ui->cursorRColorLabel->setText(QString("R- %1").arg(QString::number(color.red()), 3, '0'));
    ui->cursorGColorLabel->setText(QString("G- %1").arg(QString::number(color.green()), 3, '0'));
    ui->cursorBColorLabel->setText(QString("B- %1").arg(QString::number(color.blue()), 3, '0'));
    
    ui->cursorRColorSlider->setValue(color.red());
    ui->cursorGColorSlider->setValue(color.green());
    ui->cursorBColorSlider->setValue(color.blue());
}

void MainWindow::on_cursorRColorSlider_valueChanged(int value)
{
    QColor color = ui->cursorColorBox->color();
    color.setRed(value);
    ui->cursorColorBox->setColor(color);
}
void MainWindow::on_cursorGColorSlider_valueChanged(int value)
{
    QColor color = ui->cursorColorBox->color();
    color.setGreen(value);
    ui->cursorColorBox->setColor(color);
}
void MainWindow::on_cursorBColorSlider_valueChanged(int value)
{
    QColor color = ui->cursorColorBox->color();
    color.setBlue(value);
    ui->cursorColorBox->setColor(color);
}

void MainWindow::on_imageDisplayWindowButton_clicked()
{
    this->m_windowImageDisplayMode = WindowImageDisplayMode::WindowImage;
}
void MainWindow::on_imageDisplayScreenButton_clicked()
{
    this->m_windowImageDisplayMode = WindowImageDisplayMode::ScreenImage;
}

void MainWindow::on_saveImageButton_clicked()
{
    QPixmap image = ui->windowImageLabel->pixmap(Qt::ReturnByValueConstant::ReturnByValue);
    
    QString path = QFileDialog::getSaveFileName(this, tr("Save mage"), "image.png", "Images (*.png *.jpg *.bmp);;Other Images (*.*)");
    
    image.save(path);
}
