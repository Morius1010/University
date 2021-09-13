/*Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre ´
en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena. */

//-------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main(){
  int tam=0;
  string nombre="";
  cout << "Introduzca una cadena de caracteres" << endl;
  getline(cin>>ws,nombre);
  tam=nombre.length();
  cout << "La longitud de la cadena de caracteres es " << tam << endl;
  int contador=0,aux=0;
  for(int i=0;i<tam;i++){
    contador=0;
    for(int j=0;j<tam;j++){
      if(nombre[i]==nombre[j]){
          contador+=1;
     }
    }
    cout << nombre[i] << " ocurre " << contador << " vez/veces" << " ";
  }
  return 0;
}
