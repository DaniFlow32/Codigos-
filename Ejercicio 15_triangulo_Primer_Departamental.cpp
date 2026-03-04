#include <iostream>
using namespace std;

void sierpinski(int n) {
    if (n == 0) {
        cout << "*";
    } else {
        sierpinski(n - 1);
        cout << " ";
        sierpinski(n - 1);
    }
}

int main() {
    int nivel;

    cout << "Ingrese el nivel del Triangulo de Sierpinski: ";
    cin >> nivel;

    for (int i = 0; i < nivel; i++) {
        for (int j = 0; j < nivel - i; j++)
            cout << " ";
        sierpinski(i);
        cout << endl;
    }

    return 0;
}