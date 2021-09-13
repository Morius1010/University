#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int suma;
    for(int i=1;i<=10;i++){
        suma=suma+pow(i,2);
    }
    cout << "La suma de los cuadrados de los numeros enteros del 1 al 10 es " << suma;

}
