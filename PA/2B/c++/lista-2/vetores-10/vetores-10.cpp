#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int v[10];

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }

    sort(v, v + 10);

    cout << "\nTerceiro menor valor: " << v[2] << endl;

    return 0;
}
