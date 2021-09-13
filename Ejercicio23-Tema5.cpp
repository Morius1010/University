/*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.*/

//---------------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int matrizuno[3][3], matrizdos[3][3],resultado[3][3], aux=0,suma=0,producto=0;
  cout << "Introduzca la primera matriz" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout << "Posicion " << i << " " << j << " ";
      cin >> matrizuno[i][j];
    }
  }
  cout << "Introduzca la segunda matriz" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout << "Posicion " << i << " " << j << " ";
      cin >> matrizdos[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){

    }
  }

}
