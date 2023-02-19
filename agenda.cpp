/** Norma Elizondo 567661
    Doy mi palabra de que he realizado esta act con integridad academica.
    Ultima modificacion: 13 de feb
    
    Actividad Composición
*/

#include <iostream>
#include <string>
#include "Evento.h"
using namespace std;

int main() {
    int cantidad, hora, minu, dura;
    string asunto;
    cout << "Ingrese el numero de eventos: ";
    cin >> cantidad;
    Evento arrE[cantidad];
    for (int i=1; i<(cantidad+1); i++){
        cout << "Ingrese la hora del evento " << i << ": ";
        cin >> hora;
        cout << "Ingrese los minutos del evento " << i << ": ";
        cin >> minu;
        Reloj paso;
        paso.setHora(hora);
        paso.setMinu(minu);
        arrE[i].setHoraI(paso);
        cout << "Ingrese la duracion del evento " << i << ": ";
        cin >> dura;
        arrE[i].setDuracion(dura);
        cout << "Ingrese el asunto del evento " << i << ": ";
        cin >> asunto;
        arrE[i].setAsunto(asunto);
    }

    for (int i=1; i<(cantidad+1); i++){
        cout << "Hora del evento " << i << ": ";
        arrE[i].getHoraI().muestra();
        cout << "Duracion del evento " << i << ": " << arrE[i].getDuracion() << "\n";
        cout << "Asunto del evento " << i << ": " << arrE[i].getAsunto() << "\n";
    }

    return 0;
}