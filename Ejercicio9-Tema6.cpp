/*Escribe una funcion que intercambie el valor de sus dos parametros*/

//-----------------------------------------------------------------

#include <iostream>

using namespace std;

int intercambioValores(int &num1,int &num2){
  int aux=0;
  aux=num1;
  num1=num2;
  num2=aux;

  return num1,num2;
}


int main(){
  int pruebanum1=2,pruebanum2=3;
  cout << pruebanum1 << pruebanum2 << endl;
  intercambioValores(pruebanum1,pruebanum2);
  cout << pruebanum1 << pruebanum2  ;
  return 0;
}
