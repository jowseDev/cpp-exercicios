#include <iostream>
using namespace std;

void contarRegressivo(int n) {
    if (n == 0) {
        return;  // caso base
    }
    cout << n << endl;
    contarRegressivo(n - 1);  // chamada recursiva
}

    int main() {
        contarRegressivo(5);
    return 0;
}
