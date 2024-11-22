#include <iostream>

using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Digite o número do termo da sequência de Fibonacci: ";
    cin >> n;

    cout << "Sequência de Fibonacci até o termo " << n << ":" << endl;
    cout << t1 << ", " << t2 << ", ";

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}