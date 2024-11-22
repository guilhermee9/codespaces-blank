#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        cout << "Número de termos inválido" << endl;
        return -1;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void imprimirSequencia(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Digite a quantidade de termos da sequência de Fibonacci: ";
    cin >> n;

    imprimirSequencia(n);

    return 0;
}