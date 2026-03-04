#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivo("datos.xml");

    archivo << "<estudiantes>\n";
    archivo << "  <estudiante>\n";
    archivo << "    <nombre>Hugo</nombre>\n";
    archivo << "    <edad>20</edad>\n";
    archivo << "  </estudiante>\n";
    archivo << "</estudiantes>\n";

    archivo.close();
    cout << "XML generado correctamente.\n";

    return 0;
}