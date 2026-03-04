#include <iostream>

using namespace std;

int multiplicar(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado = resultado + a;
    }
    return resultado;
}

int potencia(int base, int exponente) {
    if (exponente == 0) return 1;
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}
int dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
        return 0;
    }
    int contador = 0;
    while (a >= b) {
        a = a - b;
        contador++;
    }
    return contador;
}

int main() {
    int n1, n2, opcion;

    cout << "--- MI CALCULADORA UNIVERSITARIA ---" << endl;
    cout << "1. Multiplicacion (sumas sucesivas)" << endl;
    cout << "2. Potencia (multiplicaciones sucesivas)" << endl;
    cout << "3. Division (restas sucesivas)" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    cout << "Ingresa el primer numero: ";
    cin >> n1;
    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    cout << "------------------------------------" << endl;

    if (opcion == 1) {
        cout << "Resultado de la multiplicacion: " << multiplicar(n1, n2) << endl;
    } 
    else if (opcion == 2) {
        cout << "Resultado de la potencia: " << potencia(n1, n2) << endl;
    } 
    else if (opcion == 3) {
        cout << "Resultado de la division: " << dividir(n1, n2) << endl;
    } 
    else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}