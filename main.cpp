#include "QtWidgetsApplication2.h"
#include <QtWidgets/QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{

    QCoreApplication::addLibraryPath("E:/AI PRACTICAL/Qt/Qt5.12.12/5.12.12/msvc2017/plugins");
   /* QApplication app(argc, argv);*/
    QApplication a(argc, argv);
    QtWidgetsApplication2 w;
    qDebug() << "Starting application...";
    w.show();
    return a.exec();
    
}
