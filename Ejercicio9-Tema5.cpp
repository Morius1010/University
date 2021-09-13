/*Escribe un programa que calcule la desviacion t ´ ´ıpica de n numeros. El valor de ´ n se lee
de la entrada estandar. La desviaci ´ on t ´ ´ıpica se calcula mediante la siguiente formula: */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    float resultado,media=0.0,num[n];
    cout << "Cuantos datos vas ingresar?" << endl;
    cin >> n;
    cout << "Introduce los datos" << endl;
    for(int i=0; i<n;i++){
        cin >> num[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    media=sum/n;
    for(int i=0;i<n;i++){
        resultado+=pow(media-num[i],2);
        resultado=sqrt(resultado/n-1);
    }
    cout<<"La desviacion es: " << resultado;
    return 0;
}
