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

    if (mode == 1) bai1a(painters);
    if (mode == 2) bai1b(painters);
    if (mode == 3) bai1c(painters);
    if (mode == 4) bai1d(painters);
    if (mode == 5) bai1e(painters);
    if (mode == 6) bai2a(painters);
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

void graphics::luoicau(QPainter &painter) {
    QPointF P, Q;
    P.setX(100);
    P.setY(300);
    int huong = 0;
    double kc = 50;
    Q = dichuyen(P, 3*kc, huong);
    painter.drawLine(P, Q);

    P = Q;
    huong = huong + -90;
    Q = dichuyen(P, kc, huong);
    painter.drawLine(P, Q);

    P = Q;
    huong = huong + -90;
    Q = dichuyen(P, kc, huong);
    painter.drawLine(P, Q);
}

void graphics::hcn(QPainter &painter) {

    // hcn 0
    painter.setPen(Qt::blue);
    QPointF P;
    P.setX(100);
    P.setY(200);

    double huong = 0;
    int kc = 50;

    QPointF BD = P;

    for (int i = 0; i < 4; i++) {
        BD = P;
        P = dichuyen(P, 3*kc, huong);
        painter.drawLine(BD, P);
        huong = huong + -90;

        BD = P;
        P = dichuyen(P, kc, huong);
        painter.drawLine(BD, P);
        huong = huong + -90;

        BD = P;
        P = dichuyen(P, kc, huong);
        painter.drawLine(BD, P);
        huong = huong + -90;
   }

    // hcn 45
    painter.setPen(Qt::red);
    QPointF P2;
    P2.setX(400);
    P2.setY(100);

    double huong2 = 45;
    int kc2 = 50;

    QPointF BD2 = P2;

    for (int i = 0; i < 4; i++) {
        BD2 = P2;
        P2 = dichuyen(P2, 3*kc2, huong2);
        painter.drawLine(BD2, P2);
        huong2 = huong2 + -90;

        BD2 = P2;
        P2 = dichuyen(P2, kc2, huong2);
        painter.drawLine(BD2, P2);
        huong2 = huong2 + -90;

        BD2 = P2;
        P2 = dichuyen(P2, kc2, huong2);
        painter.drawLine(BD2, P2);
        huong2 = huong2 + -90;
   }


    // 4 hcn con
    QPointF K(600, 320);
    QPointF BD3;
    int h = 0;
    int kcc = 50;

    painter.setPen(Qt::green);
    for (int i = 1; i <= 4; i++) {
        BD3 = K;
        K = dichuyen(K, i*kcc, h);
        painter.drawLine(BD3, K);
        h = h + -90;

        BD3 = K;
        K = dichuyen(K, i*kcc, h);
        painter.drawLine(BD3, K);
        h = h + -90;

        BD3 = K;
        K = dichuyen(K, i*kcc, h);
        painter.drawLine(BD3, K);
        h = h + -90;

        BD3 = K;
        K = dichuyen(K, i*kcc, h);
        painter.drawLine(BD3, K);
        h = h + -90;
    }
}

void graphics::drawbai1(QPainter &painter, double angleIn, int incr) {
    painter.setPen(Qt::blue);
    // init
    double angel = 0;
    // B1: Tạo một tâm điểm ở giữa màn hình.
    QPointF P(width()/2, height()/2);

    //B6: Lặp đi lặp lại bước từ bước 2 đến bước 5 một số lần nhất định (khoảng 100 – 150 lần).
    QPointF BD;
    int dist = 10;
    for (int i = 0; i<100; i++) {
        //B2: Gán BĐ = điểm đó.
        BD = P;
        //B3: Cho điểm đó di chuyển một đoạn dist.
        P = dichuyen(P, dist, angel);
        painter.drawLine(BD, P);
        //B4: Cộng vào huong một góc angle.
        angel += angleIn;
        //B5: Tăng dist lên một đoạn incr.
        dist += incr;
    }
}

void graphics::bai1a(QPainter &painter) {
    painter.setPen(Qt::blue);
    drawbai1(painter, 89.5, 4);
}
void graphics::bai1b(QPainter &painter) {
    painter.setPen(Qt::blue);
    drawbai1(painter, -89.5, 4);
}
void graphics::bai1c(QPainter &painter) {
    painter.setPen(Qt::blue);
    drawbai1(painter, -60, 1);
}
void graphics::bai1d(QPainter &painter) {
    painter.setPen(Qt::blue);
    drawbai1(painter, 144, 4);
}
void graphics::bai1e(QPainter &painter) {
    painter.setPen(Qt::blue);
    drawbai1(painter, -170, 4);
}


void graphics::drawbai2(QPainter &painter, int n) {
    painter.setPen(Qt::blue);
    // init
    int kc = 50;
    double angel = 0;
    QPointF P(width()/2, height()/2);
    QPointF BD;
    QPointF E;
    for (int i = 1; i <= n; i++) {
        BD = P;
        P = dichuyen(P, kc, angel);
        painter.drawLine(BD, P);
        angel += - 360/n;

        E = P;
        for (int j = n; j > 0; j--) {
            E = dichuyen(E, kc, angel);
            painter.drawLine(BD, E);
            angel += - 360/n;
        }
    }


}
void graphics::bai2a(QPainter &painter) {
    drawbai2(painter, 20);
}
