#include "vertex.h"
//parameterlös konstruktor
//används i polygons konstruktor
Vertex::Vertex()
{
    posX = 0;
    posY = 0;
}
//överlagrad konstruktor
Vertex::Vertex(int x, int y)
{
    posX = x;
    posY = y;
}

Vertex::~Vertex()
{
    //dtor
}
//dessa används för att räkna ut area
//returnerar xposition
int Vertex::getPosX()
{
    return posX;
}
//returnerar y position
int Vertex::getPosY()
{
    return posY;
}

