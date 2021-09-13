/*
11. Escriba un programa que solicite una edad (un entero) e indique en la salida estandar
si la edad introducida esta en el rango[18, 25]
*/
#include <iostream>

using namespace std;

int main(){
    int edad;
    cout << "Introduzca su edad:" << endl;
    cin >> edad;
    cout << endl;
    if (edad>=18 && edad<=25){
        cout << "Su edad es: " << edad << " y esta en el rango [18, 25]";
    }else{
        cout << "Su edad es: " << edad << " y no esta en el rango [18, 25]";
    }
    return 0;
}
