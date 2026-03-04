#include <iostream>
using namespace std;

void cantor(int inicio, int longitud) {
    if (longitud < 1)
        return;

    for (int i = 0; i < inicio; i++)
        cout << " ";
    for (int i = 0; i < longitud; i++)
        cout << "-";
    cout << endl;


    cantor(inicio, longitud / 3);
    cantor(inicio + 2 * (longitud / 3), longitud / 3);
}

int main() {
    int tamano;

    cout << "Ingrese el tamaño inicial (ejemplo 27): ";
    cin >> tamano;

    cantor(0, tamano);

    return 0;
}