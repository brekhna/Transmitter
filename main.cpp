#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
  // QSize size;
   // size.scale(10000, 10000, Qt::KeepAspectRatio); //the current size is scaled to a rectangle as large as possible inside (width, height), preserving the aspect ratio.
  //  w.resize(size);
    w.show();

    return a.exec();
}
