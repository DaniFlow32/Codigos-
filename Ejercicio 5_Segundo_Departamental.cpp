#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivo("datos.json");

    archivo << "{\n";
    archivo << "  \"alumnos\": [\n";
    archivo << "    {\"nombre\":\"Hugo\",\"edad\":20},\n";
    archivo << "    {\"nombre\":\"Luis\",\"edad\":21}\n";
    archivo << "  ]\n";
    archivo << "}\n";

    archivo.close();

    cout << "Archivo JSON generado.\n";
    return 0;
}