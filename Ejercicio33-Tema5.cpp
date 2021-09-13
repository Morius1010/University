/*Realice un programa que lea una cadena de caracteres e indique cuantas palabras ´
tiene. Una palabra puede venir separada de otra por uno o mas caracteres de espa- ´
cio en blanco.*/

//---------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main(){
  string cadena="";
  cout << "Introduzca una cadena con palabras: " << endl;
  getline(cin>>ws,cadena);
  int numpalabras=0,tam=cadena.length();
  for(int i=0;i<tam;i++){
    if(cadena[i]==' ' || i==tam-1){
      numpalabras++;
    }
  }
  cout << "El numero de palabras es " << numpalabras;
  return 0;
}
