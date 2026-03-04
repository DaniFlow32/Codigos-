#include <iostream>

using namespace std;

int main() {
    const int N = 5;
    double numeros[N];
    double suma = 0;

    double *ptr = numeros;

    for (int i = 0; i < N; i++) {
        cout << "Ingresa numero " << i+1 << ": ";
        cin >> *(ptr + i);
        suma += *(ptr + i);
    }

    cout << "Promedio: " << suma / N << endl;

    return 0;
}