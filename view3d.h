#ifndef VIEW3D_H
#define VIEW3D_H

#include <QtOpenGL/QtOpenGL>
#include <QtOpenGL/QGLWidget>
#include <QImage>
#include <OpenMesh/Core/IO/MeshIO.hh>
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>
#include "meshexaminer.h"

typedef OpenMesh::TriMesh_ArrayKernelT<> MyMesh;

/*
 *     3d model show class
 *
 */


class view3d : public QGLWidget
{
     Q_OBJECT

public:
    view3d(QWidget *parent = 0);
    ~view3d();

    // load mesh
    TriMesh mesh_;

    // get mesh from somewhere
    void updateMesh(TriMesh &mesh_);

    void resetMesh(TriMesh &mesh_, bool _need_normalize);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);


private:
    MeshExaminer *examiner_;

};

#endif // VIEW3D_H
