#include <iostream>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cin >> num;

    if (num < 2) {
        primo = false;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << "O numero e primo." << endl;
    } else {
        cout << "O numero nao e primo." << endl;
    }

    return 0;
}
