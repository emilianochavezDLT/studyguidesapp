#include "mainwindow.h"
#include "database_class.h"
using namespace std;
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "StudyGuidesApp_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow w;
    w.setWindowTitle("Study Guide App");
    w.show();

    Database db;
    if(db.connect()){
        cout << "DB connected" << endl;
        db.createTables();
    }


    return a.exec();
}
