#include <iostream>

using namespace std;

int main() {
    int numeros[15];
    int indiceMenor = 0;
    int indiceMaior = 0;

    cout << "Digite 15 numeros:\n";
    for (int i = 0; i < 15; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 1; i < 15; i++) {
        if (numeros[i] < numeros[indiceMenor]) {
            indiceMenor = i;
        }

        if (numeros[i] > numeros[indiceMaior]) {
            indiceMaior = i;
        }
    }

    cout << "\nIndice do menor valor: " << indiceMenor << endl;
    cout << "Indice do maior valor: " << indiceMaior << endl;

    return 0; }
