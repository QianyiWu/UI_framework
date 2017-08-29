#ifndef VIEW2D_H
#define VIEW2D_H

#include <QWidget>


/*
 *    2d image show class
 *
 */

class view2d : public QWidget
{
    Q_OBJECT
public:
    explicit view2d(QWidget *parent = 0);

signals:


public slots:
    void open_image();

protected:
    void paintEvent( QPaintEvent *paintevent);


    //show image, caricature image
    QImage *img_car;
    QString img_car_filename;


};

#endif // VIEW2D_H
