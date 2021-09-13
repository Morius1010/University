#include <iostream>

using namespace std;

int main(){
    int v[10];
    cout << "Introduzca los valores en el vector";
    for(int i=0;i<10;++i){
        cin >>v[i];
    }

    for(int i=0;i<10;i++){
        cout << "Valor " << v[i] << " posicion: " << i << endl;
    }

    return 0;

}
