#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QClipboard>

void MainWindow::on_titleEdit_textEdited(const QString& arg1)
{
    this->hwnd->setTitle(arg1);
}

void MainWindow::on_rectLeftSpinBox_valueChanged(int arg1)
{
    hwnd->setLeft(arg1);
    ui->rectLeftSlider->blockSignals(true);
    ui->rectLeftSlider->setValue(arg1);
    ui->rectLeftSlider->blockSignals(false);
}
void MainWindow::on_rectLeftSlider_valueChanged(int value)
{
    hwnd->setLeft(value);
    ui->rectLeftSpinBox->blockSignals(true);
    ui->rectLeftSpinBox->setValue(value);
    ui->rectLeftSpinBox->blockSignals(false);
}



void MainWindow::on_rectRightSpinBox_valueChanged(int arg1)
{
    hwnd->setRight(arg1);
    ui->rectRightSlider->blockSignals(true);
    ui->rectRightSlider->setValue(arg1);
    ui->rectRightSlider->blockSignals(false);
}
void MainWindow::on_rectRightSlider_valueChanged(int value)
{
    hwnd->setRight(value);
    ui->rectRightSpinBox->blockSignals(true);
    ui->rectRightSpinBox->setValue(value);
    ui->rectRightSpinBox->blockSignals(false);
}


void MainWindow::on_rectTopSpinBox_valueChanged(int arg1)
{
    hwnd->setTop(arg1);
    ui->rectTopSlider->blockSignals(true);
    ui->rectTopSlider->setValue(arg1);
    ui->rectTopSlider->blockSignals(false);
}
void MainWindow::on_rectTopSlider_valueChanged(int value)
{
    hwnd->setTop(value);
    ui->rectTopSpinBox->blockSignals(true);
    ui->rectTopSpinBox->setValue(value);
    ui->rectTopSpinBox->blockSignals(false);
}


void MainWindow::on_rectBottomSpinBox_valueChanged(int arg1)
{
    hwnd->setBottom(arg1);
    ui->rectBottomSlider->blockSignals(true);
    ui->rectBottomSlider->setValue(arg1);
    ui->rectBottomSlider->blockSignals(false);
}
void MainWindow::on_rectBottomSlider_valueChanged(int value)
{
    hwnd->setBottom(value);
    ui->rectBottomSpinBox->blockSignals(true);
    ui->rectBottomSpinBox->setValue(value);
    ui->rectBottomSpinBox->blockSignals(false);
}



void MainWindow::on_sizeWidthSpinBox_valueChanged(int arg1)
{
    hwnd->setWidth(arg1);
    
    ui->sizeWidthSlider->blockSignals(true);
    ui->sizeWidthSlider->setValue(arg1);
    ui->sizeWidthSlider->blockSignals(false);
}
void MainWindow::on_sizeWidthSlider_valueChanged(int value)
{
    hwnd->setWidth(value);
    
    ui->sizeWidthSpinBox->blockSignals(true);
    ui->sizeWidthSpinBox->setValue(value);
    ui->sizeWidthSpinBox->blockSignals(false);
}

void MainWindow::on_sizeHeightSpinBox_valueChanged(int arg1)
{
    hwnd->setHeight(arg1);
    
    ui->sizeHeightSlider->blockSignals(true);
    ui->sizeHeightSlider->setValue(arg1);
    ui->sizeHeightSlider->blockSignals(false);
    
}
void MainWindow::on_sizeHeightSlider_valueChanged(int value)
{
    hwnd->setHeight(value);
    ui->sizeHeightSpinBox->blockSignals(true);
    ui->sizeHeightSpinBox->setValue(value);
    ui->sizeHeightSpinBox->blockSignals(false);
}


void MainWindow::on_opacitySpinBox_valueChanged(int arg1)
{
    hwnd->setAlpha(static_cast<WindowController::type_alpha>(arg1));
    
    ui->opacitySlider->blockSignals(true);
    ui->opacitySlider->setValue(arg1);
    ui->opacitySlider->blockSignals(false);
}
void MainWindow::on_opacitySlider_valueChanged(int value)
{
    hwnd->setAlpha(static_cast<WindowController::type_alpha>(value));
    
    ui->opacitySpinBox->blockSignals(true);
    ui->opacitySpinBox->setValue(value);
    ui->opacitySpinBox->blockSignals(false);
}

void MainWindow::on_eraseGroupBox_clicked(bool checked)
{
    if (checked)
    {
        hwnd->setEraseColor(
                    QColor(
                        ui->eraseRedSpinBox->value(),
                        ui->eraseGreenSpinBox->value(),
                        ui->eraseBlueSpinBox->value())
                    );
    }
    else hwnd->setEraseColor(false);
}
void MainWindow::on_eraseRedSpinBox_valueChanged(int arg1)
{
    hwnd->setEraseColor(
                QColor(
                    arg1,
                    ui->eraseGreenSpinBox->value(),
                    ui->eraseBlueSpinBox->value())
                );
}
void MainWindow::on_eraseGreenSpinBox_valueChanged(int arg1)
{
    hwnd->setEraseColor(
                QColor(
                    ui->eraseRedSpinBox->value(),
                    arg1,
                    ui->eraseBlueSpinBox->value())
                );
}
void MainWindow::on_eraseBlueSpinBox_valueChanged(int arg1)
{
    hwnd->setEraseColor(
                QColor(
                    ui->eraseRedSpinBox->value(),
                    ui->eraseGreenSpinBox->value(),
                    arg1)
                );
}



void MainWindow::on_activeCheckBox_clicked(bool checked)
{
    if (checked) this->hwnd->setActive();
}
void MainWindow::on_showCheckBox_clicked(bool checked)
{
    if (checked) this->hwnd->show();
    else this->hwnd->hide();
}
void MainWindow::on_topmostCheckBox_clicked(bool checked)
{
    if (checked) this->hwnd->setTopmost(true);
    else this->hwnd->setTopmost(false);
}

void MainWindow::on_closeWindowButton_clicked()
{
    this->hwnd->close();
}
void MainWindow::on_destroyWindowButton_clicked()
{
    this->hwnd->destroy();
}
void MainWindow::on_killProcessButton_clicked()
{
    this->hwnd->killProcess();
}

void MainWindow::on_hwndRadixComboBox_currentTextChanged(const QString& arg1)
{
    if (arg1 == "Hex") ui->hwndLcdNumber->setHexMode();
    else if (arg1 == "Dec") ui->hwndLcdNumber->setDecMode();
    else if (arg1 == "Oct") ui->hwndLcdNumber->setOctMode();
    else if (arg1 == "Bin") ui->hwndLcdNumber->setBinMode();
}
void MainWindow::on_pidRadixComboBox_currentTextChanged(const QString& arg1)
{
    if (arg1 == "Hex") ui->pidLcdNumber->setHexMode();
    else if (arg1 == "Dec") ui->pidLcdNumber->setDecMode();
    else if (arg1 == "Oct") ui->pidLcdNumber->setOctMode();
    else if (arg1 == "Bin") ui->pidLcdNumber->setBinMode();
}

void MainWindow::on_titleCopyButton_clicked()
{
    QApplication::clipboard()->setText(ui->titleEdit->text());
}
void MainWindow::on_classCopyButton_clicked()
{
    QApplication::clipboard()->setText(ui->classEdit->text());
}
void MainWindow::on_pathCopyButton_clicked()
{
    QApplication::clipboard()->setText(ui->pathEdit->text());
}
