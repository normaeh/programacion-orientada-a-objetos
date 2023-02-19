#include <iostream>
#include <string>
#include <fstream> // este se agrego por los files
using namespace std; 

// 19 de enero actividad
// Norma Elizondo y Hannah Gracia
// Damos nuestra palabra de que hemos realizado esta act con integridad academica

int main (){
    string frase[4]; 
    ifstream archEnt;
    archEnt.open("frases.txt");
    int cont = 0;
    while (!archEnt.eof() && cont<4){
        getline(archEnt,frase[cont]);
        cont++;
    }
    string frase0=frase[0];
    string frase1=frase[1];
    string frase2=frase[2];
    string frase3=frase[3];

    archEnt.close();

    ofstream archSal;
    archSal.open("salida.txt");
    int num, espacio;
    
    for (int pos=0;pos<frase0.length();pos++) {
        if(frase0[pos]==' '){
        frase0[pos+1]=toupper(frase0[pos+1]);
        }
    }
    archSal<<frase0<<endl;
    
    for (int pos=0;pos<frase1.length();pos++) {
        if(frase1[pos]==' '){
        frase1[pos+1]=toupper(frase1[pos+1]);
        }
    }
    archSal<<frase1<<endl;

    for (int pos=0;pos<frase2.length();pos++) {
        if(frase2[pos]==' '){
        frase2[pos+1]=toupper(frase2[pos+1]);
        }
    }
    archSal<<frase2<<endl;

    for (int pos=0;pos<frase3.length();pos++) {
        if(frase3[pos]==' '){
        frase3[pos+1]=toupper(frase3[pos+1]);
        }
    }
    archSal<<frase3<<endl;
    archSal.close();
    return 0;
}
