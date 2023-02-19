// Norma Elizondo 567661
// Doy mi palabra de que he realizado esta act con integridad academica.

#include <iostream>
using namespace std;
#include "Reloj.h"

int main() {
  Reloj horaI, horaF;
  int hora, minu;
  cout << "Ingresa la hora inicial del reloj: ";
  cin >> hora;
  cout << "Ingresa los minutos iniciales del reloj: ";
  cin >> minu;
  horaI.setHora(hora);
  horaI.setMinu(minu);
  cout << "El reloj inicial es: ";
  horaI.muestra();

  cout << "Ingresa la hora final del reloj: ";
  cin >> hora;
  cout << "Ingresa los minutos finales del reloj: ";
  cin >> minu;
  horaF.setHora(hora);
  horaF.setMinu(minu);
  cout << "El reloj final es: "
       << "\n";
  horaF.muestra();

  return 0;
}