/*Realizar un programa que lea los datos de un array de 3x3 desde la entrada estandar y ´
calcule su determinante.
*/

//----------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int matriz[3][3];
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout << "Introduce el valor en la posicion " << i << " " << j << endl;
      cin >> matriz[i][j];
    }
  }
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout << "El valor de la posicion " << i << " " << j << " es " << matriz[i][j] << endl;
    }
  }
  int uno=0,dos=0,determinante=0;

  uno=(matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[1][0]*matriz[2][1]*matriz[0][2]);
  dos=((matriz[2][0]*matriz[1][1]*matriz[0][2])+(matriz[2][1]*matriz[1][2]*matriz[0][0])+(matriz[1][0]*matriz[0][1]*matriz[2][2]));
  determinante=uno-dos;
  cout << "El determinante de la matriz es: " << determinante;
  return 0;
}
