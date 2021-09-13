/*
13. Realice un programa que lea de la entrada estandar la longitud de los tres lados de ´
un triangulo y muestre en la salida estandar que tipo de triangulo es, de acuerdo con ´
la siguiente casuıstica—a denota la longitud del lado mas largo y b y c denotan la
longitud de los otros dos lados:
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    cout << "Introduce los tres lados del triangulo 'a', 'b' y 'c' respectivamente siendo 'a' el lado más largo del triangulo: ";
    cin >> a >> b >> c;
    if(a>=(b+c)){
        cout << "No es un triangulo";
    }else if(pow(a, 2)==(pow(b, 2)+pow(c, 2))){
        cout << "Es un triangulo rectangulo";
    }else if(pow(a, 2)<(pow(b, 2)+pow(c, 2))){
        cout << "Es un triangulo acutangulo";
    }else if(pow(a, 2)>(pow(b, 2)+pow(c, 2))){
        cout << "Es un triangulo obtusangulo";
    }
    return 0;
}
