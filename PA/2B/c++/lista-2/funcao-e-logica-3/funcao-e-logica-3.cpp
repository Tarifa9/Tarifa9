#include <iostream>
using namespace std;

float pesoMasculino(float altura) {
    return (72.7 * altura) - 58;
}

float pesoFeminino(float altura) {
    return (62.1 * altura) - 44.7;
}

int main() {
    char sexo;
    float altura, pesoIdeal;

    cout << "Digite o sexo (M/F): ";
    cin >> sexo;

    cout << "Digite a altura em metros: ";
    cin >> altura;

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = pesoMasculino(altura);
        cout << "Peso ideal masculino: " << pesoIdeal << " kg" << endl;
    }
    else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = pesoFeminino(altura);
        cout << "Peso ideal feminino: " << pesoIdeal << " kg" << endl;
    }
    else {
        cout << "Sexo invalido!" << endl;
    }

    return 0;
}
