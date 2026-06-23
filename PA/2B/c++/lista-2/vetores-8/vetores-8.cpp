#include <iostream>

using namespace std;

int main() {
    char letras[20];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int contador[5] = {0};

    cout << "Digite 20 letras:\n";
    for (int i = 0; i < 20; i++) {
        cout << "Letra " << i + 1 << ": ";
        cin >> letras[i];

        for (int j = 0; j < 5; j++) {
            if (letras[i] == vogais[j]) {
                contador[j]++;
            }
        }
    }


    cout << "\nQuantidade de vogais:\n";
    for (int i = 0; i < 5; i++) {
        cout << vogais[i] << ": " << contador[i] << endl;
    }

    return 0;
}
