#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream arql;
    arql.open("nomes.txt", ios::app);
    // Função is_open - testa se o arquivo está realmete aberto
    if (arql.is_open()){
        arql << "Ivan Lopes" << endl;
        arql.close();
    }else{
    cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}
