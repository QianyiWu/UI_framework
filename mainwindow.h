#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include "view2d.h"
#include "view3d.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    TriMesh mesh;

private:
    Ui::MainWindow *ui;

    // windows widget
    QDockWidget *td_model_show_;
//    QDockWidget *td_model_show_2_;

    QAction *dock_img_open_;

    QAction *dock_mesh_load_;

    QToolBar *toolbar_;

//    QAction action_img_open_;

};

#endif // MAINWINDOW_H
