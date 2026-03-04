#include <iostream>
using namespace std;

class Matriz {
private:
    int n;
    int **data;

public:
    Matriz(int size) {
        n = size;
        data = new int*[n];
        for (int i = 0; i < n; i++)
            data[i] = new int[n]();
    }

    void llenar() {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> data[i][j];
    }

    int& get(int i, int j) {
        return data[i][j];
    }

    void mostrar() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    ~Matriz() {
        for (int i = 0; i < n; i++)
            delete[] data[i];
        delete[] data;
    }
};

int main() {
    int n;
    cout << "Dimension: ";
    cin >> n;

    Matriz A(n);

    cout << "Llena la matriz:\n";
    A.llenar();

    cout << "\nMatriz ingresada:\n";
    A.mostrar();

    return 0;
}