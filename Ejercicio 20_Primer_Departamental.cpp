#include <iostream>
#include <vector>
#include <string>

using namespace std;

// --- 1. NUESTRO NUEVO TIPO DE DATO (POO) ---
class Producto {
public:
    string nombre;
    float precio;

    Producto(string n, float p) : nombre(n), precio(p) {}

    // ¡OJO AQUÍ! Para que el algoritmo sepa CÓMO comparar objetos,
    // sobrecargamos el operador "<". Es como decirle:
    // "Compara productos fijándote solo en su precio".
    bool operator<(const Producto& otro) const {
        return this->precio < otro.precio;
    }
};

// --- 2. FUNCIÓN PARA UNIR (MERGE) ---
template <typename T>
void unir(vector<T>& v, int izq, int medio, int der) {
    int n1 = medio - izq + 1;
    int n2 = der - medio;

    vector<T> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = v[izq + i];
    for (int j = 0; j < n2; j++) R[j] = v[medio + 1 + j];

    int i = 0, j = 0, k = izq;
    while (i < n1 && j < n2) {
        if (L[i] < R[j]) { // Aquí se usa el "<" que definimos arriba
            v[k++] = L[i++];
        } else {
            v[k++] = R[j++];
        }
    }
    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];
}

// --- 3. FUNCIÓN RECURSIVA (DIVIDE) ---
template <typename T>
void mergeSort(vector<T>& v, int izq, int der) {
    if (izq < der) {
        int medio = izq + (der - izq) / 2;
        mergeSort(v, izq, medio);
        mergeSort(v, medio + 1, der);
        unir(v, izq, medio, der);
    }
}

int main() {
    // A. Ordenando Enteros
    vector<int> numeros = {40, 10, 30, 20};
    mergeSort(numeros, 0, numeros.size() - 1);
    cout << "Enteros: " << numeros[0] << ", " << numeros[1] << endl;

    // B. Ordenando Caracteres
    vector<char> letras = {'z', 'c', 'a', 'b'};
    mergeSort(letras, 0, letras.size() - 1);
    cout << "Letras: " << letras[0] << ", " << letras[1] << endl;

    // C. Ordenando OBJETOS (POO)
    vector<Producto> tienda = { Producto("Laptop", 1500), Producto("Mouse", 20) };
    mergeSort(tienda, 0, tienda.size() - 1);
    cout << "Producto mas barato: " << tienda[0].nombre << " ($" << tienda[0].precio << ")" << endl;

    return 0;
}