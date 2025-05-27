#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char nome[50];
    ofstream arq;
    arq.open("ArquivoNomes.txt");

    for(int i = 0; i <= 3; i++){
        cout << "Digite o nome a ser salvo:" << endl;
        cin >> nome;
        cout << nome << endl;

    }
    arq.close();

    return 0;
}
