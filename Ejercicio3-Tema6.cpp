/*Realice una funcion que tome como par ´ ametros los extremos de un intervalo y un ´
valor y devuelva un valor logico que indique si el valor pertenece al intervalo cerrado ´
formado por los extremos. Por ejemplo, si los extremos son a y b, con a <= b, y el
valor es x, entonces debe devolver si x ∈ [a, b].
*/
//-----------------------------------------------------------------------
#include <iostream>

using namespace std;

bool intervalo(int menor, int mayor, int valor){
  bool logico=true;
  if(valor>menor && valor<mayor){
    logico=true;
  } else{
    logico=false;
  }
  return logico;
}

int main(){
  int menor=0, mayor=0, valor=0;
  cout << "Introduzca el valor menor del intervalo cerrado: " << endl;
  cin >> menor;
  cout << "Introduzca el valor mayor del intervalo cerrado: " << endl;
  cin >> mayor;
  cout << "Introduzca un valor para comprobar si pertenece al intervalo" << endl;
  cin >> valor;
  if(intervalo(menor,mayor,valor)==true){
    cout << "El valor pertenece al intervalo";
  } else{
    cout << "El valor no pertenece al intervalo";
  }
  return 0;
}
