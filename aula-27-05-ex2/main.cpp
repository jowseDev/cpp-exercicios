#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream arql;
    arql.open("nomes.txt", ios::app);
    // Fun��o is_open - testa se o arquivo est� realmete aberto
    if (arql.is_open()){
        arql << "Ivan Lopes" << endl;
        arql.close();
    }else{
    cout << "ERRO: arquivo n�o foi aberto ou n�o existe" << endl;
    }
    return 0;
}
