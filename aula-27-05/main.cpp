#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    //ofstream - Arquivo apenas para saida de dados.
        arquivo.open ("Arquivo.txt"); //Abre o arquivo, se tivesse o diretorio na frente abriria onde ele est�
        arquivo << "Gabriel" << endl;
        arquivo << "Jos�" << endl;
        arquivo << "Maria luiza" << endl;

        arquivo.close(); // fecha o arquvio

    return 0;
}
