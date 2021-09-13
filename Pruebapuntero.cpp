#include <iostream>

using namespace std;

int devuelveMenor(int *v[],int tam){
  int menor;
  menor=1;
  return menor;
}

int main(){
int tam=5;
int v[tam]={0,1,2,3,4};
int *puntero;
puntero=v;
int menor=devuelveMenor(puntero,tam);
cout << "El menor es: " << menor;
return 0;
}
