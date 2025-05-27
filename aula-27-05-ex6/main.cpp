#include <iostream>
#include <>


using namespace std;

int main()
{
    if(){
    arq << "Maria Donizetti" << endl;
    arq << "Ivan Lopes" << endl;
    arq.close();

    arq.open("nomes.txt", ios::in);
    while(! arq.eof()){
        getline (arq,line);
        cout << linha << endl;
    }
    arq.close();
    }else{
    cout << "ERRO: arquivo nao foi aberto ou nao existe" << endl;
    }
    return 0;
}
