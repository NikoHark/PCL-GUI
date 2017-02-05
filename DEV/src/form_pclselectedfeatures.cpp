#include "form_pclselectedfeatures.h"
#include "ui_form_pclselectedfeatures.h"

Form_pclSelectedFeatures::Form_pclSelectedFeatures(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_pclSelectedFeatures)
{
    ui->setupUi(this);
}

Form_pclSelectedFeatures::~Form_pclSelectedFeatures()
{
    delete ui;
}
