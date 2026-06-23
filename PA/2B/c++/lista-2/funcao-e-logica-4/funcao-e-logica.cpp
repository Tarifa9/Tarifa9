#include <iostream>

using namespace std;

int adicionar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        cout << "Erro: divisao por zero!" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    cout << "\nResultados:" << endl;
    cout << "Adicao: " << adicionar(num1, num2) << endl;
    cout << "Subtracao: " << subtrair(num1, num2) << endl;
    cout << "Multiplicacao: " << multiplicar(num1, num2) << endl;
    cout << "Divisao: " << dividir(num1, num2) << endl;

    return 0;
}
