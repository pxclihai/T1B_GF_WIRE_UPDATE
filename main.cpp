#include "frmnettool.h"
#include <QApplication>
#include "myhelper.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/pic/style.qss");
    if( qss.open(QFile::ReadOnly))
     {
               qDebug("open success");
               QString style = QLatin1String(qss.readAll());
               a.setStyleSheet(style);
               qss.close();

           }
           else
           {
              qDebug("Open failed");
     }
    a.setWindowIcon(QIcon(":/pic/tetraelc.ico"));
    myHelper::setCode();
    frmNetTool w;    
    w.show();

    return a.exec();
}
