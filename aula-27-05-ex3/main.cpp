#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream arquivo;
    arquivo.open("arquivoFOR.txt");
    for(int i = 0; i<= 10; i++){
        arquivo << "Voc� est� salvando dados de: " << i << endl;
        cout << "Voc� est� salvando dados de: " << i << endl;
    }
    arquivo.close();

    return 0;
}
