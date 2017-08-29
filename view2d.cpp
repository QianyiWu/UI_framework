#include "view2d.h"
#include <QPainter>
#include <QImage>
#include <QString>
#include <QFileDialog>

view2d::view2d(QWidget *parent) : QWidget(parent)
{
    img_car = new QImage();
}


void view2d::paintEvent(QPaintEvent *paintevent)
{
    QPainter painter;
    painter.begin(this);
    QRect rect = QRect(0, 0, img_car->width(), img_car->height());
    painter.drawImage(rect, *img_car);
}


void view2d::open_image()
{
    //open file
    img_car_filename=QFileDialog::getOpenFileName(this,tr("Read Image")," ",tr("Images(*.bmp *.png *.jpg)"));

    if(!img_car_filename.isEmpty())
    {
        img_car->load(img_car_filename);
    }
    update();
}

