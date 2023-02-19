#include <iostream>
#include "Reloj.h"
#include <string>
using namespace std;

class Evento{
    public:
        Evento();
        void setHoraI(Reloj relojP);
        void setDuracion(int duraP);
        void setAsunto(string asuntoP);
        Reloj getHoraI();
        int getDuracion();
        string getAsunto();

    private:
        Reloj horaInicio;
        int duracion;
        string asunto;
};

Evento::Evento(){
    duracion = 10;
    asunto = "n/a";
    Reloj horaInicio;
}

void Evento::setHoraI(Reloj relojP){
    horaInicio = relojP;
}

void Evento::setDuracion(int duraP){
    duracion = duraP;
}

void Evento::setAsunto(string asuntoP){
    asunto = asuntoP;
}

Reloj Evento::getHoraI(){
    return horaInicio;
}

int Evento::getDuracion(){
    return duracion;
}

string Evento::getAsunto(){
    return asunto;
}