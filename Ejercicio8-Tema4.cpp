#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int numero, contador;
    contador=-1;
    numero=-1;
    cout << "INTRODUZCA UN NUMERO ENTRE 20 Y 30 O EL NUMERO 0 PARA ACABAR" << endl;
    do{
      cout << "Introduzca un numero" << endl;
      cin >> numero;
      contador=contador+1;
    }while(numero!=0 && (numero<20 || numero>30));
    cout << endl << "SE HAN INTRODUCIDO " << contador << " VALORES";
    return 0;
}
