#include <iostream>
#include <string>
#include <fstream> // este se agrego por los files
using namespace std; 

// 19 de enero

int main (){
    ofstream archivoSalida; // crea un texto en tu compu
    archivoSalida.open("datos.txt");
    for (int k = 0; k < 20; k++){
        archivoSalida << k << endl;
    }
    archivoSalida.close();
    return 0;
}