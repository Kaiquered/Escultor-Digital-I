#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include <figurageometrica.h>

/* @brief Classe herdeira de FiguraGeometrica,
* responsável por adicionar esferas em nossa escultura.
*/

class Putsphere : public FiguraGeometrica
{

protected:
    int xcenter,ycenter,zcenter,radius;
    float r,g,b,a;

public:
    Putsphere(int xcenter_, int ycenter_, int zcenter_, int radius_,float r_,float g_,float b_,float a_);
    /* @brief construtor da subclasse
    */
    ~Putsphere();
    /* @brief virtualização do método através do draw
    */
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
