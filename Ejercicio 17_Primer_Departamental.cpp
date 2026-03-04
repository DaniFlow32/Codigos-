#include <iostream>
using namespace std;

void mergeEnteros(int arr[], int inicio, int medio, int fin) {
    int i = inicio;
    int j = medio + 1;
    int k = 0;

    int temp[100];

    while(i <= medio && j <= fin) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= medio) {
        temp[k++] = arr[i++];
    }

    while(j <= fin) {
        temp[k++] = arr[j++];
    }

    for(int x = 0; x < k; x++) {
        arr[inicio + x] = temp[x];
    }
}

void mergeSortEnteros(int arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergeSortEnteros(arr, inicio, medio);
        mergeSortEnteros(arr, medio + 1, fin);
        mergeEnteros(arr, inicio, medio, fin);
    }
}

void mergeCaracteres(char arr[], int inicio, int medio, int fin) {
    int i = inicio;
    int j = medio + 1;
    int k = 0;

    char temp[100];

    while(i <= medio && j <= fin) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= medio) {
        temp[k++] = arr[i++];
    }

    while(j <= fin) {
        temp[k++] = arr[j++];
    }

    for(int x = 0; x < k; x++) {
        arr[inicio + x] = temp[x];
    }
}

void mergeSortCaracteres(char arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergeSortCaracteres(arr, inicio, medio);
        mergeSortCaracteres(arr, medio + 1, fin);
        mergeCaracteres(arr, inicio, medio, fin);
    }
}
class Persona {
public:
    string nombre;
    int edad;
};


void mergePersonas(Persona arr[], int inicio, int medio, int fin) {
    int i = inicio;
    int j = medio + 1;
    int k = 0;

    Persona temp[100];

    while(i <= medio && j <= fin) {
        if(arr[i].edad < arr[j].edad) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= medio) {
        temp[k++] = arr[i++];
    }

    while(j <= fin) {
        temp[k++] = arr[j++];
    }

    for(int x = 0; x < k; x++) {
        arr[inicio + x] = temp[x];
    }
}

void mergeSortPersonas(Persona arr[], int inicio, int fin) {
    if(inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergeSortPersonas(arr, inicio, medio);
        mergeSortPersonas(arr, medio + 1, fin);
        mergePersonas(arr, inicio, medio, fin);
    }
}

int main() {

    int numeros[5] = {5, 3, 8, 4, 2};
    mergeSortEnteros(numeros, 0, 4);

    cout << "Enteros ordenados: ";
    for(int i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    cout << endl << endl;

    
    char letras[4] = {'d', 'a', 'c', 'b'};
    mergeSortCaracteres(letras, 0, 3);

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

    mergeSortPersonas(personas, 0, 2);

    cout << "Personas ordenadas por edad:" << endl;
    for(int i = 0; i < 3; i++)
        cout << personas[i].nombre << " - " 
             << personas[i].edad << endl;

    return 0;
}