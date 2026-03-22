#include <iostream>
using namespace std;
int main () {
    double nota = 0, suma  = 0;
    int cantidad_de_notas = 5;
    int aprobada = 0;
    int reprobada =0;

    for ( int contador = 1; contador <=5; contador++ ){
        cout << "Ingrese Nota: ";
        cin >> nota;
        suma += nota;
       
        if ( nota >=61){
            aprobada ++;    
        }

        else {
            reprobada++;
        }
    }

        cout << "Suma Total: " << suma << endl;
       
        double promedio = suma / cantidad_de_notas;
        cout << "Promedio: " << promedio << endl; 

        cout << "Notas Aprobadas: " << aprobada << endl;
        cout << "Nota Reprobadas: " << reprobada << endl;
        
        if ( promedio >= 61) {
            cout << "Aprobado" << endl;
        }

        else {
            cout << " reprobado" << endl;
        }


           return 0;
}