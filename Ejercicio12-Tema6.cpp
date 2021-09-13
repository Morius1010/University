/*Realiza una funcion que tome como parametros un vector de numeros y su tama no y ˜
cambie el signo de los elementos del vector*/

//---------------------------------------

#include <iostream>

using namespace std;

int cambioSignoValoresVector(int v[], int tam){
  for(int i=0;i<tam;i++){
    v[i]=v[i]*(-1);
  }
}

int main(){
 const int tamano=5;
  int v[tamano]={1,2,3,4,5};
  cambioSignoValoresVector(v,tamano);
  for(int i=0; i<tamano; i++){
    cout << v[i]<< endl;

  }
  return 0;
}

