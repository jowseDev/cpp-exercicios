#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    float n1, n2, n3, n4, m;

    cout << "Digite o nome do aluno: ";
    cin >> nome;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Digite a quarta nota: ";
    cin >> n4;

    media = (n1 + n2 + n3 + n4) / 4;

    cout << "Aluno " << nome << " possui media: " << media << endl;

    return 0;
}
