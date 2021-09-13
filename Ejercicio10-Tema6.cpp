/*Realice una funcion que tome como parametros un vector de numeros y devuelva la ´
suma de sus elementos.*/

//------------------------------------

#include <iostream>

using namespace std;

int sumaValoresVector(int v[], int tam){
  int suma=0;
  for(int i=0;i<tam;i++){
    suma+=v[i];
  }

  return suma;
}

int main(){
 const int tamano=5;
  int v[tamano]={1,2,3,4,5};
  cout << sumaValoresVector(v,tamano);
  return 0;
}
