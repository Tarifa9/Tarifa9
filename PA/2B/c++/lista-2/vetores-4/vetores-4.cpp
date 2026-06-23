#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string nomes[10];

    cout << "Digite 10 nomes:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    sort(nomes, nomes + 10, greater<string>());

    cout << "\nNomes em ordem decrescente:\n";
    for (int i = 0; i < 10; i++) {
        cout << nomes[i] << endl;
    }

    sort(nomes, nomes + 10);

    cout << "\nNomes em ordem crescente:\n";
    for (int i = 0; i < 10; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
