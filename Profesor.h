#include <iostream>
#include <string>
using namespace std;

class Profesor {
    public:
        Profesor();
        void setNumeroDeNomina(int numNomP);
        void setNombre(string nombreP);
        void setNumeroDeGrupos(int numGruposP);
        int getNumeroDeNomina();
        string getNombre();
        int getNumeroDeGrupos();
        int quitar(int cant);
        int aumento(int cant);
    private: 
        int numeroDeNomina;
        string nombre;
        int numeroDeGrupos;
};

Profesor::Profesor(){
    numeroDeNomina = 0;
    nombre = " ";
    numeroDeGrupos = 0;
}

void Profesor::setNumeroDeNomina(int numNomP){
    numeroDeNomina = numNomP;
}

void Profesor::setNombre(string nombreP){
    nombre = nombreP;
}

void Profesor::setNumeroDeGrupos(int numGruposP){
    numeroDeGrupos = numGruposP;
}

int Profesor::getNumeroDeNomina(){
    return(numeroDeNomina);
}

string Profesor::getNombre(){
    return(nombre);
}

int Profesor::getNumeroDeGrupos(){
    return(numeroDeGrupos);
}

int Profesor::quitar(int cant){
    if(cant<numeroDeGrupos){
        numeroDeGrupos = numeroDeGrupos - cant;
        cout << "True";
        return(numeroDeGrupos);
    }
    else {
        cout << "False";
        return(numeroDeGrupos);
    }
}

int Profesor::aumento(int cant){
    numeroDeGrupos = cant + numeroDeGrupos;
    return(numeroDeGrupos);
}