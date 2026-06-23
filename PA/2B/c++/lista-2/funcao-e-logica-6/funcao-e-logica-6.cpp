#include <iostream>

using namespace std;

void verificarDia(int numero) {

    if (numero == 1) {
        cout << "Domingo" << endl;
    }
    else if (numero == 2) {
        cout << "Segunda-feira" << endl;
    }
    else if (numero == 3) {
        cout << "Terca-feira" << endl;
    }
    else if (numero == 4) {
        cout << "Quarta-feira" << endl;
    }
    else if (numero == 5) {
        cout << "Quinta-feira" << endl;
    }
    else if (numero == 6) {
        cout << "Sexta-feira" << endl;
    }
    else if (numero == 7) {
        cout << "Sabado" << endl;
    }
    else {
        cout << "Numero invalido!" << endl;
    }
}

int main() {

    int numero;

    cout << "Digite um numero de 1 a 7: ";
    cin >> numero;

    verificarDia(numero);

    return 0;
}
