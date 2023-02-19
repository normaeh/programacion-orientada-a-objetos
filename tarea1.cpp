#include <iostream>
#include <string>
#include <cctype>
using namespace std; 

// Programa que le pide al usuario los primeros 9 dígitos de un ISBN para calcular el dígito de control y mostrar el ISBN completo.
// Norma Elizondo Hubbard 567661
// Ultima modificacion: 19 de enero de 2023
// Doy mi palabra de que he realizado esta act con integridad academica.

// ----- Casos de prueba: 
// 842053211 ---> El ISBN es 842053211-8
// 032130332 ---> El ISBN es 032130332-6
// 043935806 ---> El ISBN es 043935806-X

int main() {

    string isbnS, opcion;
    int num=0, sum=0, digitoControl;

    do {
        cout << "Ingrese los primeros 9 dígitos del ISBN: ";
        cin >> isbnS;

        for (int i=1,n=0;i<10;i++,n++){
            num =isbnS[n]-48; //convertir string a ASCII
            sum = (num*i)+sum; // aqui almacenamos la sumatoria
        }
        digitoControl=sum%11;
        if (digitoControl < 10) {
            cout << "El ISBN es " << isbnS << "-" << digitoControl << endl; // si el digito de control esta en el rango, se queda igual
        }
        else {
            cout << "El ISBN es " << isbnS << "-X" << endl; // si el digito de control no esta en el rango, se cambia a "X"
        }
        sum = 0;
        cout << "Desea ingresar otro ISBN (s/n)? "; 
        cin >> opcion;

    } while(opcion == "s"||opcion == "S"); // mientras el usuario ponga que quiere repetir el proceso, se correra de nuevo
    cout << "Programa terminado. Gracias! ";
    return 0;
} 