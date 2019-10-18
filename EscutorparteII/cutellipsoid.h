#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include <figurageometrica.h>


/** @brief Classe herdeira de FiguraGeometrica,
* responsável por adicionar elipsoides em nossa escultura.
* note que é bem parecido (e pode ser igual caso rx_ = ry_ = rz_) 
* à subclasse responsável por adicionar esferas
*/

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
