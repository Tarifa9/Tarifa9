#include <iostream>

using namespace std;

int main() {

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    cout << "\nVetor final: ";
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}
