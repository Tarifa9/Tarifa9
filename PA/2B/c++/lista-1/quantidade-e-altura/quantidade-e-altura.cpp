#include <iostream>
using namespace std;

int main() {
    int quantidade;
    float altura, soma = 0, media;

    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++) {
        cout << "Digite a altura da pessoa " << i << ": ";
        cin >> altura;

        soma += altura;
    }

    media = soma / quantidade;

    cout << "A altura media do grupo e: " << media << endl;

    return 0;
}
