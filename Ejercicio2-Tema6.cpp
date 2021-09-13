/*Realiza una funcion que tome como parametros dos cadenas de caracteres y devuelva ´
la cadena mas larga o la primera si ambas tienen la misma longitud*/

//--------------------------------

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string cadenaMasLarga(string primera, string segunda){
  string masLarga="";
  if(primera.length()==segunda.length()){
    masLarga=primera;
  } else if(segunda.length()>primera.length()){
    masLarga=segunda;
  } else{
    masLarga=primera;
  }
  return masLarga;
}

int main(){
  string primera="", segunda="";
  cout << "Introduzca la primera cadena: " << endl;
  getline(cin>>ws,primera);
  cout << "Esta es la primera cadena: " << endl << primera << endl << "Introduzca la segunda cadena: ";
  getline(cin>>ws,segunda);
  cout << "Esta es la segunda cadena: " << endl << segunda << endl << "---------------------" << endl;
  cout << "La cadena mas larga es: " << cadenaMasLarga(primera,segunda);
  return 0;
}
