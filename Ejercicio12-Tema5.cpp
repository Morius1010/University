/*. Realice un programa que dado un vector de numeros reales obtenga la menor diferen- ´
cia absoluta entre dos elementos consecutivos del vector. Puedes usar la funcion´ abs
de la biblioteca cmath para calcular el valor absoluto de una expresion—por ejemplo, ´
abs(−2) vale 2.*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int dato=0;
    cout << "Introduzca el numero de datos del vector"<< endl;
    cin >> dato;
    float v[dato], dif=dato,aux=0;
    cout << "Introduzca los valores en el vector" << endl;
    for(int i=0; i<dato;i++){
        cin >> v[i];
    }
    for(int i=0;i<dato;i++){
        aux=v[i]-v[i+1];
        if (abs(aux)<dif){
            dif=abs(aux);
        }
    }
    cout << "La menor diferencia absoluta del vector es " << dif;
    return 0;
}
