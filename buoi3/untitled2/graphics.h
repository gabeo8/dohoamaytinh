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
signals:

public slots:

};

#endif // GRAPHICS_H
