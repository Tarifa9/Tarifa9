#include <iostream>

using namespace std;

// Função para substituir as vogais
void substituirVogais(string palavra) {

    for (int i = 0; i < palavra.length(); i++) {

        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' ||
            palavra[i] == 'o' || palavra[i] == 'u' ||

            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' ||
            palavra[i] == 'O' || palavra[i] == 'U') {

            palavra[i] = '*';
        }
    }

    cout << "Nova palavra: " << palavra << endl;
}

int main() {

    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    substituirVogais(palavra);

    return 0;
}
