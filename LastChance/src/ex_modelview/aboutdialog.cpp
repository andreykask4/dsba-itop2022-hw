#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("About");
}

void AboutDialog::paintEvent(QPaintEvent *event)
{
    QPainter myline(this);
    QPen linePen(Qt::black);
    linePen.setWidth(3);

    myline.setPen(linePen);
    myline.drawLine(100,50, 70,100);
    myline.drawLine(70,100, 25,100);
    myline.drawLine(25,100, 65,140);
    myline.drawLine(65,140, 40,180);

    myline.drawLine(100,50, 130,100);
    myline.drawLine(130,100, 175,100);
    myline.drawLine(175,100, 135,140);
    myline.drawLine(135,140, 160,180);

    myline.drawLine(40,180, 160,180);
    myline.drawLine(70,100, 130,100);
    myline.drawLine(65,140, 135,140);

}

AboutDialog::~AboutDialog()
{
    delete ui;
}

