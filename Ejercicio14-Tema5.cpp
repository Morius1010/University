/*. Dados dos vectores A y B de n y m enteros respectivamente, ordenados de menor
a mayor y sin repetidos, escribe un programa que construya un nuevo vector C de
tamano l ˜ ogico ´ k, con k ≤ n + m, que sea el resultado de mezclar los vectores A y B, de
manera que el vector C este ordenado y no contenga elementos repetidos.*/

//--------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n=0,m=0,aux=1, valor=0;
  int A[n],B[m];

  cout << "Introduce el numero de datos del vector A" << endl;
  cin >> n;
  cout << "Introduce el numero de datos del vector B" << endl;
  cin >> m;
  cout << "Introduce los valores en el vector A" << endl;
  for(int i=0;i<n;i++){
    cin >> valor;
    if (i>0){
      for(int j=0;j<i;j++){
        if (valor>A[j]){
          A[i]=valor;
        } else{
            cout << "El valor de la posicion" << j << " es mayor o igual que el valor " << valor << endl;
        }
      }
    }else{
      A[i]=valor;}
    }
  for(int i=0;i<n;i++){
    cout << A[i];
  }



  return 0;
}
