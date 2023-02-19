#include <iostream>
#include <string>
#include <fstream> // este se agrego por los files
using namespace std; 

// 19 de enero

int main (){
    ifstream archivoEntrada;
    archivoEntrada.open("datos.txt"); // lee de un texto existente
    int x;
    while (archivoEntrada >> x){
        cout << x << " ";
    }
    cout << endl;
    archivoEntrada.close();
    return 0;
}