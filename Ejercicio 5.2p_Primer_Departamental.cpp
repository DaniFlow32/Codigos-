#include <iostream>
using namespace std;

// Clase base
class Figura {
public:
    int lados;

    Figura() {
        lados = 3;
    }
};

// Clase derivada
class Triangulo : public Figura {
private:
    double l1, l2, l3;
    double a1, a2, a3;

public:
    void ingresarDatos() {
        cout << "Ingrese el tipo de triangulo (1-Equilatero, 2-Isosceles, 3-Escaleno): ";
        int tipo;
        cin >> tipo;

        cout << "Ingrese la longitud del lado 1: ";
        cin >> l1;
        cout << "Ingrese la longitud del lado 2: ";
        cin >> l2;
        cout << "Ingrese la longitud del lado 3: ";
        cin >> l3;

        cout << "Ingrese el angulo 1 (grados): ";
        cin >> a1;
        cout << "Ingrese el angulo 2 (grados): ";
        cin >> a2;
        cout << "Ingrese el angulo 3 (grados): ";
        cin >> a3;

        validarTriangulo(tipo);
    }

    void validarTriangulo(int tipo) {
        if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1) {
            cout << "No cumple la desigualdad del triangulo." << endl;
            return;
        }

        if ((a1 + a2 + a3) != 180) {
            cout << "La suma de los angulos debe ser 180 grados." << endl;
            return;
        }

        cout << "\nTriangulo valido." << endl;
        mostrarTipoLados(tipo);
        mostrarTipoAngulo();
    }

    void mostrarTipoLados(int tipo) {
        cout << "Tipo segun lados: ";
        switch (tipo) {
            case 1:
                cout << "Equilatero" << endl;
                break;
            case 2:
                cout << "Isosceles" << endl;
                break;
            case 3:
                cout << "Escaleno" << endl;
                break;
            default:
                cout << "Tipo desconocido" << endl;
        }
    }

    void mostrarTipoAngulo() {
        cout << "Tipo segun angulos: ";
        if (a1 == 90 || a2 == 90 || a3 == 90)
            cout << "Rectangulo" << endl;
        else if (a1 > 90 || a2 > 90 || a3 > 90)
            cout << "Obtusangulo" << endl;
        else
            cout << "Acutangulo" << endl;
    }
};

int main() {
    Triangulo t;
    t.ingresarDatos();
    return 0;
}

