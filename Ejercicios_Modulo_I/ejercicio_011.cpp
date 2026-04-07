/*
Dados un mes y el año al que corresponde, informar cuantos días tiene el mes, 
considerando la posibilidad del que el año sea bisiesto.
*/

#include <iostream>
using namespace std;

int main(){
    int mes, anio;
    cin>> mes;
    cin>> anio;

    // determina el dia
    switch(mes){
        case 1:
        cout << "el dia tiene 31 dias" << endl;break;
        case 2:
            if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
                cout << "el dia tiene 29 dias" << endl;
            } else {
                cout << "el dia tiene 28 dias" << endl;
            }
            break;
        case 3:
            cout << "el dia tiene 31 dias" << endl;break;
        case 4:
            cout << "el dia tiene 30 dias" << endl;break;
        case 5:
            cout << "el dia tiene 31 dias" << endl;break;
        case 6:
            cout << "el dia tiene 30 dias" << endl;break;
        case 7:
            cout << "el dia tiene 31 dias" << endl;break;
        case 8:
            cout << "el dia tiene 31 dias" << endl;break;
        case 9:
            cout << "el dia tiene 30 dias" << endl;break;
        case 10:
            cout << "el dia tiene 31 dias" << endl;break;
        case 11:
            cout << "el dia tiene 30 dias" << endl;break;
        default:
            cout << "el dia tiene 31 dias" << endl;break;
    }


    return 0;
}