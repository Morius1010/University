/*Realice una funcion que, dada una cadena de caracteres, devuelva cuantos dıgitos
contiene. Sugerencia: use la funcion del ejercicio anterior para, dado un caracter de la ´
cadena, comprobar si el caracter es un dıgito.*/

//-----------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool esDigito(char caracter){
  bool chivato=false;
  switch(caracter){
    case '0':
      chivato=true;
      break;
    case '1':
      chivato=true;
      break;
    case '2':
      chivato=true;
      break;
    case '3':
      chivato=true;
      break;
    case '4':
      chivato=true;
      break;
    case '5':
      chivato=true;
      break;
    case '6':
      chivato=true;
      break;
    case '7':
      chivato=true;
      break;
    case '8':
      chivato=true;
      break;
    case '9':
      chivato=true;
      break;
    default:
      chivato=false;
  }
  return chivato;
}

int numeroDigitosCadena(string cadena){
  int tam = cadena.length();
  int numDigitos = 0;
  for (int i = 0; i < tam; i++){
    if(esDigito(cadena[i])==true){
      numDigitos++;
    }
  }
  return numDigitos;
}

int main(){
  string cadena= "Hola mi8 numero2 favorito es el 9";
  cout << "El numero de digitos de la cadena es " << numeroDigitosCadena(cadena);

  return 0;
}
