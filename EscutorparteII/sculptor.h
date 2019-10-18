#ifndef SCULPTOR_H
#define SCULPTOR_H

/** @brief Estrutura Voxel que define como serão os pontos da escultura.
* r, g e b são variáveis de cor;
* a determina transparência;
* isOn determina se o bloco está ou não na escultura.
*/

struct Voxel {
  float r,g,b;
  float a;
  bool isOn;
};

/** @brief Classe Sculptor usada para definir as propriedades da escultura, 
* sendo esses dados trazidos pelo Voxel e os métodos de formato adicionado ou removido.
* @details Sculptor faz a alocação da estrutura Voxel dinamicamente.
* Trás também métodos pra a implementação do formato da escultura, 
* bem como um arquivo de texto pra ser lido e fornecer as informações que precisamos.
*/

class Sculptor {
protected:
  Voxel ***v;
  int nx,ny,nz;
  float r,g,b,a;
  
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float r, float g, float b, float alpha);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
