#include <iostream>
#include <fstream>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    double promedio;
};

int main() {
    int n;
    cout << "Numero de alumnos: ";
    cin >> n;

    Alumno *grupo = new Alumno[n];

    for (int i = 0; i < n; i++) {
        cout << "\nAlumno " << i+1 << endl;
        cin >> grupo[i].nombre >> grupo[i].edad >> grupo[i].promedio;
    }

    ofstream archivo("alumnos.csv");
    archivo << "Nombre,Edad,Promedio\n";
    for (int i = 0; i < n; i++)
        archivo << grupo[i].nombre << ","
                << grupo[i].edad << ","
                << grupo[i].promedio << "\n";
    archivo.close();

    cout << "\nArchivo CSV creado.\n";

    delete[] grupo;
    return 0;
}