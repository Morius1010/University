/*Escriba un programa que lea el nombre y la nota de 10 alumnos y calcule la calificacion´
promedio. El programa debe mostrar en la salida estandar el nombre de aquellos ´
alumnos cuya nota supera la media. Haga dos versiones del programa. En la primera
version utilice dos vectores: uno para almacenar las notas de los alumnos y otro para ´
almacenar sus nombres. En la segunda version del programa utilice un ´ unico vector ´
de estructuras de tipo alumno con dos campos: nota y nombre.
*/

#include <iostream>

using namespace std;

int main(){
/*
    int nota[10],promedio=0;
    string nom[10];
    cout << "Introduzca el nombre y la nota del alumno" << endl;
    for(int i=0;i<10;i++){
        cin >> nom[i];
        cin >> nota[i];
    }

    for(int i=0;i<10;i++){
        promedio+=nota[i];
    }
    promedio=promedio/10;

    for(int i=0;i<10;i++){
        cout << "El alumno " << nom[i] << " tiene una nota de " << nota[i] << endl;

    }
    cout << "El promedio de notas es " << promedio;
*/
    struct alumno{
        string nombre;
        float nota;
    };
    alumno v[10];
    int promedio;

    cout << "Introduzca el nombre del alumno y su nota correspondiente" << endl;
    for(int i=0;i<10;++i){
        cin >> v[i].nombre;
        cin >> v[i].nota;
    }
    for(int i=0;i<10;i++){
        promedio+=v[i].nota;
    }
    promedio=promedio/10;

        for(int i=0;i<10;i++){
        cout << "El alumno " << v[i].nombre << " tiene una nota de " << v[i].nota << endl;
        }
        cout << "Promedio de notas " << promedio;



    return 0;
}
