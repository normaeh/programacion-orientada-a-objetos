#include <iostream>
using namespace std;
#include "Rectangulo.h"

/* Hacer un arreglo con 4 rectángulos y mostrar el área de cada uno de ellos:
    Pedir al usuario los valores para los 4 rectángulos, usar ciclo FOR
    Guardar los valores y después desplegarlos en un ciclo FOR.
*/

int main(){
    Rectangulo rect[4];
    double ancho, largo;
    for (int i=1; i<5; i++){
        cout << "Ingresa el largo del rectangulo "<<i<<" : ";
        cin >> ancho;
        rect[i].setAncho(ancho);
        cout << "Ingresa el ancho del rectangulo "<<i<<" : ";
        cin >> largo;
        rect[i].setLargo(largo);
    }
    for  (int i=1; i<5;i++){
        cout << "Rect[" << i << "] es de: " << rect[i].getLargo() << " x " << rect[i].getAncho() << "\n";
        cout << "El area de Rect[" << i << "] es de: " << rect[i].calcArea() << "\n";
    }
}