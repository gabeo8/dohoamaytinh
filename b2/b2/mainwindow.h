#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ngansao_clicked();

    void on_bonghoa_clicked();

    void on_ngugiac_clicked();

    void on_thaicuc_clicked();

    void on_rosette11_clicked();

    void on_rosette20_clicked();

    void on_thaicuctomau_clicked();

    void on_ellipsexoay_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
