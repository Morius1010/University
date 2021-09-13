/*Realice un programa que lea lıneas de la entrada estandar hasta que se lea una lınea
cuyo contenido sea la cadena FIN. El programa debe mostrar en la salida estandar la
lınea mas larga de las leıdas y tambien la menor desde un punto de vista lexicografico.*/

//-------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  string cadena="",maximo="",minimo="";
  cout << "Introduzca una cadena" << endl;
  getline(cin>>ws,cadena);
  maximo=cadena;
  minimo=cadena;
  int longmax=maximo.length(),longmin=minimo.length(),longcadena=0;

  do{
    cout << "Introduzca una cadena" << endl;
    getline(cin>>ws,cadena);
    longcadena=cadena.length();
    if(longcadena>longmax){
      maximo=cadena;
      longmax=maximo.length();
    }
   if(cadena!="FIN"){
    if(longcadena<longmin){
        minimo=cadena;
        longmin=minimo.length();
    }
    }
  }while(cadena!="FIN");

  cout << "La cadena mas larga es " << endl;
  cout << maximo << endl;
  cout << "La cadena mas corta es " << endl;
  cout << minimo;

  return 0;
}
