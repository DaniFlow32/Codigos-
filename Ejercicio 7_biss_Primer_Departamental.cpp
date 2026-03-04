#include <iostream>
using namespace std;


struct Persona {
    string nombre;
    int edad;
    float altura;
};

class Estudiante {
    public:
        string carrera;
        int semestre;
        double promedio;
};

int main() {


    cout << "Tamaños de datos basicos:\n";
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;

    cout << "\nTamano de estructura Persona (PE): ";
    cout << sizeof(Persona) << " bytes" << endl;

    cout << "Tamano de clase Estudiante (POO): ";
    cout << sizeof(Estudiante) << " bytes" << endl;

    return 0;
}