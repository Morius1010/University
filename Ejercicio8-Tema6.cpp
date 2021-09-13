/*Realiza una funcion que tome como parametros dos cadenas de caracteres y devuelva ´
la cadena mas larga y la mas corta. */

//------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int comparoCadenas(string uno,string dos){
  int longituduno=uno.length();
  int longituddos=dos.length();
  string larga="",corta="";
  if(longituduno>longituddos){
    larga=uno;
    cout << "La cadena mas larga es "<< larga << endl;
    corta=dos;
    cout << "La cadena mas corta es " << corta << endl;
  } else{
    larga=dos;
    cout << "La cadena mas larga es "<< larga << endl;
    corta=uno;
    cout << "La cadena mas corta es "<< corta << endl;
  }

  return 0 ;
}
int main(){
  string cadena, cadena2;
  getline(cin>>ws,cadena);
  getline(cin>>ws,cadena2);
  comparoCadenas(cadena,cadena2);

  return 0;
}
