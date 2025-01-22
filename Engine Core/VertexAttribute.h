#pragma once
#ifndef VERTEX_ATTRIBUTE_H
#define VERTEX_ATTRIBUTE_H

#include "engineafx.h"

class VertexAttribute{
public:
 VertexAttribute();

 void * m_vaData;//user pre vertex data
 set<Edge> m_meshedgeSet; //adjacent edges
 set<Triangle> m_meshTrianglesSet; //adjacent triangles

};


#endif
