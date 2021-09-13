/*Realiza una funcion que tome como parametros un vector de enteros y su tamano y ˜
devuelva un vector con los elementos impares del vector recibido.
*/

//----------------------------

#include <iostream>

using namespace std;
void creoVectordeImpares(int v[], int &tam){
  int tamaux=0,aux=0;
  for(int i=0;i<tam;i++){
    if(v[i]%2!=0){
      tamaux++;
    }
  }
  cout << "TAM AUX: " << tamaux << endl;
  int x[tamaux]= {};
  for(int i=0;i<tam;i++){
    if(v[i]%2!=0){
      x[aux]=v[i];
      aux++;
    }
  }
  for(int i = 0; i < tamaux; i++){
    v[i] = x[i];
  }
  /*
  for(int i=0; i<tamaux; i++){
    cout << x[i]<< endl;

  }
  */
  tam = tamaux;
}

int main(){
  int tamano=5;
  int v[tamano]={1,2,3,4,5};
  int w[]={};
  creoVectordeImpares(v,tamano);

  cout << sizeof(w) << endl;
  for(int i=0; i<tamano; i++){
    cout << v[i]<< endl;

  }
  return 0;
}

