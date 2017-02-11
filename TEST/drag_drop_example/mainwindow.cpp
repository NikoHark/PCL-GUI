#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // add items to list
    for(int i = 0; i < NUM_LIST_ITEMS; ++i)
    {
        ui->listWidget_mainList->addItem("item " + QString::number(i));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

