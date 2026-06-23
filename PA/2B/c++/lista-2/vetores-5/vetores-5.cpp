#include <iostream>

using namespace std;

int main() {
    int numeros[20];
    int indice = -1;

    cout << "Digite 20 numeros:\n";
    for (int i = 0; i < 20; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 20; i++) {
        if (numeros[i] < 0) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        cout << "\nO primeiro numero negativo esta no indice: " << indice << endl;
    } else {
        cout << "\nNao existe numero negativo no vetor." << endl;
    }

    return 0;
}
