/*Implemente una funcion que calcule la suma de los d ´ ´ıgitos de un numero entero pos- ´
itivo. Por ejemplo, dado 3452 la suma de sus d´ıgitos es 3 + 4 + 5 + 2 = 14.*/

//-----------------------------------------------------------------------------

#include <iostream>

using namespace std;

int sumaDigitos(int numero){
 int suma=0;
 int unidades=0,decenas=0,centenas=0,umillar=0,millares=0;
  if(numero<1000){
    if(numero<100){
      unidades=numero/10;
      decenas=numero-(unidades*10);
    }else{
      unidades=numero/100;
      decenas=(numero/10)-unidades*10;
      centenas=numero-(unidades*100+decenas*10);
    }
  }else if(numero>=10000){
    unidades=numero/10000;
    decenas=numero/1000-unidades*10;
    centenas=numero/100-(unidades*100+decenas*10);
    umillar=numero/10-(unidades*1000+decenas*100+centenas*10);
    millares=numero-(unidades*10000+decenas*1000+centenas*100+umillar*10);
  } else{
    unidades=numero/1000;
    decenas=numero/100-unidades*10;
    centenas=numero/10-(unidades*100+decenas*10);
    umillar=numero-(unidades*1000+decenas*100+centenas*10);
  }
  suma=unidades+decenas+centenas+umillar+millares;
 return suma;
}

int main(){
  int numero=55;
  cout << "La suma de los digitos de " << numero << " es " << sumaDigitos(numero);

  return 0;
}
