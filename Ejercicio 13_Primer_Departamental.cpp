#include <iostream>

using namespace std;

struct Alumno {
    string nombre;
    double promedio;
};

int main() {
    int N = 3;
    Alumno *lista = new Alumno[N];

    for (int i = 0; i < N; i++) {
        cout << "Nombre: ";
        cin >> lista[i].nombre;
        cout << "Promedio: ";
        cin >> lista[i].promedio;
    }

    cout << "\nAlumnos registrados:\n";
    for (int i = 0; i < N; i++) {
        cout << lista[i].nombre << " - " << lista[i].promedio << endl;
    }

    delete[] lista;

    return 0;
}