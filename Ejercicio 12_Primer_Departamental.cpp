#include <iostream>

using namespace std;

struct Alumno {
    string nombre;
    double promedio;
};

int main() {
    const int N = 3;
    Alumno lista[N];

    for (int i = 0; i < N; i++) {
        cout << "Nombre: ";
        cin >> lista[i].nombre;
        cout << "Promedio: ";
        cin >> lista[i].promedio;
    }

    cout << "\nLista de alumnos:\n";
    for (int i = 0; i < N; i++) {
        cout << lista[i].nombre << " - " << lista[i].promedio << endl;
    }

    return 0;
}