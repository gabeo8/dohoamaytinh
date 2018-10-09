#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    QPointF BD;
    double huong= 0;
    QPointF dichuyen(QPointF p, double kc, int huong);
    int mode = 0;
    void thutucmau(QPainter &painter);

    void luoicau(QPainter &painter);
    void hcn(QPainter &painter);

    void drawbai1(QPainter &painter, double angle, int incr);
    void bai1a(QPainter &painter);
    void bai1b(QPainter &painter);
    void bai1c(QPainter &painter);
    void bai1d(QPainter &painter);
    void bai1e(QPainter &painter);

    void drawbai2(QPainter &painter, int n);
    void bai2a(QPainter &painter);
signals:

public slots:

};

#endif // GRAPHICS_H
