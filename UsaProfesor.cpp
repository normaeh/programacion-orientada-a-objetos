/*  Norma Elizondo Hubbard 567661

    Doy mi palabra de que he realizado esta actividad con integridad academica.
*/

#include <iostream>
#include <string>
using namespace std;
#include "Profesor.h"

int main(){
    int cantProfes, cantGruposI, opcion, cantGruposF, numNomina, numNominaI, n;
    string nombreP;
    cout << "Ingrese el numero de profesores que desea registrar: ";
    cin >> cantProfes;
    Profesor arrProf[cantProfes];

    for(int i=1; i<(cantProfes + 1); i++){
        cout << "Ingrese el nombre del profesor " << i << ": ";
        cin >> nombreP;
        arrProf[i].setNombre(nombreP);
        cout << "Ingrese la cantidad de grupos iniciales: ";
        cin >> cantGruposI;
        arrProf[i].setNumeroDeGrupos(cantGruposI);
        cout << "Ingrese el numero de nomina: ";
        cin >> numNominaI;
        arrProf[i].setNumeroDeNomina(numNominaI);
        opcion = 1; // solo para comenzar el sitio

        while (opcion==1 || opcion==2 || opcion==3 || opcion==4){
            cout << "\n Para el profesor " << i << " seleccione un numero de las opciones del menu. \n";
            cout << "1 Selecciona | 2 Aumento | 3 Decremento | 4 Consulta numero de grupos | 5 Terminar : ";
            cin >> opcion;

            if (opcion==1){ // Selecciona
                cout << "Ingrese el numero de nomina: ";
                cin >> numNomina;

                for(int a=1; a<(cantProfes + 1); a++){
                    n = arrProf[a].getNumeroDeNomina();
                    if (numNomina==n){
                        cout << "El numero de nomina " << numNomina << " existe y el nombre del profesor es " << arrProf[a].getNombre();
                    }
                }
            }

            else if (opcion==2){ // Aumento
                cout << "Ingrese el numero de grupos a incrementar: ";
                cin >> cantGruposF;
                arrProf[i].aumento(cantGruposF);
            }

            else if (opcion==3){ // Decremento
                cout << "Ingrese el numero de grupos a quitar: ";
                cin >> cantGruposF;
                arrProf[i].quitar(cantGruposF);
            }

            else if (opcion==4){ // Consulta num de grupos
                cout << "El numero de grupos del profesor " << i << " es " << arrProf[i].getNumeroDeGrupos();
            }

            else { // Terminar
                cout << "Programa terminado para el profesor " << i << " \n";
            }
        }
    }

    cout << "Programa terminado.";
    return 0;
}