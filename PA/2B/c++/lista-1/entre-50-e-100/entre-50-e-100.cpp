#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Digite um numero entre 50 e 100: ";
    cin >> limite;

    if (limite < 50 || limite > 100) {
        cout << "Numero invalido! Digite um valor entre 50 e 100." << endl;
        return 0;
    }

    int a = 0, b = 1, proximo;

    cout << "Sequencia de Fibonacci ate " << limite << ":" << endl;
    cout << a << " " << b << " ";

    proximo = a + b;

    while (proximo <= limite) {
        cout << proximo << " ";
        a = b;
        b = proximo;
        proximo = a + b;
    }

    cout << endl;

    return 0;
}
