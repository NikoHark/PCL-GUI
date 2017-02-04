#ifndef PCLGUI_H
#define PCLGUI_H

#include <iostream>

// Qt
#include <QMainWindow>
#include <QFileDialog>
#include <QString>

// Point Cloud Library
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/ply_io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/filter.h>
#include <pcl/visualization/pcl_visualizer.h>

// Visualization Toolkit (VTK)
#include <vtkRenderWindow.h>

typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;

namespace Ui
{
  class PCLGUI;
}

class PCLGUI : public QMainWindow
{
  Q_OBJECT

public:
  explicit PCLGUI (QWidget *parent = 0);
  ~PCLGUI ();

public slots:
  void
  randomButtonPressed ();

  void
  loadButtonPressed ();

  void
  RGBsliderReleased ();

  void
  pSliderValueChanged (int value);

  void
  redSliderValueChanged (int value);

  void
  greenSliderValueChanged (int value);

  void
  blueSliderValueChanged (int value);



protected:
  boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
  PointCloudT::Ptr cloud;

  unsigned int red;
  unsigned int green;
  unsigned int blue;

private:
  Ui::PCLGUI *ui;

};

#endif // PCLGUI_H
