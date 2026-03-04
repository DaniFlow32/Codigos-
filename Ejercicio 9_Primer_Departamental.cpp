#include <iostream>
using namespace std;

int main() {
    
    float numeros[5];
    float suma = 0;
    float promedio;
    float maximo, minimo;

    for(int i = 0; i < 5; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma = suma + numeros[i];
    }

    promedio = suma / 5;

    maximo = numeros[0];
    minimo = numeros[0];


    for(int i = 1; i < 5; i++) {
        if(numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if(numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    cout << "\nResultados:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}