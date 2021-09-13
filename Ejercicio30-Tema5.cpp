/*Escribir un programa que solicite de la entrada estandar un nombre y compruebe si el ´
nombre se encuentra o no en un vector iniciado con una serie de nombres.
*/

//---------------------------------------------------
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
  string v[5]={"Jose", "Juan", "Francisco", "Antonio", "Roberto"}, nombre="";
  bool esta=false;
  cout << "Introduzca el nombre"<< endl;
  getline(cin>>ws,nombre);

  for(int i=0;i<5;i++){
    if(v[i]==nombre){
      esta=true;
    }
  }
  if(esta==true){
    cout << "El nombre se encuentra en nuestra base de datos";
  }else{
    cout << "El nombre no se encuentra en nuestra base de datos";
  }
  return 0;
}
