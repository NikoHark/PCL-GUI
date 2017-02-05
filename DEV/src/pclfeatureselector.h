#ifndef PCLFEATURESELECTOR_H
#define PCLFEATURESELECTOR_H

#include <QWidget>

namespace Ui {
class pclFeatureSelector;
}

class pclFeatureSelector : public QWidget
{
    Q_OBJECT

public:
    explicit pclFeatureSelector(QWidget *parent = 0);
    ~pclFeatureSelector();

private:
    Ui::pclFeatureSelector *ui;
};

#endif // PCLFEATURESELECTOR_H
