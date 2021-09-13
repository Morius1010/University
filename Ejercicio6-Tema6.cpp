/*Realice una funcion que determine si un entero positivo es primo.*/

//---------------------------------------------------

#include <iostream>
#include <cstdlib>
using namespace std;

bool esPrimo(int numero){
  bool chivato=false;
  int restocero=0;
  for(int i = 1; i <= numero; i++){
      if (numero%i==0){
        restocero++;
      }
  }
  if (restocero==2){
    chivato=true;
  }
  return chivato;
}


int main(){
  int numero=0;
  cout << "Introduzca un numero y comprobaremos si es primo o no: ";
  cin >> numero;
  if(esPrimo(numero)==true){
    cout << "El numero es primo";
  } else{
    cout << "El numero no es primo";
  }
  return 0;
}
