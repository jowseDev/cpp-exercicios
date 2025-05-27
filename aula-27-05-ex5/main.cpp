#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    string abc;

    ifstream arq_leitura ("Arquivo.txt");

    if(arq_leitura.is_open()){
        while(! arq_leitura.eof()){
            //epf() - retorna true ao atingir o fim do arquivo
            getline (arq_leitura, abc);
            cout << abc << endl;
        }
        arq_leitura.close();
    }else{
    cout << "ERRO: arquivo nao foi encontrado! ou não existe!" << endl;
    }
    return 0;
}
