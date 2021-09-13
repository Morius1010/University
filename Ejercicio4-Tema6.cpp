/*Realice una funcion que, dado un caracter, devuelva si es un digito.
*/
//-----------------------------------------------
#include <iostream>

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

int main(){
  char digito,cualquiera;
  cout << "Introduzca un digito: " << endl;
  cin >> digito;
  cout << "Introduzca un caracter cualquiera: " << endl;
  cin >> cualquiera;
  if(esDigito(cualquiera)==true){
     cout << "El caracter " << cualquiera << " es un digito";
  } else{
    cout << "El caracter " << cualquiera << " no es un digito";
  }
  cout << endl;
  if(esDigito(digito)==true){
     cout << "El caracter " << digito << " es un digito";
  } else{
    cout << "El caracter " << digito << " no es un digito";
  }
  return 0;
}
