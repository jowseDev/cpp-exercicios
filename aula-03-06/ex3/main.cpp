#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o tamanho N da matriz NxN: ";
    cin >> N;

    int matriz[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << "Digite um valor para a posicao [" << i+1 << "," << j+1 << "] da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nOs valores da matriz sao:\n";
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nA matriz sem a primeira linha e primeira coluna:\n";
    for(int i = 1; i < N; i++) {
        for(int j = 1; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
