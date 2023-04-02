#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_staticFindBoxEdit_textEdited(const QString& arg1)
{
    QTreeWidgetItemIterator it(ui->staticWindowsTreeWidget);
    
    while (*it) 
    {    
        if((*it)->text(1).contains(arg1, Qt::CaseInsensitive) || (*it)->text(2).contains(arg1, Qt::CaseInsensitive))
        {
            (*it)->setHidden(false);
            QTreeWidgetItem *item = *it;
            
            while (item->parent())
            {
                item->parent()->setHidden(false);
                item = item->parent();
            }
        }
        else
        {
            (*it)->setHidden(true);
        }
        ++it;
    }
}

void MainWindow::on_staticWindowsTreeWidget_itemSelectionChanged()
{
    QList<QTreeWidgetItem*> i = ui->staticWindowsTreeWidget->selectedItems();
    
    if (i.isEmpty() == false)
    {
        ui->currentHwndEdit->setValue(i.at(0)->text(0).toULongLong());
    }
}
