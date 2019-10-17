#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include <figurageometrica.h>

class Cutellipsoid : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
public:
    Cutellipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);
    ~Cutellipsoid();
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
