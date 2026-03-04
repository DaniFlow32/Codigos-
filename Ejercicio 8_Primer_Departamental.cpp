#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    float n[5], suma = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> n[i];
        suma += n[i];
    }

    
    sort(n, n + 5);

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << suma / 5 << endl;
    cout << "Media (Mediana): " << n[2] << endl; 
    cout << "Maximo: " << n[4] << endl;
    cout << "Minimo: " << n[0] << endl;

    return 0;
}