// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_PointsOnSurface_HeaderFile
#define _BRep_PointsOnSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_PointsOnSurface_HeaderFile
#include <Handle_BRep_PointsOnSurface.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _BRep_PointRepresentation_HeaderFile
#include <BRep_PointRepresentation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_Surface;
class TopLoc_Location;



class BRep_PointsOnSurface : public BRep_PointRepresentation {

public:

  
  Standard_EXPORT   virtual const Handle_Geom_Surface& Surface() const;
  
  Standard_EXPORT   virtual  void Surface(const Handle(Geom_Surface)& S) ;




  DEFINE_STANDARD_RTTI(BRep_PointsOnSurface)

protected:

  
  Standard_EXPORT   BRep_PointsOnSurface(const Standard_Real P,const Handle(Geom_Surface)& S,const TopLoc_Location& L);



private: 


Handle_Geom_Surface mySurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif