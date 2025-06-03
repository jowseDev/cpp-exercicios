#include <iostream>

using namespace std;

int main()
{
    int v1[10], v2[10], r = 0;
    for(int i = 0; i < 10; i++){
        cout << "Digite o " << i << "º valor do vetor 1: ";
        cin >> v1[i];
    }
    for(int i = 0; i < 10; i++){
        cout << "Digite o " << i << "º valor do vetor 2: ";
        cin >> v2[i];
    }
    cout << "\nOs valores digitados no vetor 1 foram:\n";
    for(int i = 0; i < 10; i++){
        cout << v1[i] << " - ";
    }
    cout << "\n\nOs valores digitados no vetor 2 foram:\n";
    for(int i = 0; i < 10; i++){
        cout << v2[i] << " - ";
    }
    cout << "\n\nOs valores multiplicados (v1[i] * v2[i]) foram:\n";
    for(int i = 0; i < 10; i++){
        r = v1[i] * v2[i];
        cout << r << " - ";
    }

    cout << endl;
    return 0;
}
