/** Norma Elizondo 567661
    Doy mi palabra de que he realizado esta act con integridad academica.
    Ultima modificion: 2 de feb */

#include <iostream>
using namespace std;
#include "Complejo.h"

int main(){
    Complejo compA; // A
    Complejo compD, compE;

    double real,ima;
    cout << "Ingresa el valor real del primer complejo: ";
    cin >> real;
    cout << "Ingresa el valor imaginario del primer complejo: ";
    cin >> ima;
    Complejo compB(real,ima); // B

    cout << "Ingresa el valor real del segundo complejo: ";
    cin >> real;
    cout << "Ingresa el valor imaginario del segundo complejo: ";
    cin >> ima;
    Complejo compC(real,ima); // C

    compD = compB.suma(compC); // D
    compE = compB.resta(compC); // E
    cout << "Complejo A (" << compA.getReal() << " , " << compA.getIma() << "i)" << "\n";
    cout << "Complejo B (" << compB.getReal() << " , " << compB.getIma() << "i)" << "\n";
    cout << "Complejo C (" << compC.getReal() << " , " << compC.getIma() << "i)" << "\n";
    cout << "Complejo D (" << compD.getReal() << " , " << compD.getIma() << "i)" << "\n";
    cout << "Complejo E (" << compE.getReal() << " , " << compE.getIma() << "i)" << "\n";
    return 0;
}