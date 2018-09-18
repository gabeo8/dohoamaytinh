#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>

class graphics : public QWidget
{
    Q_OBJECT
public:
    explicit graphics(QWidget *parent = 0);

    void paintEvent(QPaintEvent*);
    int mode = 0;
    int h = height();
    int w = width();
    int random(int n);

    // cac phep bien doi
    QPoint tinhtien(QPoint p, int tx, int ty);
    QPoint quay(QPoint p, QPoint c, int delta);
    QPoint tile(QPoint p, QPoint c, int sx, int sy);
    QPoint doixungx(QPoint p);
    QPoint doixungy(QPoint p);

    void ngansao(QPainter &painter); // mode = 1
    void bonghoa(QPainter &painter); // mode = 2
    void ngugiac(QPainter &painter); // mode = 3
    void thaicuc(QPainter &painter); // mode = 4

    void rosette11(QPainter &painter); // mode = 5
    void rosette20(QPainter &painter); // mode = 6

    void thaicuctomau(QPainter &painter); // mode = 7
    void ellipsexoay(QPainter &painter); // mode = 8

    void ngoinha(QPoint dinh, int w, int h); // mode = 9


signals:

public slots:

};

#endif // GRAPHICS_H
