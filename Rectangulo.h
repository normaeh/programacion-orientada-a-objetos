class Rectangulo {
  public:
    double calcArea();
    void setLargo(int largoP);
    void setAncho(int anchoP);
    double getLargo(){return largo;};
    double getAncho(){return ancho;};
  private:
    double largo, ancho;
};

double Rectangulo::calcArea(){
  return largo*ancho;
}

void Rectangulo::setAncho(int anchoP){
  ancho=anchoP;
}

void Rectangulo::setLargo(int largoP){
  largo=largoP;
}