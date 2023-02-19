class Complejo {
    public:
        Complejo();
        Complejo(double realP, double imaP);
        double getReal();
        double getIma();
        void setReal(double realP);
        void setIma(double imaP);
        Complejo suma(Complejo numP); 
        Complejo resta(Complejo numP);

    private:
        double real;
        double imaginario;
};

Complejo::Complejo(){
    real=0;
    imaginario=0;
}

Complejo::Complejo(double realP, double imaP){
    real = realP;
    imaginario = imaP;
}

double Complejo::getReal(){
    return real;
}

double Complejo::getIma(){
    return imaginario;
}

void Complejo::setReal(double realP){
    real = realP;
}

void Complejo::setIma(double imaP){
    imaginario = imaP;
}

Complejo Complejo::suma(Complejo numP){
    Complejo paso;
    paso.real = real + numP.real;
    paso.imaginario = imaginario + numP.imaginario;
    return paso;
}

Complejo Complejo::resta(Complejo numP){
    Complejo paso;
    paso.real = real - numP.real;
    paso.imaginario = imaginario - numP.imaginario;
    return paso;
}