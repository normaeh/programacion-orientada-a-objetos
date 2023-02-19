/*  Norma Elizondo Hubbard 567661
    Doy mi palabra de que he realizado esta actividad con integridad academica
    Ultima modificacion: 6 de feb
*/

/*  1. Escribe la clase Fracción que debe contener (puedes usar la que ya hiciste antes):
• atributos para el numerador y el denominador 
• Constructor default que inicializa la fracción con ½ 
• Constructor con parámetros que inicializa la fracción con el valor que recibe 
• Método de acceso para cada uno de sus atributos 
• Método de modificación para cada uno de sus atributos 
• Método CalcValorReal que calcule el valor decimal de la fracción (por ejemplo si la fracción es ½ debe calcular el valor 0.5)

2. Ahora escribe la aplicación: (programa .cpp que usa la clase Fracción)

Crea un arreglo de objetos de tipo fraccion.
Pregunta al usuario cuántos objetos de tipo fraccion quiere guardar.
Luego pide al usuario los valores para cada fraccion y guárdalas en el arreglo.
Después la aplicación debe mostrar letreros como los siguientes, en donde se muestre el valor de cada uno de los objetos que hay en el arreglo.

El valor de la fracción 1/3 equivale a 0.333

El valor de la fracción 1/5 equivale a 0. 2
*/

#include <iostream>
using namespace std;
#include "Fraccion.h"

int main() {
    int n, num, deno;
    cout << "Cuantas fracciones desea realizar? ";
    cin >> n;
    Fraccion frac[n];

    for (int i=1; i<(n+1); i++){
        cout << "Ingresa el numerador de la "<<i<<" fraccion: ";
        cin >> num;
        frac[i].setNum(num);
        cout << "Ingresa el denominador de la "<<i<<" fraccion: ";
        cin >> deno;
        frac[i].setDeno(deno);
    }
    for  (int i=1; i<(n+1); i++){
        cout << "El valor de la fracción " << frac[i].getNum() <<"/"<<frac[i].getDeno()<<" es "<<frac[i].calcValorReal()<<"\n";
    }
}