#ifndef FORM_PCLFEATUREOPTIONS_H
#define FORM_PCLFEATUREOPTIONS_H

#include <QWidget>

namespace Ui {
class Form_pclFeatureOptions;
}

class Form_pclFeatureOptions : public QWidget
{
    Q_OBJECT

public:
    explicit Form_pclFeatureOptions(QWidget *parent = 0);
    ~Form_pclFeatureOptions();

private:
    Ui::Form_pclFeatureOptions *ui;
};

#endif // FORM_PCLFEATUREOPTIONS_H
