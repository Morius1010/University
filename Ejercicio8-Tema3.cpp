/*
8. Realice un programa que lea un valor entero y determine si se trata de un numero ´
par o impar. Sugerencia: un numero es par si el resto de dividirlo entre dos es cero. ´
Generalice el programa para que lea dos enteros, n y m, y determine si n divide a m.
*/
#include <iostream>

using namespace std;

int main(){
    int valor;
    cout << "Introduzca un numero entero: "<< endl;
    cin >> valor;
    cout << endl << "El valor introducido es: "<< valor << endl;
    if(valor%2==0){
        cout << "El numero " << valor << " es par";
    }else{
        cout << "El numero " << valor << " es impar";
    }
    return 0;
}
