#include "pclgui.h"
#include <QApplication>
#include <QMainWindow>
#include <QWidget>

int main (int argc, char *argv[])
{
  QApplication a (argc, argv);
  PCLGUI w;
  w.show ();

  return a.exec ();
}
