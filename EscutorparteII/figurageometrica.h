#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <sculptor.h>

/* @brief Classe abstrata FiguraGeometrica, para tornar o metódo
* draw virtusl, e posteriormente o utilizar em suas classes herdeiras.
*/

class FiguraGeometrica{
public:
  FiguraGeometrica();

/** @brief Método virtual draw que embora não seja definido
* na classe FiguraGeometrica, executa o mesmo método virtual das
* subclasses (as herdeiras).
*/
  
  virtual void draw(Sculptor &t)=0;

  virtual ~FiguraGeometrica();
};

#endif // FIGURAGEOMETRICA_H
