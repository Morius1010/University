#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float temp1, temp2, temp3, temp4, temp5, temp6,media,alta,baja;
    cout << "Introduzca las temperaturas que ha habido a lo largo del día cada 4 horas: ";
    cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6;
    media=(temp1+temp2+temp3+temp4+temp5+temp6)/6;
    if(temp1>=temp2 && temp1>=temp3 && temp1>=temp4 && temp1>=temp5 && temp1>=temp6){
        alta=temp1;
    }else if(temp2>=temp1 && temp2>=temp3 && temp2>=temp4 && temp2>=temp5 && temp2>=temp6){
        alta=temp2;
    }else if(temp3>=temp2 && temp3>=temp1 && temp3>=temp4 && temp3>=temp5 && temp3>=temp6){
        alta=temp3;
    }else if(temp4>=temp2 && temp4>=temp3 && temp4>=temp1 && temp4>=temp5 && temp4>=temp6){
        alta=temp4;
    }else if(temp5>=temp2 && temp5>=temp3 && temp5>=temp4 && temp5>=temp1 && temp1>=temp6){
        alta=temp5;
    }else{
        alta=temp6;
    }
        if(temp1<=temp2 && temp1<=temp3 && temp1<=temp4 && temp1<=temp5 && temp1<=temp6){
        baja=temp1;
    }else if(temp2<=temp1 && temp2<=temp3 && temp2<=temp4 && temp2<=temp5 && temp2<=temp6){
        baja=temp2;
    }else if(temp3<=temp2 && temp3<=temp1 && temp3<=temp4 && temp3<=temp5 && temp3<=temp6){
        baja=temp3;
    }else if(temp4<=temp2 && temp4<=temp3 && temp4<=temp1 && temp4<=temp5 && temp4<=temp6){
        baja=temp4;
    }else if(temp5<=temp2 && temp5<=temp3 && temp5<=temp4 && temp5<=temp1 && temp1<=temp6){
        baja=temp5;
    }else{
        baja=temp6;
    }
    cout << "La media de temperaturas de hoy ha sido: " << media << endl;
    cout << "La temperatura mas alta de hoy ha sido: " << alta << endl;
    cout << "La temperatura mas baja de hoy ha sido: " << baja;
    return 0;
}
