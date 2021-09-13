/*Realice un programa que defina un vector con varios caracteres. El programa debe
calcular el caracter que ocurre mas veces en el vector. Si el maximo es compartido por
mas de un caracter se puede mostrar cualquiera de ellos.*/

//---------------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <cstdlib> // Biblioteca para rand y srand
#include <ctime> // Biblioteca para time

using namespace std;

int main(){
  srand (time(0)); // reinicia la funcion rand
  int numchar=0,repe=0,aux=0;
  cout << "Introduzca el numero de caracteres";
  cin >> numchar;
  cout << "Introduzca los caracteres en el vector";
  char v[numchar];
  char maximo;
  for(int i=0;i<numchar;i++){
    cin >> v[i];
  }
  cout << "Los caracteres introducidos son: " << endl;
  for(int i=0;i<numchar;i++){

    cout << " " << v[i] << " ";
  }
  int nummax=0;
  for(int i=0;i<numchar;i++){ //De aquí sacamos el numero de maximos que hay en total guardados en aux
    repe=0;
    for(int j=0;j<numchar;j++){
      if(v[i]==v[j]){
        repe+=1;
      }
    }
    if (repe>aux){
      aux=repe;
    }
  }
    cout << endl <<"El numero de maximos posibles es" << aux << endl; // Sacamos el numero de maximos posibles
    char maximos[aux]; // inicializo un vector donde introducimos los maximos
    int contador=0; // inicializo un contador que contará las posiciones ocupadas
  for(int i=0;i<numchar;i++){
    repe=0;
    for(int j=0;j<numchar;j++){ //De aqui saco cuantas veces se repite un caracter
      if(v[i]==v[j]){
        repe+=1;
      }
    }
    if (repe==aux){  //si el caracter de v[i] se repite el maximo de veces entonces igualamos v[i] a la posicion que le toca
      if(v[i]!=maximos[contador-1]){
      if(contador<aux){
        maximos[contador]=v[i];
        cout << " " << maximos[contador] << " " << endl;
        contador+=1;
      }
    }
    }
  }
  cout << "los posibles maximos son: " << endl;
  for(int i=0;i<aux;i++){
    cout << " " << maximos[i] << " ";
  }
  cout << endl;
  int aleatorio= rand() % aux;

  cout << "La posicion del maximo en el vector es: " << aleatorio << endl;

  cout << "El maximo es " << maximos[aleatorio];

  return 0;
}
