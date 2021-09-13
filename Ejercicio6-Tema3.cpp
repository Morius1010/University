#include <iostream>

using namespace std;

int main(){
double numero1, numero2, numero3;
    cout << "Introduzca el numero uno: " << endl;
    cin >> numero1;
    cout << endl << "Introduzca el numero dos: ";
    cin >> numero2;
    cout << endl << "Introduzca el numero tres: ";
    cin >> numero3;
    if (numero1>numero2 && numero1>numero3){
        cout << "El numero mayor es: " << numero1;
    }else if (numero2>numero1 && numero2>numero3){
        cout << "El numero mayor es: " << numero2
    }else if(numero3>numero1 && numero3>numero2){
        cout << "El numero mayor es: " << numero2
    }else if(numero1==numero2 && numero1>numero3){
        cout << "El numero uno y el numero dos son iguales y mayores que el numero dos";
    }else if(numero1==numero3 && numero1>numero2){
        cout << "El numero uno y el numero tres son iguales y mayores que el numero dos";
    }else if(numero2==numero3 && numero2>numero1){
        cout << "El numero dos y el numero tres son iguales y mayores que el numero uno";
    }
     return 0;


}
