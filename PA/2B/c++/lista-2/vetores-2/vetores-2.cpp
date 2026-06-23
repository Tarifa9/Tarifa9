 int vetor[15];
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 15; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 15; i++) {

        if (vetor[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
    }

    cout << "\nQuantidade de pares: " << pares << endl;
    cout << "Quantidade de impares: " << impares << endl;

    return 0;
}
