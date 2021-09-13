/* ∗ D e s c r i p c i o´n : Calcula la posicion del menor elemento del
∗ vector entre dos posiciones
∗ Parametros de entrada :
∗ − v : el vector
∗ − i : posicion inicial
∗ − f : posicion final
∗ Precondiciones: i <= f
∗ Valor de retorno : la posicion del menor elemento del vector
∗ entre las posiciones [ i , f ]
∗ */

//-------------------------------------------------

#include <iostream>

using namespace std;

void seleccion (int v [] , int tamv) {
  for (int i = 0 ; i < tamv − 1 ; ++ i) {
    int posmin = minimo (v , i , tamv −1);
    if (posmin!= i)
      intercambia (v[i], v[posmin]) ;
  }
}
int minimo(int v[],int i, int f){
  int mini=i;
    for(int x=i;i<=f;i++){
      if(minimo>v[x]){
        minimo=x;
      }
    }
  return minimo;
}
