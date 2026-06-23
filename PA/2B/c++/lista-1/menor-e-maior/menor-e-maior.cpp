#include <iostream>
using namespace std;

int main() {
    int numero, menor, maior;

    cout << "Digite 10 numeros:" << endl;

    cin >> numero;
    menor = numero;
    maior = numero;

    for (int i = 2; i <= 10; i++) {
        cin >> numero;

        if (numero < menor) {
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }
    }

    cout << "Menor numero: " << menor << endl;
    cout << "Maior numero: " << maior << endl;

    return 0;
}
