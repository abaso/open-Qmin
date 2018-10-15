#ifndef latticeBoundaries_H
#define latticeBoundaries_H

/*! \file latticeBoundaries.h */

//! Distinguish the potential types of non-liquid-crystalline lattice sites
enum class boundaryType {homeotropic};

//! "boundary objects" have a boundary type and few parameters that will be used in force/energy calculations
class boundaryObject
    {
    public:
        boundaryObject(boundaryType _boundary, scalar _p1, scalar _p2)
            {
            boundary= _boundary;
            P1 = _p1;
            P2 = _p2;
            }
        boundaryType boundary;
        scalar P1, P2 ;
    };

#endif
