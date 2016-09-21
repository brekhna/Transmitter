#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dial_view(*RPM_Dial,RPM_Needle,0.0,10.0,"RPM");
    dial_view(*Speed_Dial,Speed_Needle,0,10,"Speed");
    dial_view(*Load_Dial,Load_Needle,0,10,"Load");
    dial_view(*Latency_Dial,Latency_Needle,0.0,10.0,"Latency");
    dial_view(*Temperature_Dial,Temperature_Needle,0.0,10.0,"Temperature");
  //  map();

    ui->horizontalLayout->addWidget(RPM_Dial);
    ui->horizontalLayout->addWidget(Speed_Dial);
    ui->horizontalLayout_2->addWidget(Load_Dial);
    ui->horizontalLayout_2->addWidget(Temperature_Dial);
    ui->horizontalLayout_4->addWidget(Latency_Dial);
   // ui->horizontalLayout_3->addWidget(view); //adding map to the main widge
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dial_view(QcGaugeWidget &Dial,QcNeedleItem *Needle,float Min,float Max,QString label)
{
   // Dial = new QcGaugeWidget;
    Dial.addBackground(99);
   // QSize size;
   // size.setHeight(300);
   // size.setWidth(300);
    //Dial.setMinimumSize(size);

    // Two layer dial borders
    QcBackgroundItem *bkg1 = Dial.addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = Dial.addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::gray);
    bkg2->addColor(1.0,Qt::darkGray);

    // Drawing two arcs inside the dial
    QcArcItem *arc = Dial.addArc(55);
    arc->setValueRange(Min, Max);
    Dial.addArc(55);

    // To insert markers on the arc
    Dial.addDegrees(62)->setValueRange(0,50);
    QcColorBand *clrBand = Dial.addColorBand(50);
    clrBand->setValueRange(0,100);

    // To insert labels 1 - 5
    Dial.addValues(72)->setValueRange(Min,Max);
    Dial.addValues(72)->setStep(1);

    QcLabelItem *lab = Dial.addLabel(50);
    lab->setText(label);
    lab->setColor(Qt::blue);

    // To add the needle to the dial
    Needle = Dial.addNeedle(60);
    Needle->setColor(Qt::red);
    Needle->setValueRange(Min,Max);
    Dial.addNeedle(60);
    Dial.addBackground(7);
    Dial.addGlass(88);

}


void MainWindow::map()
{
   // QWebEngineProfile *page = new QWebEngineProfile();
   // QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    //QNetworkDiskCache *diskCache = new QNetworkDiskCache(this);

  // diskCache->setCacheDirectory(QCoreApplication::applicationDirPath() + "/cache");
  //  manager->setCache(diskCache);

  //  QWebEngineDownloadItem *cached_page;
   // view->load(QUrl("https://www.google.de/maps?source=tldso"));

  //  view->show();

}

