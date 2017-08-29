#ifndef MESHEXAMINER_H
#define MESHEXAMINER_H

#include "glexaminer.h"
#include "mesh.h"
#include "Eigen/Dense"
#include "Eigen/Sparse"

class MeshExaminer : public GLExaminer
{
public:
    MeshExaminer();
    virtual ~MeshExaminer();

    // draw the scene
    virtual void draw();

    void updateMesh(TriMesh &_mesh);

    void resetMesh(TriMesh &_mesh, bool _need_normalize);

protected:
    TriMesh mesh_show_;

    // compute the bounding box of a mesh
    bool meshBoundingBox();

    TriMesh::Point min_coord, max_coord;

    bool is_point_in_face(TriMesh::Point &p1, TriMesh::Point &p2, TriMesh::Point &p3);


};

#endif // MESHEXAMINER_H
