class Fraccion{
  public:
    Fraccion();
    Fraccion(int num, int deno);
    void setNum(int num);
    void setDeno(int deno);
    int getNum();
    int getDeno();
    double calcValorReal();

  private:
    int numerador;
    int denominador;
};

Fraccion::Fraccion(){
  numerador=0;
  denominador=1;
}
Fraccion::Fraccion(int num, int deno){
  numerador=num;
  denominador=deno;
}
void Fraccion::setNum(int num){
  numerador=num;
}
void Fraccion::setDeno(int deno){
  denominador=deno;
}

int Fraccion::getNum(){
  return numerador;
}
int Fraccion::getDeno(){
  return denominador;
}

double Fraccion::calcValorReal(){
  return numerador/(denominador*1.0);
}