#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
// 19 de enero

int main() {
   string linea;
    ifstream archEnt;
    archEnt.open("archivo.txt");
    while (!archEnt.eof()){
        getline(archEnt, linea);
        cout<<linea<<endl;
    }
    archEnt.close();
    return 0;
}