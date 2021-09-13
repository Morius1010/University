/*Escriba una funcion que tome como parametro un vector y su tamano y devuelva ˜
el maximo y el mınimo de sus elementos. Utilice parametros de tipo puntero para ´
especificar el vector y los parametros de salida de la funcion. */

//-----------------------------------------------------

#include <iostream>

using namespace std;

int* maxmin(int v[], int tam){
  int util=2;
  int maxim=v[0],minim=v[0];
  for(int i=0;i<tam;i++){
        if(maxim<v[i]){
          maxim=v[i];
        }
        if(minim>v[i]){
          minim=v[i];
        }
      }
 v=new int[util];
 v[0]=maxim;
 v[1]=minim;
 return v;
}

int main(){
  int v[]={4,5,6,7,8};
  int tamano=5;
  int *puntero,*pmaxmin;
  puntero=v;
  pmaxmin = maxmin(puntero,tamano);
  cout << pmaxmin[0] << "," << pmaxmin[1] << endl;

  return 0;
}
