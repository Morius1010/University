/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre
la diagonal principal de la matriz.
*/

//-------------------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

int matriz[3][3],opcion=0;
  do{
    opcion=0;
    cout << "Seleccione una opcion(1-3): " << endl;
    cout << "[1].-Introducir una nueva matriz" << endl;
    cout << "[2].-Sacar la diagonal principal de la matriz" << endl;
    cout << "[3].-Salir" << endl;
    cin >> opcion;
    if(opcion==1){
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          cout << "Introduzca los datos para la posicion " << i << " " << j << endl;
          cin >>matriz[i][j];
        }
      }
    }
    if(opcion==2){
        cout << matriz[0][0]<< " " << matriz[1][1] << " " << matriz[2][2] << endl;
    }
  }while(opcion!=3);
  return 0;
}
