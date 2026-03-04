#include <iostream>

using namespace std;

int main() {
    const int N = 2;
    int A[N][N], B[N][N], C[N][N] = {0};

    cout << "Ingresa matriz A:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    cout << "Ingresa matriz B:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> B[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Resultado:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}