/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
*/

//-------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int matrizuno[3][3],matrizdos[3][3],matrizsuma[3][3];
  cout << "Introduzca los datos de la primera matriz" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Posicion " << i << " " << j << " ";
        cin >> matrizuno[i][j];

    }
  }
  cout << "Introduzca los datos de la segunda matriz" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Posicion " << i << " " << j << " ";
        cin >> matrizdos[i][j];

    }
  }
  cout << "La matriz suma es" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << "Posicion " << i << " " << j << " ";
        matrizsuma[i][j]=matrizuno[i][j]+matrizdos[i][j];
        cout << matrizsuma[i][j];

    }
  }

  return 0;
}
