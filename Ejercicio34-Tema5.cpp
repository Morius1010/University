/*Implementar el juego del ahorcado. El programa dispondra de un menu con tres opciones:
introducir palabra, adivinar palabra y salir. La primera opcion permite introducir la palabra
que otro jugador o nosotros mismos, para probar el programa ha de adivinar. La segunda opcion
solo podra llevarse a cabo si ha sido introducida previamente una palabra. De ser ası aparecera
una cadena formada por guiones—tantos ´como letras contiene la palabra. El programa ira pidiendo
una letra tras otra. Si la letra es valida aparecera en la cadena en la posicion correspondiente,
si no es ası contaremos un fallo. El programa termina cuando se han acertado todas las letras o se ha
fallado seis veces.
*/

//------------------------------------------------------------

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string palabra="",adivina="";
  int tam=0, contador=0,fallo=0, tamaux=0,opcion=0,aux=0;
  cout << "[1].-Introducir una palabra a adivinar"<< endl;
  cout << "[2].-Adivinar la palabra"<< endl;
  cout << "[3].-Salir"<< endl << endl;
  do{
    opcion=0;
    aux=0;
    tam=palabra.length();
    cout << "Seleccione una opcion" << endl;
    if(tam<1){ //COMPRUEBO SI YA SE HA INTRODUCIDO UNA PALABRA ANTES
      cout << "Primero seleccione 1 para introducir una palabra: ";
      do{
        cin >> opcion;
      }while(opcion!=1);
    }

    if(opcion==0){
        cin >> opcion;
    }

    if(opcion==1){ //SI OPCION=1 INTRODUZCO UNA NUEVA PALABRA
      do{
        cout << "Introduzca la palabra" << endl;
        cin >> palabra; // USO CIN PARA SOLO COGER LA PRIMERA PALABRA EN CASO DE QUE LA STRING TENGA ESPACIOS EN BLANCO
        tam=palabra.length();
        cout << tam << endl;
        if(tam>0){
          aux+=1;
        }
        cout << aux << endl;
      }while(aux!=1);
    }

    if(opcion==2){ //SI OPCION=2 INTRODUZCO UNA LETRA Y COMPRUEBO SI ESTA EN LA STRING

      for(int i=0;i<tam;i++){ // SACO LOS GUIONES BAJOS CON LA LONGITUD DE LA PALABRA
        cout << "_" << " ";
      }
      do{ // BUCLE SI LLEGO A 6 FALLOS SALGO DE ÉL Y SI EL CONTADOR LLEGA AL TAMAÑO DE LA PALABRA SIGNIFICA QUE HE ADIVINADO LA PALABRA ASI QUE SALGO TAMBIEN
        do{
          cout << "Introduce una sola letra";
          cin>>adivina; // NO COJO LOS ESPACIOS POR LO TANTO USO CIN IGUAL QUE EN PALABRA
          tamaux=adivina.length(); // USO UN TAMAÑO AUXILIAR PARA QUE LA STRING SEA SOLO UNA LETRA
        }while(tamaux!=1);
        for(int i=0;i<tam;i++){ // USO UN BUCLE PARA RECORRER TODA LA STRING EN BUSCA DE LA PALABRA
            if(palabra[i]==adivina[0]){// SI SON IGUALES AUMENTO EL VALOR DE CONTADOR Y ADEMAS SACO LA LETRA ADIVINADA
              aux=contador;
              contador++;
              cout << " " << adivina[0] << " " << endl;
              cout << "acertaste " << contador << " veces, solo necesitas acertar " << tam-contador << " veces mas" << endl;
            }else{
              cout << " " << "_" << "";
              fallo++;
              cout << "te has equivocado " << fallo << " veces, solo te quedan " << 6-fallo << " intentos " << endl;
            }
        }
      }while(fallo!=6 && contador!=tam);
    }


  }while(opcion!=3 && fallo!=6 && contador!=tam);

  if(fallo==6){
    cout << "Fallaste demasiadas veces";
  }
  if(contador==tam && tam!=0){
    cout << "Has ganado!!";
  }
    cout << "FIN DEL PROGRAMA";


  return 0;
}
