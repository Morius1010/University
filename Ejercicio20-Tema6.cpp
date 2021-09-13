/*. Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el ´
mınimo de los elementos almacenados en dicha fila.
*/

//------------------------------------------

#include <iostream>

using namespace std;
const int NFILAS=3;
const int NCOL=3;

int minimoFila(int vec[][NCOL], int fila){
  int minimo=10000;
  for(int i=0;i<NCOL;i++){
    //  cout << "PRUEBA: " << vec[fila-1][i] << endl << minimo << endl;
    if(minimo>vec[fila-1][i]){
      minimo=vec[fila-1][i];
    }
  }
  //cout << "Aqui esta el minimo final: " << endl;
  return minimo;
}

int main(){
  int v[NFILAS][NCOL]={{1,2,5},{8,2,9},{3,7,8}};
 /* cout << v[0][0] << v[0][1] << v[0][2] << endl
  << v[1][0] << v[1][1] << v[1][2] << endl
  << v[2][0] << v[2][1] << v[2][2] << endl;
*/
  cout << "El minimo de la primera fila es: " << minimoFila(v,1) << endl;
  cout << "El minimo de la segunda fila es: " << minimoFila(v,2) << endl;
  cout << "El minimo de la tercera fila es: " << minimoFila(v,3);

  return 0;
}
