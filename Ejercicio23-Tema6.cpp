/*Realiza una funcion que tome como parametro una matriz de numeros e indique si ´
hay algun elemento de la matriz que sea el mınimo estricto de su columna y, a la vez,
el maximo estricto de su fila. Por mınimo y maximo estricto se quiere decir que sea ´
unico, es decir, que no haya ningun otro elemento con un valor tan bajo o tan alto en ´
el caso del m´ınimo y maximo respectivamente.*/

//--------------------------------------------

#include <iostream>

using namespace std;

void maximoMinimoEstricto(int matriz[][3]){
  int maximoestricto=matriz[0][0];
  int minimoestricto=10000;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(maximoestricto<matriz[i][j]){
          maximoestricto=matriz[i][j];
      }
    }
    cout << "El maximo estricto de la fila " << i << " es " << maximoestricto << endl;
  }
  for(int i=0;i<3;i++){
      minimoestricto=10000;
    for(int j=0;j<3;j++){
      if(minimoestricto>matriz[j][i]){
          minimoestricto=matriz[j][i];
      }
    }
    cout << "El minimo estricto de la columna " << i << " es " << minimoestricto << endl;
  }
}

int main(){
int v[][3]={{1,2,3},{4,5,6},{7,8,9}};
int NFILAS=3,NCOL=3;
maximoMinimoEstricto(v);

  return 0;
}
