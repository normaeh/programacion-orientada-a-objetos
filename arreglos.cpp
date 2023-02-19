// 16 de enero
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, result=0;
    int coef;
    int arrCoef[coef];
    cout << "Dame la x: ";
    cin >> x;
    cout << "Cantidad de coeficientes ";
    cin >> coef;
    for (int i=0; i<coef; i++){
        cout << "Dame el coef "<<i<<" ";
        cin >> arrCoef[i];
        if (i==0){
            result += arrCoef[i]; // result = result + arrCoef[i]
            cout << arrCoef[i];
        }
        else {
            result += arrCoef[i]*pow(x,i);
            cout << " + " << arrCoef[i] << "x" <<i << " + ";
        }
    }
    cout << " = " << result;
    return 0;
    // no esta correcto, revisar
}
