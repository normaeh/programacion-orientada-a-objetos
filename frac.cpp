// Norma Elizondo 567661
// Doy mi palabra de que he realizado esta act con integridad academica.

#include <iostream>
using namespace std;
#include "Fraccion.h"

int main() {
  Fraccion frac1;
  Fraccion frac2(3,4);
  cout << "El valor de la fracción " << frac1.getNum() <<"/"<<frac1.getDeno()<<" es "<<frac1.calcValorReal()<<"\n";
  
  cout << "El valor de la fracción " << frac2.getNum() <<"/"<<frac2.getDeno()<<" es "<<frac2.calcValorReal();

  return 0;
}