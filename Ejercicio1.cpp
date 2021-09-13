/*Crear una funcion que dado un vector de punteros y su tamaño por parámetros te lo ordene*/

//--------------------------------------------------------------------

#include <iostream>

using namespace std;

void ordenaVectores(int v[],int tam){
  int aux=0;
  int contador=0;
  for(int i=0;i<tam;i++){
    for(int j=contador;j<tam;i++){
      if(v[i]>v[j]){
       &aux=v[i];
       &v[i]=&v[j];
       &v[j]=&aux;
      }
    }
    contador++;
  }
}

int main(){
  int tam=5;
  int vect[]={2,4,1,5,3};
  int contador=1;
  ordenaVectores(vect,tam);
  for(int i=0;i<tam;i++){
    cout <<"Posicion " << i << " valor " << *vect[i] << endl;
  }
  return 0;
}
