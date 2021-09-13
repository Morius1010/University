/*Realice un programa que defina un vector de enteros y situe al principio del vector los ´
enteros pares y despues los impares. Sugerencia: utilice dos vectores auxiliares*/

//----------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int numerototal=0,pares=0,impares=0,indexpares=0, indeximpares=0;
  cout << "Introduzca el numero de datos del vector: ";
  cin >> numerototal;
  int v[numerototal];
  int salida[numerototal];
  for(int i=0;i<numerototal;i++){
    cin >> v[i];
    if(v[i]%2==0){
      pares+=1;
    }else{
      impares+=1;
    }
  }
  int b[pares], m[impares];
  for(int i=0;i<numerototal;i++){
    if(v[i]%2==0){
      b[indexpares]=v[i];
      indexpares+=1;
    }else{
      m[indeximpares]=v[i];
      indeximpares+=1;
    }
  }
  for(int i=0;i<pares;i++){
  v[i]=b[i];
  }
int indexaux=0;
  for(int i=pares;i<numerototal;i++){
  if(indexaux<impares){
    v[i]=m[indexaux];
    indexaux+=1;
    }
  }
  for (int i=0; i<numerototal; i++){
    cout << " " << v[i] <<  " ";
  }
}
