/** Norma Elizondo 567661
    Doy mi palabra de que he realizado esta act con integridad academica.
    Ultima modificacion: 2 de feb de 2023
    
    PRIMER AVANCE
    Un programa (.cpp) que contenga al menos 2 funciones que usarás para probar 
    tu proyecto, debe contener al menos una vez cada una de las etiquetas que tu 
    programa va a interpretar (puedes usar uno que ya tengas, solo agrégale las etiquetas).
*/

/**
@progName   frac
@author     Norma Elizondo
@date       30 de ene de 2023
@funcName   CalcValorReal
@desc       Programa que calcula el valor decimal de la fraccion
@param      frac1 para los numeros que se usan en la fraccion
@return     regresa el valor de la fraccion
*/

#include <iostream>
using namespace std;
#include "Fraccion.h"
#include "Rectangulo.h"

int main() {
  Fraccion frac1;
  Fraccion frac2(3,4);
  cout << "El valor de la fracción " << frac1.getNum() <<"/"<<frac1.getDeno()<<" es "<<frac1.calcValorReal()<<"\n";
  
  cout << "El valor de la fracción " << frac2.getNum() <<"/"<<frac2.getDeno()<<" es "<<frac2.calcValorReal()<<"\n";


/**
@progName   rectang
@author     Norma Elizondo
@date       30 de ene de 2023
@funcName   calcArea
@desc       Programa que calcula el area de un rectangulo
@param      rect1 para los valores del ancho y largo
@return     regresa el valor del area
*/

  Rectangulo rect1;
  double area;
  rect1.setAncho(10);
  rect1.setLargo(5);
  cout << "Area = " << rect1.calcArea();
  return 0;
}