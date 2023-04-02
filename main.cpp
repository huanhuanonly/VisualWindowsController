#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "VisualWindowsControl_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    
    try
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    catch (...)
    {
        QMessageBox::critical(nullptr,
                            QMessageBox::tr("Unexpected crash!"),
                            QMessageBox::tr(
R"(An unexpected error has occurred in this system, suspected of a memory leak.
Click the "Close" button to exit.)"),
                            QMessageBox::Close,
                            QMessageBox::Close);
    }
}
