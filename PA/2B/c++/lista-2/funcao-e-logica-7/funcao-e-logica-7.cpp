#include <iostream>

using namespace std;

void verificarOrdem(int v[], int tamanho) {
    bool crescente = true;
    bool decrescente = true;

    for (int i = 0; i < tamanho - 1; i++) {
        if (v[i] > v[i + 1]) {
            crescente = false;
        }

        if (v[i] < v[i + 1]) {
            decrescente = false;
        }
    }

    if (crescente) {
        cout << "Em ordem crescente" << endl;
    }
    else if (decrescente) {
        cout << "Em ordem decrescente" << endl;
    }
    else {
        cout << "Nao ordenados" << endl;
    }
}

int main() {
    int numeros[5];

    cout << "Digite 5 numeros:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    verificarOrdem(numeros, 5);

    return 0;
}
