#include <iostream>

using namespace std;
int main(){

double PrecioSinIva;
cout << "Introduzca el precio al que quiere añadirle el IVA: " << endl;
cin >> PrecioSinIva;
cout << endl;
double PrecioConIva= (PrecioSinIva*21)/100;
cout << "Precio con IVA: " << PrecioSinIva+PrecioConIva;

}
