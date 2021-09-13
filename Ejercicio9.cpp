/*
Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de ´
la forma ax2 + bx + c = 0, teniendo en cuenta que:

Entrada caso de prueba: 2x
2 + 9x + 3 = 0.
Salida caso de prueba: Ra´ıces: -0.36 y -4.14
*/

#include <iostream>
#include <cmath>
using  namespace std;

int main(){
    float a, b, c, s1, s2;
    cout << "Introduzca el valor de x al cuadrado, x y d respectivamente: " << endl;
    cin >> a >> b >> c;

    s1=((-1*b)+sqrt (pow(b,2)-4*a*c))/(2*a);
    s2=((-1*b)-sqrt (pow(b,2)-4*a*c))/(2*a);
    cout << endl;
    cout << "La primera solucion es: " << s1 << endl;
    cout << "La segunda solucion es: " << s2 << endl;

    return 0;


}
