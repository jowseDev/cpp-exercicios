#include <iostream>

using namespace std;

    int obtem_valor(void){
    int valor;
    cout << "Entre o valor";
    cin >> valor;
    return valor;
    }

int main()
{
    int a, b;
    a = obtem_valor();
    b = obtem_valor();
    cout << "Soma: " << a + b << endl;
    return 0;
}
