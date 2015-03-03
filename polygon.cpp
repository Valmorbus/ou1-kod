#include "polygon.h"
#include "vertex.h"


Polygon::Polygon()
{

}
//överlagrad konstruktor
Polygon::Polygon(Vertex *varr, int inVerticles)
{
    verticles = inVerticles;
    ver = new Vertex[verticles];

    for (int i = 0; i < verticles; i++)
    {
        ver[i]= varr[i];
    }
}

Polygon::~Polygon()
{
    delete[] ver;
    ver = 0; //dtor
}
//lägger till en vertex i en lista.
void Polygon::add( Vertex v)
{

    Vertex* temp = new Vertex[verticles];

    for (int i = 0; i < verticles; i++)
    {
        temp[i]= ver[i];
    }
    delete[] ver;
    ver = 0;

    verticles++;

    ver = new Vertex[verticles];
    for (int i = 0; i < verticles-1; i++)
    {
        ver[i]= temp[i];
    }
    ver[verticles-1] = v;

    delete[] temp;
    temp = 0; //är nog onödigt, den försvinner ändå utanför scope

}
//räknar ut och returnerar area
double Polygon::area()
{
    double areaXY = 0;

    for (int i = 0; i < verticles-1; i++)
    {
        areaXY += ver[i].getPosX()*ver[i+1].getPosY()-ver[i+1].getPosX()*ver[i].getPosY();
    }
    areaXY += ver[verticles-1].getPosX()*ver[0].getPosY()- ver[0].getPosX()*ver[verticles-1].getPosY();

    areaXY /=2;     // areaXY/2;
    if (areaXY < 0)
    {
        areaXY *= -1;
    }

    return areaXY;
}
//returnerar minsta y position
int Polygon::minx()
{
    int minX = 0;
        for (int i = 0; i <verticles; i++)
        {
            if (ver[i].getPosX() <= minX)
                minX=ver[i].getPosX();
        }
    return minX;

}
//returnerar max x position
int Polygon::maxx()
{
    int maxX = 0;
        for (int i = 0; i <verticles; i++)
        {
            //Detta är egentligen bara ett test av ?: jag misstänker att if-satsen egentligen är bättre för denna uppgift
            //if (ver[i].getPosX() >= maxX)
               // maxX=ver[i].getPosX();
              maxX=ver[i].getPosX()>maxX ? ver[i].getPosX() : maxX;
        }
    return maxX;


}
//returnerar minsta y position
int Polygon::miny()
{
    int minY = 0;
        for (int i = 0; i <verticles; i++)
        {
            if (ver[i].getPosX() <= minY)
                minY=ver[i].getPosX();
        }
    return minY;


}
//returnerar max y position
int Polygon::maxy()
{
    int maxY = 0;
        for (int i = 0; i <verticles; i++)
        {
            if (ver[i].getPosX() >= maxY)
                maxY=ver[i].getPosX();
        }
    return maxY;

}
//returnerar antalet vertiklar
int Polygon::numVertices()
{
    return verticles;
}




