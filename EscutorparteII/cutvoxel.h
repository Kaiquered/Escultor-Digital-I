#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include <figurageometrica.h>

class Cutvoxel : public FiguraGeometrica
{
protected:
    int x,y,z;

public:
    Cutvoxel(int x_, int y_, int z_);
    ~Cutvoxel();
    void draw(Sculptor &t);

};

#endif // CUTVOXEL_H
