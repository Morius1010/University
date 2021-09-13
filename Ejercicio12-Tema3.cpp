/*Escriba un programa que lea de la entrada estandar tres numeros. Despues debe leer
un cuarto numero e indicar si el numero coincide con alguno de los introducidos con
anterioridad. Utiliza una unica instruccion if con una expresion logica compuesta*/
#include <iostream>

using namespace std;
int main(){
    int numero1, numero2, numero3, numero4;
    cout << "Introduce los 3 primeros numeros respectivamente: ";
    cin >> numero1 >> numero2 >> numero3;
    cout << "Los numeros introducidos son respectivamente: " << numero1 << " " << numero2 << " " << numero3 << endl;
    cout << "Introduce el cuarto numero ";
    cin >> numero4;
    if (numero4==numero1 || numero4==numero2 || numero4==numero3){
        cout << "El numero: " << numero4 << " coincide con uno de los tres numeros introducidos anteriormente";
    }else{
        cout << "El numero " << numero4 << " no coincide con alguno de los tres numeros introducidos anteriormente";
    }
    return 0;
}
