#include <iostream>
using namespace std;

int main()
[
    //conversion de dolar 
    float dolares,resultado
    int opciones;

    //ingrese la cantidad de dolares que desea convertir
    cout<<"ingrese la cantidad que desea convertir";
    cin>>dolares

    //A que tipo de moneda deseaw hacer la conversion
    cout<<"seleccione una de las opciones"<<endl;
    cout<<" 1 Euro"<<endl;
    cout<<" 2 Colones"<<endl;
    cout<<" 3 Quetzal"<<endl;
//se utilizara switch para verificar cualñ cambio se dee realizar

switch(opciones)
[
    case 1:
    resultado=dolares*0.85;
    cout<< "su cantidad convertida a euro es:"<<resultado<< endl;
    break;

        case 2:
    resultado=dolares*0.017;
    cout<< "su cantidad convertida a colones es:"<<resultado<< endl;
    break;
    default;

       case 3:
    resultado=dolares*0.13;
    cout<< "su cantidad convertida a quetzales es:"<<resultado<< endl;

]


    return 0;
]