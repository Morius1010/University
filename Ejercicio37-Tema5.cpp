/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La
estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa
que dado un vector con los tiempos que un ciclista ha empleado en cada etapa calcule
el tiempo total empleado en correr todas las etapas.*/

//--------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

struct tiempo {
  int horas;
  int minutos;
  int segundos;
};

int main(){
  int etapa=0;
  float horastotales=0, minutostotales=0 , segundostotales=0;
  cout << "Introduzca el numero de etapas: ";
  cin >> etapa;
  tiempo ciclista[etapa];
  for(int i=0;i<etapa;i++){
    cout << "Introduzca las horas en la " << i+1 << " etapa" << endl;
    cin >> ciclista[i].horas;
    cout << "Introduzca los minutos en la " << i+1 << " etapa" << endl;
    cin >> ciclista[i].minutos;
    cout << "Introduzca los segundos en la " << i+1 << " etapa" << endl;
    cin >> ciclista[i].segundos;
  }
  for(int i=0;i<etapa;i++){
    horastotales+=ciclista[i].horas;
    minutostotales+=ciclista[i].minutos;
    segundostotales+=ciclista[i].segundos;
  }
  cout << "El tiempo total es " << horastotales << " horas " << minutostotales << " minutos " << segundostotales << " segundos ";



  return 0;
}
