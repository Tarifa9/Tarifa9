#include <iostream>
using namespace std;

int main() {
    int limite, multiplo;

    cout << "Digite o valor final: ";
    cin >> limite;

    cout << "Digite o numero base dos multiplos: ";
    cin >> multiplo;

    cout << "Multiplos de " << multiplo << " entre 1 e " << limite << ":" << endl;

    for (int i = 1; i <= limite; i++) {
        if (i % multiplo == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
