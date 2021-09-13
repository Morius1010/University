/*Realiza una funcion que tome como parametro un numero real y devuelva su valor ´
absoluto.
*/

//-------------------------------------------------------------
#include <iostream>
#include <cmath>

using namespace std;

int absoluto(int numero){
  if(numero<0){
    numero=numero*(-1);
  }
  return numero;
}

int main(){
  int numero=0;
  cout << "Introduzca un numero para saber su valor absoluto: ";
  cin >> numero;

  cout << "Su valor absoluto es: " << absoluto(numero);
  return 0;
}
