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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PCLGUI
{
public:
    QWidget *centralwidget;
    QVTKWidget *qvtkWidget;
    QSlider *horizontalSlider_R;
    QSlider *horizontalSlider_G;
    QSlider *horizontalSlider_B;
    QLCDNumber *lcdNumber_R;
    QLCDNumber *lcdNumber_G;
    QLCDNumber *lcdNumber_B;
    QSlider *horizontalSlider_p;
    QLCDNumber *lcdNumber_p;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_random;
    QPushButton *pushButton_loadPCD;

    void setupUi(QMainWindow *PCLGUI)
    {
        if (PCLGUI->objectName().isEmpty())
            PCLGUI->setObjectName(QStringLiteral("PCLGUI"));
        PCLGUI->resize(1051, 681);
        PCLGUI->setMinimumSize(QSize(0, 0));
        PCLGUI->setMaximumSize(QSize(5000, 5000));
        centralwidget = new QWidget(PCLGUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(520, 10, 521, 321));
        horizontalSlider_R = new QSlider(centralwidget);
        horizontalSlider_R->setObjectName(QStringLiteral("horizontalSlider_R"));
        horizontalSlider_R->setGeometry(QRect(520, 430, 160, 29));
        horizontalSlider_R->setMaximum(255);
        horizontalSlider_R->setValue(128);
        horizontalSlider_R->setOrientation(Qt::Horizontal);
        horizontalSlider_G = new QSlider(centralwidget);
        horizontalSlider_G->setObjectName(QStringLiteral("horizontalSlider_G"));
        horizontalSlider_G->setGeometry(QRect(780, 430, 171, 29));
        horizontalSlider_G->setMaximum(255);
        horizontalSlider_G->setValue(128);
        horizontalSlider_G->setOrientation(Qt::Horizontal);
        horizontalSlider_B = new QSlider(centralwidget);
        horizontalSlider_B->setObjectName(QStringLiteral("horizontalSlider_B"));
        horizontalSlider_B->setGeometry(QRect(520, 490, 160, 29));
        horizontalSlider_B->setMaximum(255);
        horizontalSlider_B->setValue(128);
        horizontalSlider_B->setOrientation(Qt::Horizontal);
        lcdNumber_R = new QLCDNumber(centralwidget);
        lcdNumber_R->setObjectName(QStringLiteral("lcdNumber_R"));
        lcdNumber_R->setGeometry(QRect(690, 410, 81, 41));
        lcdNumber_R->setDigitCount(3);
        lcdNumber_R->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_R->setProperty("intValue", QVariant(128));
        lcdNumber_G = new QLCDNumber(centralwidget);
        lcdNumber_G->setObjectName(QStringLiteral("lcdNumber_G"));
        lcdNumber_G->setGeometry(QRect(960, 410, 81, 41));
        lcdNumber_G->setDigitCount(3);
        lcdNumber_G->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_G->setProperty("intValue", QVariant(128));
        lcdNumber_B = new QLCDNumber(centralwidget);
        lcdNumber_B->setObjectName(QStringLiteral("lcdNumber_B"));
        lcdNumber_B->setGeometry(QRect(690, 470, 81, 41));
        lcdNumber_B->setDigitCount(3);
        lcdNumber_B->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_B->setProperty("intValue", QVariant(128));
        horizontalSlider_p = new QSlider(centralwidget);
        horizontalSlider_p->setObjectName(QStringLiteral("horizontalSlider_p"));
        horizontalSlider_p->setGeometry(QRect(780, 490, 171, 29));
        horizontalSlider_p->setMinimum(1);
        horizontalSlider_p->setMaximum(6);
        horizontalSlider_p->setValue(2);
        horizontalSlider_p->setOrientation(Qt::Horizontal);
        lcdNumber_p = new QLCDNumber(centralwidget);
        lcdNumber_p->setObjectName(QStringLiteral("lcdNumber_p"));
        lcdNumber_p->setGeometry(QRect(960, 470, 81, 41));
        lcdNumber_p->setDigitCount(1);
        lcdNumber_p->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_p->setProperty("intValue", QVariant(2));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(520, 400, 191, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(780, 400, 191, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 460, 191, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(780, 460, 141, 31));
        label_4->setFont(font);
        pushButton_random = new QPushButton(centralwidget);
        pushButton_random->setObjectName(QStringLiteral("pushButton_random"));
        pushButton_random->setGeometry(QRect(520, 340, 251, 41));
        pushButton_loadPCD = new QPushButton(centralwidget);
        pushButton_loadPCD->setObjectName(QStringLiteral("pushButton_loadPCD"));
        pushButton_loadPCD->setGeometry(QRect(790, 340, 251, 41));
        PCLGUI->setCentralWidget(centralwidget);

        retranslateUi(PCLGUI);
        QObject::connect(horizontalSlider_R, SIGNAL(sliderMoved(int)), lcdNumber_R, SLOT(display(int)));
        QObject::connect(horizontalSlider_G, SIGNAL(sliderMoved(int)), lcdNumber_G, SLOT(display(int)));
        QObject::connect(horizontalSlider_B, SIGNAL(sliderMoved(int)), lcdNumber_B, SLOT(display(int)));
        QObject::connect(horizontalSlider_p, SIGNAL(sliderMoved(int)), lcdNumber_p, SLOT(display(int)));

        QMetaObject::connectSlotsByName(PCLGUI);
    } // setupUi

    void retranslateUi(QMainWindow *PCLGUI)
    {
        PCLGUI->setWindowTitle(QApplication::translate("PCLGUI", "PCLGUI", 0));
        label->setText(QApplication::translate("PCLGUI", "Red component", 0));
        label_2->setText(QApplication::translate("PCLGUI", "Green component", 0));
        label_3->setText(QApplication::translate("PCLGUI", "Blue component", 0));
        label_4->setText(QApplication::translate("PCLGUI", "Point size", 0));
        pushButton_random->setText(QApplication::translate("PCLGUI", "Random colors", 0));
        pushButton_loadPCD->setText(QApplication::translate("PCLGUI", "Load PCD File", 0));
    } // retranslateUi

};

namespace Ui {
    class PCLGUI: public Ui_PCLGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLGUI_H
