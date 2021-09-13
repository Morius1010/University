/*Escribe un programa que defina un vector de numeros y muestre en la salida estandar ´
el vector en orden inverso—del ultimo al primer elemento. Nota: tendras que generar ´
los indices en orden inverso para resolver el ejercicio.*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v[10];
    cout << "Introduzca los valores en el vector";
    for(int i=0;i<10;++i){
        cin >>v[i];
    }

    for(int i=9;i>=0;i--){
        cout << "Valor " << v[i] << " posicion: " << i << endl;
    }

    return 0;


}
