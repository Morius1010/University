/*Realice un programa que lea de la entrada estandar 10 numeros e indique en la salida ´
estandar si el numero cero estaba entre los numeros leıdos.*/
#include <iostream>

using namespace std;

int main(){
    float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    cout << "Introduzca 10 numeros";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
    if(n1==0 || n2==0 || n3==0 || n4==0 || n5==0 || n6==0 || n7==0 || n8==0 || n9==0 || n10==0) {
        cout << "El numero 0 esta entre los 10 numeros introducidos";
    }else{
        cout << "El numero 0 no esta entre los 10 numeros introducidos";
    }

    return 0;
}
