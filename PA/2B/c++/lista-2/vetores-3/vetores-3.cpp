#include <iostream>

using namespace std;

int main() {

    char letras[20];
    char busca;
    int contador = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Digite a letra " << i + 1 << ": ";
        cin >> letras[i];
    }

    cout << "\nDigite a letra para contar: ";
    cin >> busca;

    for (int i = 0; i < 20; i++) {
        if (letras[i] == busca) {
            contador++;
        }
    }

    cout << "\nA letra '" << busca << "' aparece " << contador << " vezes." << endl;

    return 0;
}
