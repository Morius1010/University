/*PRUEBAS DE PUNTEROS: ¿QUE HAY EN CADA PUNTERO?*/

//-----------------------------------------------
#include <iostream>

using namespace std;
//PRUEBA DE FUNCIONES CON '&'
void valorAbsoluto(int &valor){
  valor=valor*(-1);
}



int main(){

 // Tenemos dos opciones a usar en punteros:

  //-'&': SACA LA POSICION DE MEMORIA DE UNA VARIABLE

  //-'*': CREA UN PUNTERO

//PRUEBA DE PUNTEROS '&'
/*
  int valor=1000;
  //Con & podemos sacar la posicion de memoria de cada variable, esto nos sirve para pasar la variable real como parámetro a una funcion
  cout << "La posicion de memoria de la variable valor es: "<< &valor << endl;
  int *punteraco=&valor;
  //Hemos declarado un puntero y le hemos dado el valor de la posicion de memoria de la variable valor. Lo que hará será sacar el valor que hay en esa posicion de memoria
  cout << "Sacamos el valor de *punteraco: " << *punteraco << endl;
  //Si no ponemos el * sacaremos la posicion de memoria, pero no el valor contenido en ella.
  cout << "Sacamos el valor de punteraco: " << punteraco << endl;
  */
//PRUEBA DE PUNTEROS '*'
/*
  //Declaramos un puntero(Posición de Memoria) '*' que apunta a otro puntero(Posición de memoria) '*' que a su vez apunta a un entero 'int':
  int** x= new int*;
  //El valor del entero será 5, para ello damos dos saltos debido a los dos punteros
  **x = 5;

  cout << "El contenido de x es: " << x << endl;
  cout << "El contenido de *x es: " << *x << endl;
  cout << "El contenido de **x es: " << **x << endl;
  //Declaramos un puntero que apunta a un vector de punteros que apuntan a valores enteros:
  int** y = new int*[5];
  cout << "La posicion de y es: " << y << endl;
  for (int i = 0; i < 5;i++){
    *y[i] = i*2;
    cout << "La posicion de y[" << i << "] es: " << y[i] << endl;
    cout << "El contenido de *y[" << i << "] es: " << *y[i] << endl;
  }

  //Delete perfecto by Matt
  for(int i = 0; i< 5; i++){
    *y[i] = 0;
    delete y[i];
  }
  delete y;
  **x = 0;
  delete *x;
  delete x;
*/
//PRUEBA DE FUNCIONES CON '&'
  int num=0;

  return 0;
}
