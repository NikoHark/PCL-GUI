#ifndef FORM_PCLFEATURESLIST_H
#define FORM_PCLFEATURESLIST_H

#include <QWidget>

namespace Ui {
class Form_pclFeaturesList;
}

class Form_pclFeaturesList : public QWidget
{
    Q_OBJECT

public:
    explicit Form_pclFeaturesList(QWidget *parent = 0);
    ~Form_pclFeaturesList();

private:
    Ui::Form_pclFeaturesList *ui;
};

#endif // FORM_PCLFEATURESLIST_H
