#include <iostream>

using namespace std;
int main(){
    double numero1, numero2, numero3, numero4;

    cout << "Introduzca el numero1: " << endl;
    cin >> numero1;
    cout << endl << "Introduzca el numero2: "<< endl;
    cin >> numero2;
    cout << endl << "Introduzca el numero3: "<< endl;
    cin >> numero3;
    cout << endl << "Introduzca el numero4: "<< endl;
    cin >> numero4;
    if(numero1>numero2 && numero1>numero3 && numero1>numero4){
        cout <<"El numero 1 es el mayor: "<< numero1;
    }else if(numero2>numero1 && numero2>numero3 && numero2>numero4){
        cout <<"El numero 2 es el mayor: "<< numero2;
    }else if(numero3>numero1 && numero3>numero2 && numero3>numero4){
        cout <<"El numero 3 es el mayor: "<< numero3;
    }else if(numero4>numero1 && numero4>numero2 && numero4>numero3){
        cout <<"El numero 4 es el mayor: "<< numero4;
    }else if(numero1==numero2 && numero1==numero3 && numero1==numero4){
        cout <<"Todos los numeros son iguales";
    }else if(numero1==numero2 && numero1>numero3 && numero1>numero4){
        cout <<"El numero uno y el numero dos son iguales y son los mayores";
    }else if(numero1==numero3 && numero1>numero2 && numero1>numero4){
        cout <<"El numero uno y el numero tres son iguales y son los mayores";
    }else if(numero1==numero4 && numero1>numero2 && numero1>numero3){
        cout <<"El numero uno y el numero cuatro son iguales y son los mayores";
    }else if(numero2==numero3 && numero2>numero1 && numero2>numero4){
        cout <<"El numero dos y el numero tres son iguales y son los mayores";
    }else if(numero2==numero4 && numero2>numero1 && numero2>numero3){
        cout <<"El numero dos y el numero cuatro son iguales y son los mayores";
    }else if(numero3==numero4 && numero3>numero1 && numero3>numero2){
        cout <<"El numero tres y el numero cuatro son iguales y son los mayores";
    }else if(numero3==numero4 && numero3==numero1 && numero3>numero2){
        cout <<"El numero tres, el numero cuatro y el numero uno son iguales y son los mayores";
    }else if(numero3==numero4 && numero3>numero1 && numero3==numero2){
        cout <<"El numero tres, el numero cuatro y el numero dos son iguales y son los mayores";
    }else if(numero1==numero2 && numero1==numero3 && numero1>numero3){
        cout <<"El numero uno, el numero dos y el numero tres son iguales y son los mayores";
    }else if(numero1==numero2 && numero1==numero4 && numero1>numero3){
        cout <<"El numero uno, el numero dos y el numero cuatro son iguales y son los mayores";
    }
    return 0;


}
