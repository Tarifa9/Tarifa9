#include <iostream>

using namespace std;

double calcularArea(double raio) {

    double area;

    area = 3.14 * raio * raio;

    return area;
}

int main() {

    double raio;
    double somaAreas = 0;

    for (int i = 1; i <= 5; i++) {

        cout << "Digite o raio do circulo " << i << ": ";
        cin >> raio;

        somaAreas = somaAreas + calcularArea(raio);
    }

    cout << "Soma das areas = " << somaAreas << endl;

    return 0;
}
