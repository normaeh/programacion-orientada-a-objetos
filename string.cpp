// 16 de enero
#include <iostream>
#include <string>
using namespace std;

// Ejercicio 1
// Un palíndromo es un string que se lee igual hacia adelante y hacia atrás. Escribe un programa que pida un string que contenga una frase y que muestre un mensaje que indique si se trata de un palíndromo o no. NOTA que la frase puede contener varias palabras y que puede contener mayúsculas y minúsculas. Ejemplos de frases que son palíndromes: Somos o no somos.
// Anita lava la tina.
// 12321

int main() {
  string frase;
  getline(cin,frase);
  int pos = frase.find(' ');
  while (pos>-1){
    frase.erase(pos,1);
    pos=frase.find(' ');
  }
  cout << frase;
  //for (int i=0; i<= frase.lenght()/2;)

  // no esta correcto, revisar
}