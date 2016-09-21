#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qwt_dial.h>
#include <qwt_dial_needle.h>
#include "qcgaugewidget.h"
#include <QLayout>
//#include <QtWebEngineWidgets/QtWebEngineWidgets>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void map();
    void dial_view(QcGaugeWidget &Dial,QcNeedleItem *Needle,float Min,float Max,QString label);


private:
    Ui::MainWindow *ui;
    QcGaugeWidget *RPM_Dial= new QcGaugeWidget();
    QcGaugeWidget *Latency_Dial= new QcGaugeWidget();
    QcGaugeWidget *Speed_Dial = new QcGaugeWidget();
    QcGaugeWidget *Temperature_Dial = new QcGaugeWidget();
    QcGaugeWidget *Load_Dial = new QcGaugeWidget();
    QcNeedleItem *RPM_Needle = new QcNeedleItem();
    QcNeedleItem *Latency_Needle = new QcNeedleItem();
    QcNeedleItem *Temperature_Needle = new QcNeedleItem();
    QcNeedleItem *Speed_Needle= new QcNeedleItem();
    QcNeedleItem *Load_Needle= new QcNeedleItem();
    //for map declaration
   // QWebEngineView *view = new QWebEngineView();


    //QVBoxLayout *Transmitter_Layout;
};

#endif // MAINWINDOW_H
