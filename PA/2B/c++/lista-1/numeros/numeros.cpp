#include <iostream>
using namespace std;

int main() {
    double numero, soma = 0;

    cout << "Digite varios numeros (um numero negativo encerra o programa):" << endl;

    while (true) {
        cin >> numero;

        if (numero < 0) {
            break;
        }

        soma += numero;
    }

    cout << "A soma dos numeros digitados e: " << soma << endl;

    return 0;
}
