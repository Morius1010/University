/*7. Escribe un programa que defina un vector de numeros y calcule si existe algun numero
en el vector cuyo valor equivale a la suma del resto de numeros del vector.*/
#include <iostream>

using namespace std;

int main(){
    int v[4]={1,6,3,2}, suma=0;
    for(int i=0; i<4; i++){
            suma=0;
        for (int j=0;j<4;j++){
            if(i!=j){
                suma+=v[j];
            }
        }
        if(suma==v[i]){
            cout << "El valor " << v[i] << " es la suma del resto de numeros del vector" << endl;
            }
    }
    return 0;
}
