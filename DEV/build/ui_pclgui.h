/********************************************************************************
** Form generated from reading UI file 'pclgui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCLGUI_H
#define UI_PCLGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PCLGUI
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVTKWidget *qvtkWidget;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_loadPCD;
    QPushButton *pushButton_savePCD;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_R;
    QSlider *horizontalSlider_R;
    QLCDNumber *lcdNumber_R;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_G;
    QSlider *horizontalSlider_G;
    QLCDNumber *lcdNumber_G;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_B;
    QSlider *horizontalSlider_B;
    QLCDNumber *lcdNumber_B;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_p;
    QSlider *horizontalSlider_p;
    QLCDNumber *lcdNumber_p;
    QPushButton *pushButton_random;

    void setupUi(QMainWindow *PCLGUI)
    {
        if (PCLGUI->objectName().isEmpty())
            PCLGUI->setObjectName(QStringLiteral("PCLGUI"));
        PCLGUI->resize(1564, 913);
        PCLGUI->setMinimumSize(QSize(0, 0));
        PCLGUI->setMaximumSize(QSize(5000, 5000));
        centralwidget = new QWidget(PCLGUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setMinimumSize(QSize(640, 480));

        verticalLayout_5->addWidget(qvtkWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_loadPCD = new QPushButton(centralwidget);
        pushButton_loadPCD->setObjectName(QStringLiteral("pushButton_loadPCD"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_loadPCD->sizePolicy().hasHeightForWidth());
        pushButton_loadPCD->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(pushButton_loadPCD);

        pushButton_savePCD = new QPushButton(centralwidget);
        pushButton_savePCD->setObjectName(QStringLiteral("pushButton_savePCD"));
        sizePolicy.setHeightForWidth(pushButton_savePCD->sizePolicy().hasHeightForWidth());
        pushButton_savePCD->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(pushButton_savePCD);


        verticalLayout_5->addLayout(horizontalLayout_10);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_R = new QLabel(centralwidget);
        label_R->setObjectName(QStringLiteral("label_R"));

        horizontalLayout_8->addWidget(label_R);

        horizontalSlider_R = new QSlider(centralwidget);
        horizontalSlider_R->setObjectName(QStringLiteral("horizontalSlider_R"));
        horizontalSlider_R->setMinimum(0);
        horizontalSlider_R->setMaximum(255);
        horizontalSlider_R->setValue(128);
        horizontalSlider_R->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_R);

        lcdNumber_R = new QLCDNumber(centralwidget);
        lcdNumber_R->setObjectName(QStringLiteral("lcdNumber_R"));

        horizontalLayout_8->addWidget(lcdNumber_R);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_G = new QLabel(centralwidget);
        label_G->setObjectName(QStringLiteral("label_G"));

        horizontalLayout_5->addWidget(label_G);

        horizontalSlider_G = new QSlider(centralwidget);
        horizontalSlider_G->setObjectName(QStringLiteral("horizontalSlider_G"));
        horizontalSlider_G->setMinimum(0);
        horizontalSlider_G->setMaximum(255);
        horizontalSlider_G->setValue(128);
        horizontalSlider_G->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_G);

        lcdNumber_G = new QLCDNumber(centralwidget);
        lcdNumber_G->setObjectName(QStringLiteral("lcdNumber_G"));

        horizontalLayout_5->addWidget(lcdNumber_G);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_B = new QLabel(centralwidget);
        label_B->setObjectName(QStringLiteral("label_B"));

        horizontalLayout_7->addWidget(label_B);

        horizontalSlider_B = new QSlider(centralwidget);
        horizontalSlider_B->setObjectName(QStringLiteral("horizontalSlider_B"));
        horizontalSlider_B->setMinimum(0);
        horizontalSlider_B->setMaximum(255);
        horizontalSlider_B->setValue(128);
        horizontalSlider_B->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_B);

        lcdNumber_B = new QLCDNumber(centralwidget);
        lcdNumber_B->setObjectName(QStringLiteral("lcdNumber_B"));

        horizontalLayout_7->addWidget(lcdNumber_B);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_p = new QLabel(centralwidget);
        label_p->setObjectName(QStringLiteral("label_p"));

        horizontalLayout_9->addWidget(label_p);

        horizontalSlider_p = new QSlider(centralwidget);
        horizontalSlider_p->setObjectName(QStringLiteral("horizontalSlider_p"));
        horizontalSlider_p->setMinimum(1);
        horizontalSlider_p->setMaximum(6);
        horizontalSlider_p->setValue(2);
        horizontalSlider_p->setTracking(true);
        horizontalSlider_p->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_p);

        lcdNumber_p = new QLCDNumber(centralwidget);
        lcdNumber_p->setObjectName(QStringLiteral("lcdNumber_p"));

        horizontalLayout_9->addWidget(lcdNumber_p);


        verticalLayout_4->addLayout(horizontalLayout_9);

        pushButton_random = new QPushButton(centralwidget);
        pushButton_random->setObjectName(QStringLiteral("pushButton_random"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_random->sizePolicy().hasHeightForWidth());
        pushButton_random->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(pushButton_random);


        gridLayout_3->addLayout(verticalLayout_4, 2, 0, 1, 1);

        PCLGUI->setCentralWidget(centralwidget);

        retranslateUi(PCLGUI);
        QObject::connect(horizontalSlider_R, SIGNAL(valueChanged(int)), lcdNumber_R, SLOT(display(int)));
        QObject::connect(horizontalSlider_G, SIGNAL(valueChanged(int)), lcdNumber_G, SLOT(display(int)));
        QObject::connect(horizontalSlider_B, SIGNAL(valueChanged(int)), lcdNumber_B, SLOT(display(int)));
        QObject::connect(horizontalSlider_p, SIGNAL(valueChanged(int)), lcdNumber_p, SLOT(display(int)));

        QMetaObject::connectSlotsByName(PCLGUI);
    } // setupUi

    void retranslateUi(QMainWindow *PCLGUI)
    {
        PCLGUI->setWindowTitle(QApplication::translate("PCLGUI", "PCLGUI", 0));
        pushButton_loadPCD->setText(QApplication::translate("PCLGUI", "Load PCD", 0));
        pushButton_savePCD->setText(QApplication::translate("PCLGUI", "Save PCD", 0));
        label_R->setText(QApplication::translate("PCLGUI", "Red", 0));
        label_G->setText(QApplication::translate("PCLGUI", "Green", 0));
        label_B->setText(QApplication::translate("PCLGUI", "Blue", 0));
        label_p->setText(QApplication::translate("PCLGUI", "Point Size", 0));
        pushButton_random->setText(QApplication::translate("PCLGUI", "Random Colors", 0));
    } // retranslateUi

};

namespace Ui {
    class PCLGUI: public Ui_PCLGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLGUI_H
