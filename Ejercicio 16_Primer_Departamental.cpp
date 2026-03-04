#include <iostream>
using namespace std;

void burbujaEnteros(int arreglo[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}


void burbujaCaracteres(char arreglo[], int n) {
    char temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}


class Persona {
public:
    string nombre;
    int edad;
};

void burbujaPersonas(Persona arreglo[], int n) {
    Persona temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arreglo[j].edad > arreglo[j + 1].edad) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}


int main() {


    int numeros[5] = {5, 3, 8, 4, 2};
    int n1 = 5;

    burbujaEnteros(numeros, n1);

    cout << "Enteros ordenados: ";
    for(int i = 0; i < n1; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;


    
    char letras[4] = {'d', 'a', 'c', 'b'};
    int n2 = 4;

    burbujaCaracteres(letras, n2);

    cout << "Caracteres ordenados: ";
    for(int i = 0; i < n2; i++) {
        cout << letras[i] << " ";
    }
    cout << endl << endl;


    
    Persona personas[3];

    personas[0].nombre = "Ana";
    personas[0].edad = 25;

    personas[1].nombre = "Luis";
    personas[1].edad = 20;

    personas[2].nombre = "Carlos";
    personas[2].edad = 30;

    int n3 = 3;

    burbujaPersonas(personas, n3);

    cout << "Personas ordenadas por edad:" << endl;
    for(int i = 0; i < n3; i++) {
        cout << personas[i].nombre << " - " 
             << personas[i].edad << endl;
    }

    return 0;
}