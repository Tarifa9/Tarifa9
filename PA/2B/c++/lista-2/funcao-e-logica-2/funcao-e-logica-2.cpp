#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int calcularPotencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }

    return resultado;
}

int main() {
    int base, expoente;
    
    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite o expoente: ";
    cin >> expoente;

    int potencia = calcularPotencia(base, expoente);

    cout << base << " elevado a " << expoente
         << " = " << potencia << endl;

    return 0;
}
