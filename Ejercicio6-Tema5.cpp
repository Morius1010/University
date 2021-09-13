/*6. Escriba un programa que defina un vector de numeros enteros, solicite al usuario un ´
entero y muestre un mensaje en la salida estandar indicando si el entero introducido ´
por el usuario se encuentra en el vector.*/
#include <iostream>

using namespace std;

int main(){
    int v[3]={1,2,3}, numero=0, chivato=0;
    cout << "Introduzca el numero a comparar en el vector" << endl;
    cin >> numero;
    for(int i=0;i<3;i++){
        if(numero==v[i]){
            chivato=1;
        }
    }
    if (chivato==1){
        cout << "El numero introducido se encuentra en el vector" << endl;
    } else{
        cout << "El numero introducido NO se encuentra en el vector" << endl;
    }
    return 0;
}
