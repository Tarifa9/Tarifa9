#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;

    cout << "=== Jogo de Adivinhacao ===" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    do {
        cout << "Digite seu palpite: ";
        cin >> palpite;

        tentativas++;

        if (palpite > numeroSecreto) {
            cout << "Muito alto!" << endl;
        } else if (palpite < numeroSecreto) {
            cout << "Muito baixo!" << endl;
        } else {
            cout << "Correto!" << endl;
        }

    } while (palpite != numeroSecreto);

    cout << "Voce acertou em " << tentativas << " tentativa(s)." << endl;

    return 0;
}
