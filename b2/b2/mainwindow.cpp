#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ngansao_clicked()
{
    ui -> GraphicsPresenter -> mode = 1;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_bonghoa_clicked()
{
    ui -> GraphicsPresenter -> mode = 2;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_ngugiac_clicked()
{
    ui -> GraphicsPresenter -> mode = 3;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_thaicuc_clicked()
{
    ui -> GraphicsPresenter -> mode = 4;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_rosette11_clicked()
{
    ui -> GraphicsPresenter -> mode = 5;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_rosette20_clicked()
{
    ui -> GraphicsPresenter -> mode = 6;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_thaicuctomau_clicked()
{
    ui -> GraphicsPresenter -> mode = 7;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}

void MainWindow::on_ellipsexoay_clicked()
{
    ui -> GraphicsPresenter -> mode = 8;
    ui -> GraphicsPresenter -> repaint();
    ui -> GraphicsPresenter-> mode = 0;
}
