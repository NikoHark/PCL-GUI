#ifndef FORM_PCLSELECTEDFEATURES_H
#define FORM_PCLSELECTEDFEATURES_H

#include <QWidget>

namespace Ui {
class Form_pclSelectedFeatures;
}

class Form_pclSelectedFeatures : public QWidget
{
    Q_OBJECT

public:
    explicit Form_pclSelectedFeatures(QWidget *parent = 0);
    ~Form_pclSelectedFeatures();

private:
    Ui::Form_pclSelectedFeatures *ui;
};

#endif // FORM_PCLSELECTEDFEATURES_H
