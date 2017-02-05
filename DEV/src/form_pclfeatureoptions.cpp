#include "form_pclfeatureoptions.h"
#include "ui_form_pclfeatureoptions.h"

Form_pclFeatureOptions::Form_pclFeatureOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_pclFeatureOptions)
{
    ui->setupUi(this);
}

Form_pclFeatureOptions::~Form_pclFeatureOptions()
{
    delete ui;
}
