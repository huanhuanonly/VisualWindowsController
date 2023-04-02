#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_copyProcessPathButton_clicked()
{
    QApplication::clipboard()->setText(hwnd->windowInfoStatic().fromPath);
}


void MainWindow::on_openExplorerButton_clicked()
{
    QProcess::startDetached(QString(R"(explorer "/select,%1")").arg(hwnd->windowInfoStatic().fromPath));
}

void MainWindow::on_processIdLineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    
    if (this->m_currentTabPage != CurrentTabPage::Process) return;
    
    QMap<HWND, QVector<HWND>> tree = process->windowTreeFromThisProcess();
    
    
    QTreeWidgetItemIterator it(ui->processWindowTreeWidget);
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
        ui->processWindowTreeWidget->takeTopLevelItem(ui->processWindowTreeWidget->indexOfTopLevelItem(*it));
        delete *it;
        ++it;
    }
    
    for (auto i = tree.begin(); i != tree.end(); ++i)
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
        ui->processWindowTreeWidget->addTopLevelItem(node);
    }
    
    ui->processWindowTreeWidget->expandAll();
}

