#include <iostream>

using namespace std;
    void cumprimenta(char n, char n2){
        cout << "Olá, meu amigo "<< n << n2 << endl;
    }

int main()
{
    cout << "Entre com duas inicias (Sem Separação)" << endl;
    char m, m2; cin >> m; cin >> m2;
    cumprimenta(m, m2);
    return 0;
}
