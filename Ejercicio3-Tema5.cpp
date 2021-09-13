#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v[10], suma=0;
    cout << "Introduzca los valores en el vector" << endl;
    for(int i=0;i<10;i++){
        cin >> v[i];
    }
    for(int i=0;i<10;i++){
        suma=suma+v[i];
    }
    cout << "La suma de los numeros es: " << suma;
    return 0;
}
