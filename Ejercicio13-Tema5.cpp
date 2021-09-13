/*Realiza un programa que defina dos vectores de caracteres y despues almacene el con- ´
tenido de ambos vectores en un nuevo vector situando en primer lugar los elementos del
primer vector seguido por los elementos del segundo vector. Muestre el contenido
del nuevo vector en la salida estandar. */

//-------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int dato1=0, dato2=0, dato3=0;
    cout << "Introduzca el numero de datos del primer vector";
    cin >> dato1;
    cout << "Introduzca el numero de datos del segundo vector";
    cin >> dato2;
    dato3=dato1+dato2;
    int v[dato1],b[dato2],n[dato3];
    cout << "Introduzca los datos del primer vector" << endl;
    for(int i=0; i<dato1; i++){
      cin >> v[i];
    }
    cout << "Introduzca los datos del primer vector" << endl;
    for(int i=0; i<dato2; i++){
      cin >> b[i];
    }
    for(int i=0; i<dato3; i++){
      if(i<dato1){
        n[i]=v[i];
      }else{
          n[i]=b[i-dato2];
        }
      }
    for(int i=0;i<dato3;i++){
      cout << n[i];
    }
    return 0;
}
