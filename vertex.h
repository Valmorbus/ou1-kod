#ifndef VERTEX_H
#define VERTEX_H


class Vertex
{
    public:
        Vertex();
        Vertex(int x, int y);
        ~Vertex();

      int getPosX();
      int getPosY();

    private:
        int posX;
        int posY;

};

#endif // VERTEX_H
