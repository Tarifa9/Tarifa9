#include <iostream>

using namespace std;

int main() {
    int vetor1[10], vetor2[10];
    int somaPositivos = 0;

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetor1[i];

        vetor2[i] = -vetor1[i];
    }

    for (int i = 0; i < 10; i++) {
        if (vetor1[i] > 0) {
            somaPositivos += vetor1[i];
        }

        if (vetor2[i] > 0) {
            somaPositivos += vetor2[i];
        }
    }

    cout << "\nVetor original:\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor1[i] << " ";
    }

    cout << "\n\nVetor com sinais invertidos:\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor2[i] << " ";
    }

    cout << "\n\nSoma dos valores positivos dos dois vetores: "
         << somaPositivos << endl;

    return 0;
}
