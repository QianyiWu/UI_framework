#include "view3d.h"
#include "GL/glu.h"


view3d::view3d(QWidget *parent)
    :QGLWidget(parent)
{
    examiner_ = new MeshExaminer();
}

view3d::~view3d()
{
    if(examiner_) delete examiner_;
    examiner_ = NULL;
}


void view3d::initializeGL()
{
    examiner_->init();
}

void view3d::resizeGL(int w, int h)
{
    examiner_->reshape(w, h);
}

void view3d::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    examiner_->draw();
}

void view3d::mousePressEvent(QMouseEvent *event)
{
    examiner_->mousePressEvent(event);
}

void view3d::mouseReleaseEvent(QMouseEvent *event)
{
    examiner_->mouseReleaseEvent(event);
}

void view3d::mouseMoveEvent(QMouseEvent *event)
{
    examiner_->mouseMoveEvent(event);
    this->updateGL();
}

void view3d::wheelEvent(QWheelEvent *event)
{
    examiner_->wheelEvent(event);
    this->updateGL();
}

void view3d::updateMesh(TriMesh &_mesh)
{
    examiner_->updateMesh(_mesh);
}

void view3d::resetMesh(TriMesh &_mesh, bool _need_normalize)
{
    examiner_->resetMesh(_mesh, _need_normalize);
}
