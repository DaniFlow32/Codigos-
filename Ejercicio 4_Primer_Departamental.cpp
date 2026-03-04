#include <iostream>
using namespace std;


double suma(double a, double b) { return a + b; }
double resta(double a, double b) { return a - b; }
double multiplicacion(double a, double b) { return a * b; }
double divi(double a, double b) {
    if (b != 0) return a / b;
    cout << "No se puede dividir entre 0" << endl;
    return 0;
}


double suma0() {
    double a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    return a + b;
}


double calcular(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0) return a / b;
            cout << "No se puede dividir entre 0" << endl;
            return 0;
        default:
            cout << "Operacion invalida" << endl;
            return 0;
    }
}

int main() {
    double x, y;
    char op;

    cout << "Ingrese dos numeros: ";
    cin >> x >> y;

    cout << "Suma (2 parametros): " << suma(x, y) << endl;
    cout << "Resta (2 parametros): " << resta(x, y) << endl;
    cout << "Multiplicacion (2 parametros): " << multiplicacion(x, y) << endl;
    cout << "Division (2 parametros): " << divi(x, y) << endl;

    cout << "Suma (0 parametros): " << suma0() << endl;

    cout << "Ingrese operacion (+ - * /): ";
    cin >> op;
    cout << "Resultado (3 parametros): " << calcular(x, y, op) << endl;

    return 0;
}