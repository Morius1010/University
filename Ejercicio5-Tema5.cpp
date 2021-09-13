/*5. Desarrolle un programa que inicie un vector de enteros con valores le´ıdos de la entrada
estandar y, a continuaci ´ on, calcule el mayor elemento del vector. */
#include <iostream>

using namespace std;

int main(){
    int v[10], mayor=0;
    cout << "Introduzca los valores en el vector" << endl;
    for(int i=0;i<10;i++){
        cin >> v[i];
    }
    for(int i=0;i<10;i++){
        if(mayor<v[i]){
            mayor=v[i];
        }
    }
    cout << "El mayor es " << mayor;
    return 0;
}
