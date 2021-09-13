#include <iostream>

using namespace std;

int main (){

    double alumno1, alumno2, alumno3, alumno4, media;
    cout << "Introduzca las notas de los 4 alumnos una a una: " << endl;
    cin >> alumno1 >> alumno2 >> alumno3 >> alumno4;
    media=(alumno1+alumno2+alumno3+alumno4)/4;
    cout << "La nota media es: " << media;
    return 0;
}
