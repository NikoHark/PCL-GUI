#ifndef FORM_PCLVIEWER_H
#define FORM_PCLVIEWER_H

#include <QWidget>

namespace Ui {
class Form_pclViewer;
}

class Form_pclViewer : public QWidget
{
    Q_OBJECT

public:
    explicit Form_pclViewer(QWidget *parent = 0);
    ~Form_pclViewer();

private:
    Ui::Form_pclViewer *ui;
};

#endif // FORM_PCLVIEWER_H
