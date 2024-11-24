#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
#include "chef.h"

int main(int argc, char *argv[])
{

    //std::cout << "tärkee";

    Chef chef("Gordon ramsay ");

    /*
    QCoreApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "untitled1_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    return a.exec();
    */

    return 0;
}
