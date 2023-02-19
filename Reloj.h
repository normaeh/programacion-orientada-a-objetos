#include <iostream>
using namespace std;

class Reloj{
  public: 
      Reloj();
      void setHora(int horaP);
      void setMinu(int minuP);
      int getHora();
      int getMinu();
      void muestra();
  private:
      int hora, minu;
};

Reloj::Reloj(){
  hora=0;
  minu=0;
}

void Reloj::setHora(int horaP){
  hora = horaP;
}

void Reloj::setMinu(int minuP){
  minu = minuP;
}

int Reloj::getHora(){
  return hora;
}

int Reloj::getMinu(){
  return minu;
}

void Reloj::muestra(){
  if (hora < 10) {
    cout << "0" << hora << ":";
  }
  else {
    cout << hora << ":";
  }
  if (minu < 10) {
    cout << "0" << minu << "\n";
  }
  else {
    cout << minu << "\n";
  }
}