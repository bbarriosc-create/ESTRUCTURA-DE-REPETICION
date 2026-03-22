#include <iostream>
using namespace std;
int main (){

    int meses_de_ahorro;
    int mes;
    double cantidad=0;
    int mayor_ahorro = 0;
    int cuenta_500 = 0;
    int mes_mayor = 0;


    
    cout << "Cantidad de meses a Ahorrar: ";
    cin >> meses_de_ahorro;

    if ( meses_de_ahorro >=1) {
        for (int contador =0; contador < meses_de_ahorro; contador++){
            cout << "Mes: ";
            cin >> mes;  
            cantidad += mes; 
        
                   
        if ( mes > mayor_ahorro) {
            mayor_ahorro = mes;
            mes_mayor = contador +1;
            }

            if ( mes >= 500){
                cuenta_500 = cuenta_500 +1;
            }
        }
    }
    

    double promedio = cantidad / meses_de_ahorro;
    cout << "Total Ahorrado: " << cantidad << endl; 
    cout << "Promedio Ahorrado: " << promedio << endl;
    cout << "Que mes Ahorre mas: " << mes_mayor << endl;
    cout << "Mes que Ahorre 500 o mas: " << cuenta_500 << endl;


    return 0;

}