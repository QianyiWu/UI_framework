#-------------------------------------------------
#
# Project created by QtCreator 2017-08-18T17:32:06
#
#-------------------------------------------------

QT       += core gui
QT += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = New_UI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    OpenMesh/Core/Geometry/NormalConeT.cc \
    OpenMesh/Core/IO/reader/BaseReader.cc \
    OpenMesh/Core/IO/reader/OBJReader.cc \
    OpenMesh/Core/IO/reader/OFFReader.cc \
    OpenMesh/Core/IO/reader/OMReader.cc \
    OpenMesh/Core/IO/reader/PLYReader.cc \
    OpenMesh/Core/IO/reader/STLReader.cc \
    OpenMesh/Core/IO/writer/BaseWriter.cc \
    OpenMesh/Core/IO/writer/OBJWriter.cc \
    OpenMesh/Core/IO/writer/OFFWriter.cc \
    OpenMesh/Core/IO/writer/OMWriter.cc \
    OpenMesh/Core/IO/writer/PLYWriter.cc \
    OpenMesh/Core/IO/writer/STLWriter.cc \
    OpenMesh/Core/IO/writer/VTKWriter.cc \
    OpenMesh/Core/IO/BinaryHelper.cc \
    OpenMesh/Core/IO/IOManager.cc \
    OpenMesh/Core/IO/OMFormat.cc \
    OpenMesh/Core/IO/OMFormatT.cc \
    OpenMesh/Core/IO/SR_binary_vector_of_bool.inl \
    OpenMesh/Core/IO/SR_binary_vector_of_fundamentals.inl \
    OpenMesh/Core/IO/SR_binary_vector_of_string.inl \
    OpenMesh/Core/Mesh/ArrayKernel.cc \
    OpenMesh/Core/Mesh/ArrayKernelT.cc \
    OpenMesh/Core/Mesh/BaseKernel.cc \
    OpenMesh/Core/Mesh/PolyConnectivity.cc \
    OpenMesh/Core/Mesh/PolyMeshT.cc \
    OpenMesh/Core/Mesh/TriConnectivity.cc \
    OpenMesh/Core/Mesh/TriMeshT.cc \
    OpenMesh/Core/System/omstream.cc \
    OpenMesh/Core/Templates/newClass.cc \
    OpenMesh/Core/Templates/newClassT.cc \
    OpenMesh/Core/Utils/BaseProperty.cc \
    OpenMesh/Core/Utils/Endian.cc \
    OpenMesh/Core/Utils/RandomNumberGenerator.cc \
    OpenMesh/Core/Utils/SingletonT.cc \
    view2d.cpp \
    view3d.cpp \
    parameterset.cpp \
    glexaminer.cpp \
    meshexaminer.cpp

HEADERS  += mainwindow.h \
    OpenMesh/Core/Geometry/Config.hh \
    OpenMesh/Core/Geometry/LoopSchemeMaskT.hh \
    OpenMesh/Core/Geometry/MathDefs.hh \
    OpenMesh/Core/Geometry/NormalConeT.hh \
    OpenMesh/Core/Geometry/Plane3d.hh \
    OpenMesh/Core/Geometry/QuadricT.hh \
    OpenMesh/Core/Geometry/VectorT.hh \
    OpenMesh/Core/Geometry/VectorT_inc.hh \
    OpenMesh/Core/IO/exporter/BaseExporter.hh \
    OpenMesh/Core/IO/exporter/ExporterT.hh \
    OpenMesh/Core/IO/importer/BaseImporter.hh \
    OpenMesh/Core/IO/importer/ImporterT.hh \
    OpenMesh/Core/IO/reader/BaseReader.hh \
    OpenMesh/Core/IO/reader/OBJReader.hh \
    OpenMesh/Core/IO/reader/OFFReader.hh \
    OpenMesh/Core/IO/reader/OMReader.hh \
    OpenMesh/Core/IO/reader/PLYReader.hh \
    OpenMesh/Core/IO/reader/STLReader.hh \
    OpenMesh/Core/IO/writer/BaseWriter.hh \
    OpenMesh/Core/IO/writer/OBJWriter.hh \
    OpenMesh/Core/IO/writer/OFFWriter.hh \
    OpenMesh/Core/IO/writer/OMWriter.hh \
    OpenMesh/Core/IO/writer/PLYWriter.hh \
    OpenMesh/Core/IO/writer/STLWriter.hh \
    OpenMesh/Core/IO/writer/VTKWriter.hh \
    OpenMesh/Core/IO/BinaryHelper.hh \
    OpenMesh/Core/IO/IOInstances.hh \
    OpenMesh/Core/IO/IOManager.hh \
    OpenMesh/Core/IO/MeshIO.hh \
    OpenMesh/Core/IO/OFFFormat.hh \
    OpenMesh/Core/IO/OMFormat.hh \
    OpenMesh/Core/IO/Options.hh \
    OpenMesh/Core/IO/SR_binary.hh \
    OpenMesh/Core/IO/SR_binary_spec.hh \
    OpenMesh/Core/IO/SR_rbo.hh \
    OpenMesh/Core/IO/SR_store.hh \
    OpenMesh/Core/IO/SR_types.hh \
    OpenMesh/Core/IO/StoreRestore.hh \
    OpenMesh/Core/Mesh/gen/circulators_header.hh \
    OpenMesh/Core/Mesh/gen/circulators_template.hh \
    OpenMesh/Core/Mesh/gen/footer.hh \
    OpenMesh/Core/Mesh/gen/iterators_header.hh \
    OpenMesh/Core/Mesh/gen/iterators_template.hh \
    OpenMesh/Core/Mesh/ArrayItems.hh \
    OpenMesh/Core/Mesh/ArrayKernel.hh \
    OpenMesh/Core/Mesh/AttribKernelT.hh \
    OpenMesh/Core/Mesh/Attributes.hh \
    OpenMesh/Core/Mesh/BaseKernel.hh \
    OpenMesh/Core/Mesh/BaseMesh.hh \
    OpenMesh/Core/Mesh/Casts.hh \
    OpenMesh/Core/Mesh/CirculatorsT.hh \
    OpenMesh/Core/Mesh/FinalMeshItemsT.hh \
    OpenMesh/Core/Mesh/Handles.hh \
    OpenMesh/Core/Mesh/IteratorsT.hh \
    OpenMesh/Core/Mesh/PolyConnectivity.hh \
    OpenMesh/Core/Mesh/PolyMesh_ArrayKernelT.hh \
    OpenMesh/Core/Mesh/PolyMeshT.hh \
    OpenMesh/Core/Mesh/Status.hh \
    OpenMesh/Core/Mesh/Traits.hh \
    OpenMesh/Core/Mesh/TriConnectivity.hh \
    OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh \
    OpenMesh/Core/Mesh/TriMeshT.hh \
    OpenMesh/Core/System/compiler.hh \
    OpenMesh/Core/System/config.h \
    OpenMesh/Core/System/config.hh \
    OpenMesh/Core/System/mostream.hh \
    OpenMesh/Core/System/omstream.hh \
    OpenMesh/Core/System/OpenMeshDLLMacros.hh \
    OpenMesh/Core/Templates/newClass.hh \
    OpenMesh/Core/Templates/newClassT.hh \
    OpenMesh/Core/Utils/AutoPropertyHandleT.hh \
    OpenMesh/Core/Utils/BaseProperty.hh \
    OpenMesh/Core/Utils/color_cast.hh \
    OpenMesh/Core/Utils/Endian.hh \
    OpenMesh/Core/Utils/GenProg.hh \
    OpenMesh/Core/Utils/Noncopyable.hh \
    OpenMesh/Core/Utils/Property.hh \
    OpenMesh/Core/Utils/PropertyContainer.hh \
    OpenMesh/Core/Utils/PropertyManager.hh \
    OpenMesh/Core/Utils/RandomNumberGenerator.hh \
    OpenMesh/Core/Utils/SingletonT.hh \
    OpenMesh/Core/Utils/vector_cast.hh \
    OpenMesh/Core/Utils/vector_traits.hh \
    view2d.h \
    view3d.h \
    parameterset.h \
    glexaminer.h \
    glwrapper.h \
    mesh.h \
    meshexaminer.h

FORMS    += mainwindow.ui

SUBDIRS += \
    OpenMesh/OpenMesh.pro

DISTFILES += \
    OpenMesh/Core/Mesh/gen/generate.sh \
    OpenMesh/Core/Templates/newClass.sh \
    OpenMesh/Core/Templates/newClassT.sh \
    OpenMesh/Core/Geometry/ACGMakefile \
    OpenMesh/Core/IO/exporter/ACGMakefile \
    OpenMesh/Core/IO/importer/ACGMakefile \
    OpenMesh/Core/IO/reader/ACGMakefile \
    OpenMesh/Core/IO/writer/ACGMakefile \
    OpenMesh/Core/IO/ACGMakefile \
    OpenMesh/Core/Mesh/ACGMakefile \
    OpenMesh/Core/System/ACGMakefile \
    OpenMesh/Core/Utils/ACGMakefile

INCLUDEPATH += /Eigen \
                /usr/local/include \



LIBS += -L/usr/local/lib \
        -L/usr/local/lib/x86_64-linux-gnu \
        -L/usr/lib \

LIBS += -lGLU \
        -ldlib \
        -lopencv_highgui \
        -lopencv_core \


#RC_FILE + = /Icons \

RESOURCES += \
    icons.qrc

