/*EJERCICIO 4 PUNTEROS*/

//-------------------------


#include <iostream>
using namespace std;

struct fecha{
  int dia;
  int mes;
  int ano;
};

void leoFecha(fecha *puntero){

cout << "La fecha es: " << (*puntero).dia << "/" << (*puntero).mes << "/" << (*puntero).ano;

}



int main(){
fecha julioiglesias;
julioiglesias.dia=24;
julioiglesias.mes=4;
julioiglesias.ano=2003;
fecha *puntero;
puntero=&julioiglesias;
leoFecha(puntero);

  return 0;
}
