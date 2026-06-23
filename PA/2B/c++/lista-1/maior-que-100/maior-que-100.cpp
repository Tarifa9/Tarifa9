#include <iostream>
using namespace std;

int main() {
    double numero;
    double soma = 0;
    double multiplicacao = 1;

    cout << "Digite numeros ate que a soma ultrapasse 100:" << endl;

    while (soma <= 100) {
        cin >> numero;

        soma += numero;
        multiplicacao *= numero;
    }

    cout << "A multiplicacao dos numeros lidos e: " << multiplicacao << endl;

    return 0;
}
