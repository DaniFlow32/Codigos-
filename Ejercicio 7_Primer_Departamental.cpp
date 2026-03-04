#include <iostream>
#include <string>

using namespace std;

struct AutoPE {
    float precio;
    int anio;
};

class AutoPOO {
public:
    float precio;
    int anio;

    void imprimirDatos() {
        cout << "Auto (Clase) -> Modelo: " << anio << " | Precio: $" << precio << endl;
    }
};


struct PersonaPE {
    string nombre, ap, am, genero;
    int edad;
};

class PersonaPOO {
public:
    string nombre, ap, am, genero;
    int edad;

    void mostrarInfo() {
        cout << "Persona (Clase): " << nombre << " " << ap << " " << am << endl;
        cout << "Edad: " << edad << " | Genero: " << genero << endl;
    }
};


int main() {
    
    AutoPE miAutoStruct = {18500.00, 2019}; 
    
    AutoPOO miAutoClase; 
    miAutoClase.precio = 42000.50;
    miAutoClase.anio = 2025;

    PersonaPE sujetoPE = {"Carlos", "Ruiz", "Sosa", "Masculino", 22};
    
    PersonaPOO sujetoPOO;
    sujetoPOO.nombre = "Elena";
    sujetoPOO.ap = "Torres";
    sujetoPOO.am = "Vaca";
    sujetoPOO.genero = "Femenino";
    sujetoPOO.edad = 21;

    cout << "===== DATOS DE AUTOMOVILES =====" << endl;
    cout << "Auto Struct -> Anio: " << miAutoStruct.anio << " | Precio: $" << miAutoStruct.precio << endl;
    miAutoClase.imprimirDatos();

    cout << "\n===== DATOS DE PERSONAS =====" << endl;
    cout << "Persona Struct -> " << sujetoPE.nombre << " " << sujetoPE.ap << " (" << sujetoPE.edad << " anos)" << endl;
    sujetoPOO.mostrarInfo();

    cout << "==============================" << endl;

    return 0;
}