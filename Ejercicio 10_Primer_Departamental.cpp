#include <iostream>

using namespace std;

int main() {
    const int N = 5;
    double numeros[N];
    double suma = 0;

    for (int i = 0; i < N; i++) {
        cout << "Ingresa numero " << i+1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "El promedio es: " << suma / N << endl;

    return 0;
}