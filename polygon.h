#ifndef POLYGON_H
#define POLYGON_H
#include "vertex.h"


class Polygon
{
    public:
        Polygon();
        ~Polygon();
        Polygon(Vertex *varr, int inVerticles);
        void add( Vertex varr);
        double area();
        int minx();
        int maxx();
        int miny();
        int maxy();
        int numVertices();


    protected:
    private:
        Vertex* ver = 0;
        int verticles = 0;
};

#endif // POLYGON_H
