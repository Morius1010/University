#include <iostream>

using namespace std;

int main(){
    int numero, contador;
    contador=0;
    cout << "SI DESEA ACABAR CON EL PROCESO INTRODUZCA UN 0"<< endl;
    while(numero>0){
        cout << "Introduzca un numero: ";
        cin >> numero;
        contador=contador+1;
    }
    cout << "El numero de valores introducidos mayores que 0 es: " << contador-1;
    return 0;
}
