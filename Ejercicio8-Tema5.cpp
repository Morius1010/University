/*8. Desarrolle un programa que determine el primer y segundo elementos mayores de un
vector de enteros.
*/
#include <iostream>

using namespace std;

int main(){
    int v[5]={1,2,3,4,5}, primero=0, segundo=v[1];
    for(int i=0;i<5;++i){
        if(primero<v[i]){
            primero=v[i];
        }
    }
    for(int i=0;i<5;i++){
        if(segundo<v[i] && v[i]<primero){
            segundo=v[i];
        }

    }
    cout << "El primero es: " << primero << " y el segundo es: " << segundo;
    return 0;

}
