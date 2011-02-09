// SpecialHEdge.cpp: implementation of the SpecialHEdge class.
//
//////////////////////////////////////////////////////////////////////

#include <cstdlib>

#include <SpecialHEdge.hpp>

namespace sharp
{
	
	//////////////////////////////////////////////////////////////////////
	// Construction/Destruction
	//////////////////////////////////////////////////////////////////////
	
	
	SpecialHEdge::SpecialHEdge(int iNbrOfEdges) : Hyperedge(-1, NULL, 1, 1), CompSet(iNbrOfEdges)
	{
		Hyperedge::bMySpecial = true;
		CompSet::bMySpecial = true;
	}
	
	
	SpecialHEdge::~SpecialHEdge()
	{
	
	}
	
	//////////////////////////////////////////////////////////////////////
	// Class methods
	//////////////////////////////////////////////////////////////////////

} // namespace sharp