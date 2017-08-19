/*===========================================================================*\
 *                                                                           *
 *                               OpenMesh                                    *
 *      Copyright (C) 2001-2015 by Computer Graphics Group, RWTH Aachen      *
 *                           www.openmesh.org                                *
 *                                                                           *
 *---------------------------------------------------------------------------* 
 *  This file is part of OpenMesh.                                           *
 *                                                                           *
 *  OpenMesh is free software: you can redistribute it and/or modify         * 
 *  it under the terms of the GNU Lesser General Public License as           *
 *  published by the Free Software Foundation, either version 3 of           *
 *  the License, or (at your option) any later version with the              *
 *  following exceptions:                                                    *
 *                                                                           *
 *  If other files instantiate templates or use macros                       *
 *  or inline functions from this file, or you compile this file and         *
 *  link it with other files to produce an executable, this file does        *
 *  not by itself cause the resulting executable to be covered by the        *
 *  GNU Lesser General Public License. This exception does not however       *
 *  invalidate any other reasons why the executable file might be            *
 *  covered by the GNU Lesser General Public License.                        *
 *                                                                           *
 *  OpenMesh is distributed in the hope that it will be useful,              *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU Lesser General Public License for more details.                      *
 *                                                                           *
 *  You should have received a copy of the GNU LesserGeneral Public          *
 *  License along with OpenMesh.  If not,                                    *
 *  see <http://www.gnu.org/licenses/>.                                      *
 *                                                                           *
\*===========================================================================*/ 

/*===========================================================================*\
 *                                                                           *             
 *   $Revision: 1188 $                                                         *
 *   $Date: 2015-01-05 16:34:10 +0100 (Mo, 05 Jan 2015) $                   *
 *                                                                           *
\*===========================================================================*/

//=============================================================================
//
//  CLASS newClass
//
//=============================================================================
#ifndef DOXY_IGNORE_THIS
#ifndef OPENMESH_NEWCLASST_HH
#define OPENMESH_NEWCLASST_HH


//== INCLUDES =================================================================


//== FORWARDDECLARATIONS ======================================================


//== NAMESPACES ===============================================================

namespace OpenMesh {


//== CLASS DEFINITION =========================================================



	      
/** \class newClassT newClassT.hh <OpenMesh/.../newClassT.hh>

    Brief Description.
  
    A more elaborate description follows.
*/

template <>
class newClassT
{
public:
   
  /// Default constructor
  newClassT() {}
 
  /// Destructor
  ~newClassT() {}

  
private:

  /// Copy constructor (not used)
  newClassT(const newClassT& _rhs);

  /// Assignment operator (not used)
  newClassT& operator=(const newClassT& _rhs);
  
};


//=============================================================================
} // namespace OpenMesh
//=============================================================================
#if defined(OM_INCLUDE_TEMPLATES) && !defined(OPENMESH_NEWCLASS_C)
#define OPENMESH_NEWCLASS_TEMPLATES
#include "newClass.cc"
#endif
//=============================================================================
#endif // OPENMESH_NEWCLASST_HH defined
#endif // DOXY_IGNORE_THIS
//=============================================================================
