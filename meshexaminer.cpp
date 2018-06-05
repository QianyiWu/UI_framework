#include "meshexaminer.h"
#include "glwrapper.h"
#include <QFileDialog>
#include <QString>
#include <queue>

MeshExaminer::MeshExaminer()
{
}

MeshExaminer::~MeshExaminer()
{

}




void MeshExaminer::draw()
{
//    double dist_x = max_coord[0] - min_coord[0];
//    double dist_y = max_coord[1] - min_coord[1];
//    double dist_z = max_coord[2] - min_coord[2];
    glBegin(GL_TRIANGLES);
    for (TriMesh::FaceIter f_it = mesh_show_.faces_begin();
         f_it != mesh_show_.faces_end(); f_it++)
    {
//        TriMesh::Normal normal = mesh_show_.normal(*f_it);
        for(TriMesh::FaceHalfedgeIter fh_it = mesh_show_.fh_iter(*f_it);
            fh_it.is_valid(); fh_it++)
        {
            TriMesh::VertexHandle toV = mesh_show_.to_vertex_handle(*fh_it);
            TriMesh::Point point = mesh_show_.point(toV);
            TriMesh::Normal normal = mesh_show_.normal(toV);
            glColor3f(0.5f,0.5f,0.5f);
            glNormal3f(-normal[0], -normal[1], -normal[2]);
//            glVertex3f(2*point[0]/dist_x, 2*point[1]/dist_y, 2*point[2]/dist_z);
            glVertex3f(point[0],point[1],point[2]);

        }
    }

    // debug for mesh show
//    glColor3f(0.5,0.5,0.5);
//    glVertex3f(2,0,0);
//    glColor3f(0.5,0.5,0.5);
//    glVertex3f(2,-2,0);
//    glColor3f(0.5,0.5,0.5);
//    glVertex3f(-2,2,0);

     glEnd();
}



bool MeshExaminer::meshBoundingBox()
{
    if(mesh_show_.n_vertices() == 0){
        return false;
    }

    TriMesh::ConstVertexIter cv_it = mesh_show_.vertices_begin(), cv_end(mesh_show_.vertices_end());
    min_coord = mesh_show_.point(*cv_it);
    max_coord = min_coord;

    for( ++ cv_it ; cv_it != cv_end; ++ cv_it){
        min_coord.minimize(mesh_show_.point(*cv_it));
        max_coord.maximize(mesh_show_.point(*cv_it));
    }

    return true;
}

bool MeshExaminer::is_point_in_face(TriMesh::Point &p1, TriMesh::Point &p2, TriMesh::Point &p3)
{
    if (pX.empty())
    {
        return false;
    }
    double posX = (double)pX.front(), posY = (double)pY.front(), posZ = (double)pZ.front();

    TriMesh::Point p(posX, posY, posZ);

    TriMesh::Normal e0 = p2 - p1;
    TriMesh::Normal e1 = p3 - p1;
    TriMesh::Normal e2 = p - p1;

    TriMesh::Normal c1 = e0 % e1;
    TriMesh::Normal c2 = e0 % e2;
    if (std::abs(c1 | e2)/(c1.length() * e2.length()) > 0.1)
    {
        return false;
    }
    if ((c1 | c2) < 0)
    {
        return false;
    }
    e0 = p3 - p2; e1 = p1 - p2; e2 = p - p2;
    c1 = e0 % e1; c2 = e0 % e2;
    if ((c1 | c2) < 0)
    {
        return false;
    }
    e0 = p1 - p3; e1 = p2 - p3; e2 = p - p3;
    c1 = e0 % e1; c2 = e0 % e2;
    if ((c1 | c2) < 0)
    {
        return false;
    }
    return true;
    /*double dot00 = e0 | e0;
    double dot01 = e0 | e1;
    double dot02 = e0 | e2;
    double dot11 = e1 | e1;
    double dot12 = e1 | e2;

    double inverDeno = 1.0 / (dot00 * dot11 - dot01 * dot01);

    double u = (dot11 * dot02 - dot01 * dot12) * inverDeno;
    if (u < 0 || u > 1)
        return false;

    double v = (dot00 * dot12 - dot01 * dot02) * inverDeno;
    if (v < 0 || v > 1)
        return false;

    return u+v <= 1.0;*/

}

void MeshExaminer::updateMesh(TriMesh &_mesh)
{
    mesh_show_ = _mesh;
    mesh_show_.request_face_normals();
    mesh_show_.request_vertex_normals();
    mesh_show_.update_normals();
    mesh_show_.request_face_colors();
    mesh_show_.request_halfedge_colors();
}

void MeshExaminer::resetMesh(TriMesh &_mesh, bool _need_normalize)
{
    updateMesh(_mesh);
    meshBoundingBox();

    if(_need_normalize){
//        TriMesh::Point max_coord, min_coord;
        if(meshBoundingBox()){
            setScene( (OpenMesh::Vec3f)((min_coord + max_coord)*0.5), 0.5*(max_coord - min_coord).norm());

        }
        else{
            setScene( OpenMesh::Vec3f(0, 0, 0), 1);
        }
    }
}
