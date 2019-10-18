#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include <figurageometrica.h>

/* @brief Classe herdeira de FiguraGeometrica,
* responsável por remover esferas em nossa escultura.
*/

class Cutsphere : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter,radius;

public:
    Cutsphere(int xcenter_, int ycenter_, int zcenter_, int radius_);
    /* @brief construtor da subclasse
    */
    ~Cutsphere();
    /* @brief virtualização do método através do draw
    */
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
