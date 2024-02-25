#include <iostream>
using namespace std;


// Funcion 
int SumatoriaBasica(int NumeroSuma){
    int SumaAcumulada = 0;
    for(int i = 1; i <= NumeroSuma; i++){
        SumaAcumulada += i;
    }
    return SumaAcumulada;
}

int main(){
    // Declaracion de variables
    int Numero;
    int Resultado;
    
    // Ingreso de datos
    cin >> Numero;
    
    // Proceso: Llamamos a la funcion SumatoriaBasica
    Resultado = SumatoriaBasica(Numero);
    
    // Salida
    cout << Resultado << endl;
    
    
    return 0;
}
