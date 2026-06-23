#include <iostream>
using namespace std;

int main() {
    int numero;
    int somaPares = 0, somaImpares = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            somaImpares += i;
        }
    }

    cout << "Soma dos numeros pares: " << somaPares << endl;
    cout << "Soma dos numeros impares: " << somaImpares << endl;

    return 0;
}
