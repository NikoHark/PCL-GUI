#ifndef PCDVIEWER_H
#define PCDVIEWER_H

#include <QWidget>

namespace Ui {
class PCDViewer;
}

class PCDViewer : public QWidget
{
    Q_OBJECT

public:
    explicit PCDViewer(QWidget *parent = 0);
    ~PCDViewer();

private:
    Ui::PCDViewer *ui;
};

#endif // PCDVIEWER_H
