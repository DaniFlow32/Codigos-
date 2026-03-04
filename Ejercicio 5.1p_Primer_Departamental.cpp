#include <iostream>
using namespace std;

// Clase base
class Figura {
public:
    int lados;

    void pedirLados() {
        cout << "Ingrese el numero de lados de la figura: ";
        cin >> lados;
    }
};

// Clase derivada
class Triangulo : public Figura {
public:
    double base, altura;

    void pedirDatos() {
        pedirLados(); // método heredado

        if (lados != 3) {
            cout << "No es un triangulo. Debe tener 3 lados." << endl;
            return;
        }

        cout << "Ingrese la base del triangulo: ";
        cin >> base;
        cout << "Ingrese la altura del triangulo: ";
        cin >> altura;
    }

    double calcularArea() {
        if (lados == 3)
            return (base * altura) / 2;
        return 0;
    }
};

int main() {
    Triangulo t;

    t.pedirDatos();

    if (t.lados == 3) {
        cout << "El area del triangulo es: " << t.calcularArea() << endl;
    }

    return 0;
}
