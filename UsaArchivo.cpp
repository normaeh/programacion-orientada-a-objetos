#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Programa que lee un archivo y agrega comas a los numeros.

// Ultima modificación: 24 de enero de 2023
// Norma Elizondo Hubbard 567661
// Doy mi palabra de que he realizado esta act con integridad académica.

int main() {
  ifstream archivoE;
  archivoE.open("archivoU.txt");
  
  int n=0; // numero de renglones
  int tamano[1000]; // el codigo se corre para 6 renglones.
  string datos[1000]; 
  
  while (!archivoE.eof()){ // se almacenan los datos
    getline(archivoE,datos[n]);
    tamano[n]=datos[n].length();
    n++;
  }
  archivoE.close();
   ofstream archivoSal;
  archivoSal.open("archivoSalidaU.txt"); // se crea un archivo de salida
  
  for (int contador=0; n>contador; contador++){ // ciclo para agregar las comas
    string datos0=datos[contador];
    
    // primer caso
    if (tamano[contador]==1 || tamano[contador]==2 || 
    tamano[contador]==3){
      archivoSal<<datos0<<endl;
    } 

    // segundo caso
    else if (tamano[contador]==4 || tamano[contador]==5||       
    tamano[contador]==6){
      
      datos0.insert(tamano[contador]-3,",");
      archivoSal<<datos0<<endl;
    }

    // tercer caso
    else if (tamano[contador]==7 || tamano[contador]==8||       
    tamano[contador]==9){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      archivoSal<<datos0<<endl;
    }

    // cuarto caso
    else if (tamano[contador]==10 || tamano[contador]==11||       
    tamano[contador]==12){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      archivoSal<<datos0<<endl;
    }

    
    // quinto caso
    else if (tamano[contador]==13 || tamano[contador]==14||       
    tamano[contador]==15){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      datos0.insert(tamano[contador]-12,",");
      archivoSal<<datos0<<endl;
    }

// sexto caso
    else if (tamano[contador]==16 || tamano[contador]==17||       
    tamano[contador]==18){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      datos0.insert(tamano[contador]-12,",");
      datos0.insert(tamano[contador]-15,",");
      archivoSal<<datos0<<endl;
      }

// septimo caso
    else if (tamano[contador]==19 || tamano[contador]==20||       
    tamano[contador]==21){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      datos0.insert(tamano[contador]-12,",");
      datos0.insert(tamano[contador]-15,",");
      datos0.insert(tamano[contador]-18,",");
      archivoSal<<datos0<<endl;
      }

    // octavo caso
    else if (tamano[contador]==22 || tamano[contador]==23||       
    tamano[contador]==24){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      datos0.insert(tamano[contador]-12,",");
      datos0.insert(tamano[contador]-15,",");
      datos0.insert(tamano[contador]-18,",");
      datos0.insert(tamano[contador]-21,",");
      archivoSal<<datos0<<endl;
      }

    // noveno caso
    else if (tamano[contador]==25 || tamano[contador]==26||       
    tamano[contador]==27){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      datos0.insert(tamano[contador]-12,",");
      datos0.insert(tamano[contador]-15,",");
      datos0.insert(tamano[contador]-18,",");
      datos0.insert(tamano[contador]-21,",");
      datos0.insert(tamano[contador]-24,",");
      archivoSal<<datos0<<endl;
      }

      // ndecimo caso
    else if (tamano[contador]==28 || tamano[contador]==29||       
    tamano[contador]==30){
      datos0.insert(tamano[contador]-3,",");
      datos0.insert(tamano[contador]-6,",");
      datos0.insert(tamano[contador]-9,",");
      datos0.insert(tamano[contador]-12,",");
      datos0.insert(tamano[contador]-15,",");
      datos0.insert(tamano[contador]-18,",");
      datos0.insert(tamano[contador]-21,",");
      datos0.insert(tamano[contador]-24,",");
      datos0.insert(tamano[contador]-27,",");
      archivoSal<<datos0<<endl;
      }
    
  }
}
