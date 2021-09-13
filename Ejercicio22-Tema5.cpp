/*Una matriz nxm se dice que es simetrica si ´ n = m y aij = aji∀i, j : 1 ≤ i ≤ n, 1 ≤ j ≤ n.
Desarrollar un programa que determine si una matriz es simetrica o no.*/

//------------------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int n=0,m=0;
  cout << "Introduzca el numero de filas: ";
  cin >> n;
  cout << "Introduzca el numero de columnas: ";
  cin >> m;
  int matriz[n][m];
  if (n!=m){
    cout << "La matriz no es simetrica";
  }else{
    cout << "Introduzca los datos de la matriz: " << endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
       cout << "Posicion " << i << " " << j << " ";
       cin >> matriz [i][j];
      }
    }
    int aux=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
       if(matriz[i][j]==matriz[j][i]){
        aux+=1;
       }
      }
    }
    if(aux==n*n){
      cout << "La matriz es simetrica";
    }else{
      cout << "La matriz no es simetrica";
    }
  }
  return 0;
}
