#include <iostream>
using namespace std;

int particionEnteros(int arr[], int inicio, int fin) {
    int pivote = arr[fin];
    int i = inicio - 1;
    int temp;

    for(int j = inicio; j < fin; j++) {
        if(arr[j] < pivote) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;

    return i + 1;
}

void quickSortEnteros(int arr[], int inicio, int fin) {
    if(inicio < fin) {
        int pi = particionEnteros(arr, inicio, fin);
        quickSortEnteros(arr, inicio, pi - 1);
        quickSortEnteros(arr, pi + 1, fin);
    }
}

int particionCaracteres(char arr[], int inicio, int fin) {
    char pivote = arr[fin];
    int i = inicio - 1;
    char temp;

    for(int j = inicio; j < fin; j++) {
        if(arr[j] < pivote) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;

    return i + 1;
}

void quickSortCaracteres(char arr[], int inicio, int fin) {
    if(inicio < fin) {
        int pi = particionCaracteres(arr, inicio, fin);
        quickSortCaracteres(arr, inicio, pi - 1);
        quickSortCaracteres(arr, pi + 1, fin);
    }
}

class Persona {
public:
    string nombre;
    int edad;
};

int particionPersonas(Persona arr[], int inicio, int fin) {
    int pivote = arr[fin].edad;
    int i = inicio - 1;
    Persona temp;

    for(int j = inicio; j < fin; j++) {
        if(arr[j].edad < pivote) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;

    return i + 1;
}

void quickSortPersonas(Persona arr[], int inicio, int fin) {
    if(inicio < fin) {
        int pi = particionPersonas(arr, inicio, fin);
        quickSortPersonas(arr, inicio, pi - 1);
        quickSortPersonas(arr, pi + 1, fin);
    }
}

int main() {

    int numeros[5] = {5, 3, 8, 4, 2};
    quickSortEnteros(numeros, 0, 4);

    cout << "Enteros ordenados: ";
    for(int i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    cout << endl << endl;

    char letras[4] = {'d', 'a', 'c', 'b'};
    quickSortCaracteres(letras, 0, 3);

    cout << "Caracteres ordenados: ";
    for(int i = 0; i < 4; i++)
        cout << letras[i] << " ";
    cout << endl << endl;

    Persona personas[3];

    personas[0].nombre = "Ana";
    personas[0].edad = 25;

    personas[1].nombre = "Luis";
    personas[1].edad = 20;

    personas[2].nombre = "Carlos";
    personas[2].edad = 30;

    quickSortPersonas(personas, 0, 2);

    cout << "Personas ordenadas por edad:" << endl;
    for(int i = 0; i < 3; i++)
        cout << personas[i].nombre << " - "
             << personas[i].edad << endl;

    return 0;
}