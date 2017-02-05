#include "pcdviewer.h"
#include "ui_pcdviewer.h"

PCDViewer::PCDViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PCDViewer)
{
    ui->setupUi(this);
}

PCDViewer::~PCDViewer()
{
    delete ui;
}
