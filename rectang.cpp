#include <iostream>
using namespace std;
#include "Rectangulo.h"

int main () {
  Rectangulo rect1, rect2;
  double area, ancho2, largo2, area2;
  rect1.setAncho(10);
  rect1.setLargo(5);
  cout << "Area del primer rectangulo = " << rect1.calcArea() << endl;
  cout << "Ingresa el ancho del segundo rectangulo: ";
  cin >> ancho2;
  cout << "Ingresa el largo del segundo rectangulo: ";
  cin >> largo2;
  rect2.setAncho(ancho2);
  rect2.setLargo(largo2);
  cout << "Area del segundo rectangulo = " << rect2.calcArea() << endl;
  return 0;
}