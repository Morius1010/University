/*Escribe un programa que defina un vector de numeros y calcule la suma acumulada ´
de sus elementos. Por ejemplo, si el vector contiene los numeros ´ {1, 3, 2, 7} su suma
acumulada es {1, 4, 6, 13}.*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v[10], suma;
    cout << "Introduzca los valores en el vector" << endl;
    for(int i=0;i<10;i++){
        cin >> v[i];
    }
    for(int i=0;i<10;i++){
        suma=suma+v[i];
        cout << "La suma acumulada es " << suma << endl;
    }
    return 0;
}
