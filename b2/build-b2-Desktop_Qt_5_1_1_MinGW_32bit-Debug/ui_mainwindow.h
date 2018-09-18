/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphics.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    graphics *GraphicsPresenter;
    QGroupBox *GraphicsControl;
    QVBoxLayout *verticalLayout;
    QPushButton *thaicuc;
    QPushButton *ngugiac;
    QPushButton *bonghoa;
    QPushButton *ngansao;
    QPushButton *rosette11;
    QPushButton *rosette20;
    QPushButton *thaicuctomau;
    QPushButton *ellipsexoay;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(752, 365);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        GraphicsPresenter = new graphics(centralWidget);
        GraphicsPresenter->setObjectName(QStringLiteral("GraphicsPresenter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicsPresenter->sizePolicy().hasHeightForWidth());
        GraphicsPresenter->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(GraphicsPresenter);

        GraphicsControl = new QGroupBox(centralWidget);
        GraphicsControl->setObjectName(QStringLiteral("GraphicsControl"));
        verticalLayout = new QVBoxLayout(GraphicsControl);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        thaicuc = new QPushButton(GraphicsControl);
        thaicuc->setObjectName(QStringLiteral("thaicuc"));

        verticalLayout->addWidget(thaicuc);

        ngugiac = new QPushButton(GraphicsControl);
        ngugiac->setObjectName(QStringLiteral("ngugiac"));

        verticalLayout->addWidget(ngugiac);

        bonghoa = new QPushButton(GraphicsControl);
        bonghoa->setObjectName(QStringLiteral("bonghoa"));

        verticalLayout->addWidget(bonghoa);

        ngansao = new QPushButton(GraphicsControl);
        ngansao->setObjectName(QStringLiteral("ngansao"));

        verticalLayout->addWidget(ngansao);

        rosette11 = new QPushButton(GraphicsControl);
        rosette11->setObjectName(QStringLiteral("rosette11"));

        verticalLayout->addWidget(rosette11);

        rosette20 = new QPushButton(GraphicsControl);
        rosette20->setObjectName(QStringLiteral("rosette20"));

        verticalLayout->addWidget(rosette20);

        thaicuctomau = new QPushButton(GraphicsControl);
        thaicuctomau->setObjectName(QStringLiteral("thaicuctomau"));

        verticalLayout->addWidget(thaicuctomau);

        ellipsexoay = new QPushButton(GraphicsControl);
        ellipsexoay->setObjectName(QStringLiteral("ellipsexoay"));

        verticalLayout->addWidget(ellipsexoay);


        horizontalLayout->addWidget(GraphicsControl);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        GraphicsControl->setTitle(QApplication::translate("MainWindow", "GroupBox", 0));
        thaicuc->setText(QApplication::translate("MainWindow", "Th\303\241i c\341\273\261c", 0));
        ngugiac->setText(QApplication::translate("MainWindow", "Ng\305\251 gi\303\241c", 0));
        bonghoa->setText(QApplication::translate("MainWindow", "B\303\264ng hoa", 0));
        ngansao->setText(QApplication::translate("MainWindow", "Ng\303\240n sao", 0));
        rosette11->setText(QApplication::translate("MainWindow", "rosette11", 0));
        rosette20->setText(QApplication::translate("MainWindow", "rosette20", 0));
        thaicuctomau->setText(QApplication::translate("MainWindow", "thaicuctomau", 0));
        ellipsexoay->setText(QApplication::translate("MainWindow", "ellipsexoay", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
