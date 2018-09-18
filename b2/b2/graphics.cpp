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

    if (mode == 1) ngansao(painters);
    if (mode == 2) bonghoa(painters);
    if (mode == 3) ngugiac(painters);
    if (mode == 4) thaicuc(painters);
    if (mode == 5) rosette11(painters);
    if (mode == 6) rosette20(painters);
    if (mode == 7) thaicuctomau(painters);
    if (mode == 8) ellipsexoay(painters);
}

int graphics::random(int n) {
    return rand() % n;
}

QPoint graphics::tinhtien(QPoint p, int tx,int ty) {
    QPoint pnew;
    pnew.setX(p.x() + tx);
    pnew.setY(p.y() + ty);
    return pnew;
}

QPoint graphics::quay(QPoint p, QPoint c, int delta) {
    QPoint pnew;
    double goc = delta * 3.14/180;
    pnew.setX(c.x() + (p.x() - c.x())*cos(goc) - (p.y() - c.y()) * sin(goc));
    pnew.setY(c.y() + (p.x() - c.x())*sin(goc) + (p.y() - c.y()) * cos(goc));
    return pnew;
}

QPoint graphics::tile(QPoint p, QPoint c, int sx, int sy) {
    QPoint pnew;
    pnew.setX(p.x() * sx + c.x() * (1-sx));
    pnew.setY(p.y() * sy + c.y() * (1-sy));
    return pnew;
}
QPoint graphics::doixungx(QPoint p) {
    QPoint pnew;
    pnew.setX(p.x());
    pnew.setY(-p.y());
    return pnew;
}

QPoint graphics::doixungy(QPoint p) {
    QPoint pnew;
    pnew.setX(-p.x());
    pnew.setY(p.y());
    return pnew;
}

void graphics::ngansao(QPainter &painter) {
    for (int i= 1;i <= 1000; i++) {
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor(random(256),random(256),random(256)));
        painter.drawEllipse(random(1000), random(1000), 3, 3);
    }
}

void graphics::bonghoa(QPainter &painter) {
    painter.setBrush(QColor(random(255),random(255),random(255)));
    int x = random(width());
    int y = random(height());

    int d = 100;
    int r = d/3;

    QPoint c(x,y);
    QPoint p(x, y-r);
    for (int i= 1; i <= 5; i++) {
        QPoint pnew;
        pnew = quay(p, c, i*72);
        painter.drawEllipse(pnew, r, r);
    }
}

void graphics::ngugiac(QPainter &painter) {

    // ve ngu giac
    painter.setPen(Qt::red);
    QPolygon polygon;

    int x = width() / 2;
    int y = height() / 2;

    QPoint p(x, y-100);
    QPoint c(x, y);

    polygon << QPoint(p.x(), p.y());
    for (int i=1; i<5; i++) {
        QPoint pnew = quay(p, c, i*72);
        polygon << QPoint(pnew.x(), pnew.y());
    }
    painter.drawPolygon(polygon);

    // ve ngoi sao trong ngu giac
    painter.setPen(Qt::blue);
    painter.drawLine(polygon.value(0), polygon.value(3));
    painter.drawLine(polygon.value(0), polygon.value(2));
    painter.drawLine(polygon.value(1), polygon.value(3));
    painter.drawLine(polygon.value(1), polygon.value(4));
    painter.drawLine(polygon.value(2), polygon.value(4));
}

void graphics::thaicuc(QPainter &painter) {
    painter.setPen(Qt::red);

    int x = width() / 2;
    int y = height() / 2;

    int r = 200; //bk dt lon
    int r1 = r/2; // bk dt nho

    // toa do truc x, y dt ben trai
    int x1 = x - r;
    int y1 = y - r1;

    // toa do truc x, y dt ben phai
    int xr = x;
    int yr = y - 1;

    QPoint p(x,y);

    painter.drawEllipse(p, r, r);
    painter.drawArc(x1, y1, r, r, 0, -(180*16));

    xr = doixungx(QPoint(x1, y1)).x();
    yr = doixungy(QPoint(x1, y1)).y();
    xr = tinhtien(QPoint(xr, yr), r, 0).x();
    painter.drawArc(xr, yr, r, r, 0, (180*16));

    // tam dt trai
    QPoint pl(x-r/2, y);
    // tam dt phai
    QPoint pr(x+r/2, y);

    painter.drawEllipse(pl, r/10, r/10);
    painter.drawEllipse(pr, r/10, r/10);

}


// Rosette 11
void graphics::rosette11(QPainter &painter) {
    // ve ngu giac
    painter.setPen(Qt::red);
    QPolygon polygon;

    int x = width() / 2;
    int y = height() / 2;

    QPoint p(x, y-100);
    QPoint c(x, y);

    polygon << QPoint(p.x(), p.y());
    for (int i=1; i<11; i++) {
        QPoint pnew = quay(p, c, i*32.72);
        polygon << QPoint(pnew.x(), pnew.y());
    }
    painter.drawPolygon(polygon);

    for (int i = 0; i<11; i++) {
        for (int j = 0; j <i; j++) {
            painter.drawLine(polygon.value(i), polygon.value(j));
        }
    }
}

void graphics::rosette20(QPainter &painter) {
    // ve ngu giac
    painter.setPen(Qt::red);
    QPolygon polygon;

    int x = width() / 2;
    int y = height() / 2;

    QPoint p(x, y-100);
    QPoint c(x, y);

    polygon << QPoint(p.x(), p.y());
    int dinh = 20;
    for (int i=1; i<dinh; i++) {
        QPoint pnew = quay(p, c, i*18);
        polygon << QPoint(pnew.x(), pnew.y());
    }
    painter.drawPolygon(polygon);

    for (int i = 0; i<dinh; i++) {
        for (int j = 0; j <i; j++) {
            painter.drawLine(polygon.value(i), polygon.value(j));
        }
    }
}


void graphics::thaicuctomau(QPainter &painter) {
    painter.setPen(Qt::NoPen);

    int x = 400;
    int y = 400;
    int x1 = x /2;
    int y1 = y /2;
    int r = x1; //bk
    //painter.drawEllipse(p, r, r);
    // ve cung dt lon
    painter.setPen(Qt::black);
    painter.setBrush(Qt::black);
    painter.drawChord(0, 0, x, y, 0, (180*16));

    painter.setBrush(Qt::white);
    painter.drawChord(0, 0, x, y, 0, -(180*16));

    // ve 2 duong nho
    QPoint pl(x1-r/2, y1);
    QPoint pr(x1+r/2, y1);

    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawEllipse(pl, r/2, r/2);

    painter.setBrush(Qt::white);
    painter.drawEllipse(pr, r/2, r/2);

    // ve 2 duong tron nho
    painter.setBrush(Qt::white);
    painter.drawEllipse(pl, r/10, r/10);

    painter.setBrush(Qt::black);
    painter.drawEllipse(pr, r/10, r/10);
}

void graphics::ellipsexoay(QPainter &painter) {
    painter.setPen(Qt::blue);

    int x = width() / 2;
    int y = height() / 2;


    painter.drawEllipse(x, y, 200, 50);
    painter.translate(x,y);
    painter.rotate(60);
    painter.drawEllipse(x, y, 200, 50);
}
