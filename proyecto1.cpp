/** Norma Elizondo 567661
    Doy mi palabra de que he realizado esta act con integridad academica.
    Ultima modificacion: 12 de feb de 2023
    
    PROYECTO 1
    Un programa (.cpp) que pregunte el nombre del archivo de entrada sin extensión y 
    generare un archivo de salida con el mismo nombre de entrada pero con extensión html
*/

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;


int main() {
    string nombre1, nombre2, autor1, autor2, fecha1, fecha2, funcName1, funcName2, desc1, desc2, param1, param2, return1, return2;

/**
@progName   frac
@author     Norma Elizondo
@date       30 de ene de 2023
@funcName   CalcValorReal
@desc       Programa que calcula el valor decimal de la fraccion
@param      frac1 para los numeros que se usan en la fraccion
@return     regresa el valor de la fraccion
*/

    cout << "Ingrese el nombre del primer programa sin su extension: ";
    getline(cin,nombre1);
    cout << "Ingrese el autor del primer programa: ";
    getline(cin,autor1);
    cout << "Ingrese la fecha en la que se creo el primer programa: ";
    getline(cin,fecha1);
    cout << "Ingrese el nombre de la funcion del primer programa: ";
    getline(cin,funcName1);
    cout << "Ingrese la descripcion del primer programa: ";
    getline(cin,desc1);
    cout << "Ingrese el parametro del primer programa: ";
    getline(cin,param1);
    cout << "Ingrese el valor que regresa del primer programa: ";
    getline(cin,return1);

/**
@progName   rectang
@author     Norma Elizondo
@date       30 de ene de 2023
@funcName   calcArea
@desc       Programa que calcula el area de un rectangulo
@param      rect1 para los valores del ancho y largo
@return     regresa el valor del area
*/
    cout << "Ingrese el nombre del segundo programa sin su extension: ";
    getline(cin,nombre2);
    cout << "Ingrese el autor del segundo programa: ";
    getline(cin,autor2);
    cout << "Ingrese la fecha en la que se creo el segundo programa: ";
    getline(cin,fecha2);
    cout << "Ingrese el nombre de la funcion del segundo programa: ";
    getline(cin,funcName2);
    cout << "Ingrese la descripcion del segundo programa: ";
    getline(cin,desc2);
    cout << "Ingrese el parametro del segundo programa: ";
    getline(cin,param2);
    cout << "Ingrese el valor que regresa del segundo programa: ";
    getline(cin,return2);

    ofstream archivoSalida;
    archivoSalida.open("frac.html");
    archivoSalida << "<!DOCTYPE html>" << endl;
    archivoSalida << "<html>" << endl;
    archivoSalida << "<head><title>" << nombre1 << "</title></head>" << endl;

    archivoSalida << "<body>" << endl;
    archivoSalida << "<h1>Programa: " << nombre1 << "</h1>" << endl;
    archivoSalida << "<b>Autor: </b>" << autor1 << "<br>" << endl;
    archivoSalida << "<b>Fecha de elaboración: </b>" << fecha1 << "<br>" <<  endl;
    archivoSalida << "<b>Nombre de la funcion: </b>" << funcName1 << "<br>" <<  endl;
    archivoSalida << "<b>Descripcion: </b>" << desc1 << "<br>" <<  endl;
    archivoSalida << "<b>Parametro: </b>" << param1 << "<br>" <<  endl;
    archivoSalida << "<b>Valor de retorno: </b>" << return1 << "<br>" <<  endl;

    archivoSalida << "<h1>Programa: " << nombre2 << "</h1>" << endl;
    archivoSalida << "<b>Autor: </b>" << autor2 << "<br>" <<  endl;
    archivoSalida << "<b>Fecha de elaboración: </b>" << fecha2 << "<br>" <<  endl;
    archivoSalida << "<b>Nombre de la funcion: </b>" << funcName2 << "<br>" <<  endl;
    archivoSalida << "<b>Descripcion: </b>" << desc2 << "<br>" <<  endl;
    archivoSalida << "<b>Parametro: </b>" << param2 << "<br>" <<  endl;
    archivoSalida << "<b>Valor de retorno: </b>" << return2 << "<br>" <<  endl;
    archivoSalida << "</body>" << endl;

    archivoSalida << "</html>" << endl;
    archivoSalida.close();

    cout<<"El archivo HTML se creo exitosamente.";
    return 0;
}