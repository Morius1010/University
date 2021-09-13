/*
Escriba un programa que lea de la entrada estandar un caracter e indique en la salida
estandar si el caracter es una vocal minuscula o no
*/


#include <iostream>

using namespace std;

int main(){
        char letra;
        cout << "Introduzca un caracter que sea una vocal: " << endl;
        cin >> letra;
        cout << endl << "El caracter introducido es: " << letra << endl;
        if(letra=='a' || letra=='A' || letra=='e' || letra=='E' || letra=='i' || letra=='I' || letra=='o' || letra=='O' || letra=='u' || letra=='U'){
        if(isupper(letra)==false){
            cout << "La vocal es una minuscula";
        }else{
            cout << "La vocal es una mayuscula";
        }
        /*
        if(letra > 'z'){
          cout << "La vocal es una minuscula";
        }else{
            cout << "La vocal es una mayuscula";
        }
        */
        }else{
            cout << "El caracter no es una vocal";
        }
        return 0;
}
