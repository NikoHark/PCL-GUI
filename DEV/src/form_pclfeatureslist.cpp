#include "form_pclfeatureslist.h"
#include "ui_form_pclfeatureslist.h"

Form_pclFeaturesList::Form_pclFeaturesList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_pclFeaturesList)
{
    ui->setupUi(this);
}

Form_pclFeaturesList::~Form_pclFeaturesList()
{
    delete ui;
}
