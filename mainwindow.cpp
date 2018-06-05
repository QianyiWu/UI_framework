#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDockWidget>
#include <OpenMesh/Core/IO/MeshIO.hh>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view2d *img_show_ = new view2d();   // 2d image show
    view3d *gl_show_ = new view3d();    // 3d model show
    view3d *gl_show_2 = new view3d();

    setCentralWidget(img_show_);   // image in center


    //debug for mesh show

    // 3d model show in DockWidget, list in Right
    td_model_show_ = new QDockWidget(tr("&3D model of caricature"),this);
    td_model_show_ -> setFeatures(QDockWidget::DockWidgetFloatable);
    td_model_show_ -> setFixedSize(500,500);
    td_model_show_ -> setAllowedAreas(Qt::RightDockWidgetArea);
    td_model_show_ -> setWidget(gl_show_);
    addDockWidget(Qt::RightDockWidgetArea, td_model_show_);


    td_model_show_2_ = new QDockWidget(tr("&3D model of potrait"),this);
    td_model_show_2_ -> setFeatures(QDockWidget::DockWidgetFloatable);
    td_model_show_2_ -> setFixedSize(500,500);
    td_model_show_2_ -> setAllowedAreas(Qt::RightDockWidgetArea);
    td_model_show_2_ -> setWidget(gl_show_2);
    addDockWidget(Qt::RightDockWidgetArea, td_model_show_2_);


    //  IF YOU WANT TO LOAD MESH , LIKE THIS
    QString mesh_path = "/home/wooqy/FaceWarehouse_Data/Tester_2/Blendshape/shape_0.obj";
    if(!OpenMesh::IO::read_mesh(mesh,mesh_path.toStdString().c_str()))
        std::cout<<"Not load mesh"<<std::endl;

    gl_show_->updateMesh(mesh);
    gl_show_->resetMesh(mesh,1);

    QString mesh_path_1 = "/home/wooqy/FaceWarehouse_Data/Tester_1/Blendshape/shape_0.obj";
    if(!OpenMesh::IO::read_mesh(mesh_2,mesh_path_1.toStdString().c_str()))
        std::cout<<"Not load mesh"<<std::endl;

    gl_show_2->updateMesh(mesh_2);
    gl_show_2->resetMesh(mesh_2,1);


    // open image
    dock_img_open_ = new QAction(QIcon(":/Icons/open.ico"),tr("Open"),this);
    dock_img_open_->setShortcut(QKeySequence::Open);
    dock_img_open_->setStatusTip(tr("Open Existing file"));
    connect(dock_img_open_, SIGNAL(triggered()),img_show_,SLOT(open_image()));
    td_model_show_ -> addAction(dock_img_open_);
    toolbar_ = addToolBar(tr("&Potrait"));
    toolbar_ -> addAction(dock_img_open_);
}

MainWindow::~MainWindow()
{
    delete ui;
}
