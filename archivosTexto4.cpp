#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
// 19 de enero

int main() { 
    char letral, letra2;
    ifstream archEnt;
    archEnt.open("archivo.txt");
    while (archEnt >> letral >> letra2){
        cout<<letral << "\t" << letra2 << endl;
    }
    archEnt.close();
    return 0;
}