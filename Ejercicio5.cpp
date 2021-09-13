#include <iostream>

using namespace std;

int main(){
    double NotaPracticas, NotaTeoria, NotaParticipacion, NotaFinal;
    cout << "Introduzca su Nota de Practicas: " << endl;
    cin >> NotaPracticas;
    cout << endl;
    cout << "Introduzca su Nota de Teoria: " << endl;
    cin >> NotaTeoria;
    cout << endl;
    cout << "Introduzca su Nota de Participacion: " << endl;
    cin >> NotaParticipacion;
    cout << endl;
    NotaFinal= (NotaPracticas*0.3)+(NotaTeoria*0.6)+(NotaParticipacion*0.1);
    cout << "Su nota final es: " << NotaFinal;
    return 0;
}
