#include "vertex.h"
//parameterl�s konstruktor
//anv�nds i polygons konstruktor
Vertex::Vertex()
{
    posX = 0;
    posY = 0;
}
//�verlagrad konstruktor
Vertex::Vertex(int x, int y)
{
    posX = x;
    posY = y;
}

Vertex::~Vertex()
{
    //dtor
}
//dessa anv�nds f�r att r�kna ut area
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

