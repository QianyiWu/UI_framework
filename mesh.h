#ifndef MESH_H
#define MESH_H

#include <OpenMesh/Core/IO/MeshIO.hh>
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>
#include <OpenMesh/Core/Mesh/PolyMesh_ArrayKernelT.hh>
struct MyTraits : public OpenMesh::DefaultTraits
{
    /// Use double precision points
    typedef OpenMesh::Vec3d Point;
    /// Use double precision Normals
    typedef OpenMesh::Vec3d Normal;
    /// Use RGBA Color
    typedef OpenMesh::Vec4f Color;

    typedef OpenMesh::Vec2d  TexCoord2D;
};

/*#include <OpenMesh/Core/IO/MeshIO.hh>
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>
#include <OpenMesh/Core/Geometry/VectorT.hh>

struct MyTraits : OpenMesh::DefaultTraits
{
  // Let Point and Normal be a vector of doubles
  typedef OpenMesh::Vec3d Point;
  typedef OpenMesh::Vec3d Normal;

  // The default 1D texture coordinate type is float.
  typedef double  TexCoord1D;
  // The default 2D texture coordinate type is OpenMesh::Vec2f.
  typedef OpenMesh::Vec2d  TexCoord2D;
  // The default 3D texture coordinate type is OpenMesh::Vec3f.
  typedef OpenMesh::Vec3d  TexCoord3D;

  typedef OpenMesh::Vec4f Color;

    //enable standart properties
    VertexAttributes   (OpenMesh::Attributes::Status|OpenMesh::Attributes::Normal|OpenMesh::Attributes::Color);
    HalfedgeAttributes (OpenMesh::Attributes::Status|OpenMesh::Attributes::PrevHalfedge);
    FaceAttributes     (OpenMesh::Attributes::Status|OpenMesh::Attributes::Normal|OpenMesh::Attributes::Color);
    EdgeAttributes     (OpenMesh::Attributes::Status|OpenMesh::Attributes::Color);
};*/

typedef OpenMesh::TriMesh_ArrayKernelT<> TriMesh;

#endif // MESH_H

