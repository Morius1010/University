/*. Realice un programa como el del ejercicio anterior pero en el que se permitan espacios
en blanco. Este programa debe reconocer como pal´ındromos las frases: “dabale arroz
a la zorra el abad” y “la ruta nos aporto otro paso natural”.*/

//------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  string cadena="";
  getline(cin>>ws,cadena);
  int tam=cadena.length();
  int aux=0;
  int mitad=tam/2;
  int espacios=0;
  int igual=0;
  for(int i=0;i<tam;i++){
    if(cadena[i]==' '){
      espacios++;
    }
  }
  int real=tam-espacios;

  for(int i=tam-1;i>=0;i--){
      if(cadena[i]!=' '){
        if(cadena[aux]!=' '){
          if(cadena[i]==cadena[aux]){
            igual++;
          }
        }else{
          aux++;
          if(cadena[i]==cadena[aux]){
            igual++;
          }
        }
        aux++;
      }
  }

  if(igual==real){
    cout << "Es un palindromo";
  }else{
    cout << "No es un palindromo";
  }
  return 0;
}
