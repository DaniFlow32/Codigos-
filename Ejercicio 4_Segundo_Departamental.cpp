#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream salida("notas.txt");
    salida << "Fundamentos de Programacion\n";
    salida << "Uso de archivos en C++\n";
    salida.close();

    ifstream entrada("notas.txt");
    string linea;

    cout << "Contenido del archivo:\n";
    while (getline(entrada, linea))
        cout << linea << endl;

    entrada.close();
    return 0;
}