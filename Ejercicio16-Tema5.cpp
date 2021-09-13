/*Realice un programa como el del ejercicio anterior pero sin utilizar vectores auxiliares*/

//---------------------------------------------------------------------------------------------------------

#i

nclude <iostream>
#include <cmath>

using namespace std;

int main(){

int numdatos=0,numpar=0,numimpar=0,par=0,impar=0;
cout << "Introduzca el numero de datos" << endl;
cin >> numdatos;
cout << "Introduzca los datos en el vector";
int v[numdatos];
for(int i=0;i<numdatos;i++){
  cin >> v[i];
}
for(int i=0;i<numdatos;i++){
  if(v[i]%2==0){
    cout << "El numero es par y mantiene posicion";
  }else{
    for(int j=i;j<numdatos;j++){
      if(v[j]%2==0){
          impar=v[i];
          v[i]=v[j];
          v[j]=impar;
      }
    }
  }
}
for(int i=0;i<numdatos;i++){
  cout << " " << v[i] << " ";


}






}
