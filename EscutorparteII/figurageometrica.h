#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <sculptor.h>

/** @brief Classe abstrata FiguraGeometrica, para tornar o metódo
* draw virtual, e em seguida ser implementado pelas classes herdeiras.
* @details FiguraGeometrica permite que endereços de objetos de subclasses 
* dela sejam armazenadas em ponteiros dessa classe.
*/

class FiguraGeometrica{
public:
  FiguraGeometrica();
  
  virtual void draw(Sculptor &t)=0;

  virtual ~FiguraGeometrica();
};

#endif // FIGURAGEOMETRICA_H
