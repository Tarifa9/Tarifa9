#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool ehImpar(int numero) {
    return ((numero % 2) != 0);
}

int main(int argc, char** argv) {
    int numero;
    int soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Soma dos números ímpares até o número lido
    for (int i = 1; i <= numero; i++) {
        if (ehImpar(i)) {
            soma += i;
        }
    }

    cout << "A soma dos numeros impares ate " << numero << " é: " << soma << endl;

    return 0;
}

