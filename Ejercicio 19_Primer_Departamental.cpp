#include <iostream>
using namespace std;

void burbujaEnteros(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void burbujaCaracteres(char arr[], int n) {
    char temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


class Persona {
public:
    string nombre;
    int edad;
};

void burbujaPersonas(Persona arr[], int n) {
    Persona temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j].edad > arr[j + 1].edad) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int numeros[5] = {5, 3, 8, 4, 2};
    burbujaEnteros(numeros, 5);

    cout << "Enteros ordenados: ";
    for(int i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    cout << endl << endl;


    char letras[4] = {'d', 'a', 'c', 'b'};
    burbujaCaracteres(letras, 4);

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

    burbujaPersonas(personas, 3);

    cout << "Personas ordenadas por edad:" << endl;
    for(int i = 0; i < 3; i++)
        cout << personas[i].nombre << " - "
             << personas[i].edad << endl;

    return 0;
}