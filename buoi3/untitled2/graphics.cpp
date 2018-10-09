#include "graphics.h"
#include <QPainter>
#include <math.h>

graphics::graphics(QWidget *parent) :
    QWidget(parent)
{
}
void graphics::paintEvent(QPaintEvent *) {
    QPainter painters(this);
    painters.setPen(Qt::blue);
    painters.setRenderHint(QPainter::Antialiasing);

    if (mode == 1) thutucmau(painters);
}

QPointF graphics::dichuyen(QPointF p, double kc, int huong) {
    QPointF pnew;
    pnew.setX(p.x() + kc*cos(3.14*huong/180));
    pnew.setY(p.y() + kc*sin(3.14*huong/180));
    return pnew;
}

void graphics::thutucmau(QPainter &painter) {
    painter.drawLine(0,0,200,0);

    // a la diem bat dau
    QPointF a(100,100), b, c, d, e, f;

    b.setX(dichuyen(a, 100,0).x());
    b.setY(dichuyen(a, 100, 0).y());

    painter.setPen(Qt::blue);
    painter.drawLine(a.x(), a.y(), b.x(), b.y());
}
