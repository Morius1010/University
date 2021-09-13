/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz
traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/

//---------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int matriz[3][3];
  cout << "Introduzca la matriz para sacar su traspuesta" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout << "Posicion: " << i << " " << j << " ";
      cin >> matriz[i][j];
    }
  }
  int traspuesta[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      traspuesta[i][j]=matriz[j][i];
      cout << "Posicion: " << i << " " << j << " " << traspuesta[i][j] << endl;
    }
  }
  return 0;
}
