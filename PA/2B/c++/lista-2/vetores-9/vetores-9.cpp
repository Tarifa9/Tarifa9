#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numeros[10];
    int pares[10], impares[10], soma[10];
    int qtdPares = 0, qtdImpares = 0;

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] % 2 == 0) {
            pares[qtdPares] = numeros[i];
            qtdPares++;
        } else {
            impares[qtdImpares] = numeros[i];
            qtdImpares++;
        }
    }

    sort(pares, pares + qtdPares);
    sort(impares, impares + qtdImpares);

    int tamanho = (qtdPares > qtdImpares) ? qtdPares : qtdImpares;

    for (int i = 0; i < tamanho; i++) {
        int valorPar = (i < qtdPares) ? pares[i] : 0;
        int valorImpar = (i < qtdImpares) ? impares[i] : 0;

        soma[i] = valorPar + valorImpar;
    }

    cout << "\nVetor de pares:\n";
    for (int i = 0; i < qtdPares; i++) {
        cout << pares[i] << " ";
    }

    cout << "\n\nVetor de impares:\n";
    for (int i = 0; i < qtdImpares; i++) {
        cout << impares[i] << " ";
    }

    cout << "\n\nVetor soma:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << soma[i] << " ";
    }

    cout << endl;

    return 0;
}
