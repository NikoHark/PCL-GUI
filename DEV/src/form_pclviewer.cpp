#include "form_pclviewer.h"
#include "ui_form_pclviewer.h"

Form_pclViewer::Form_pclViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_pclViewer)
{
    ui->setupUi(this);


}

Form_pclViewer::~Form_pclViewer()
{
    delete ui;
}
