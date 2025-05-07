#include <iostream>

using namespace std;

int main()
{
    int op;
    cout << "Digite 1 para prato do dia:" << endl;
    cout << "Digite 2 para Lasanha:" << endl;
    cout << "Digite 3 para Picanha grelhada:" << endl;
    cout << "Digite 4 para Salada simples" << endl;
    cin >> op;

    switch(op)
    {
    case 1:
        cout << "Prato do dia: 17 reais \n";
    break;
    case 2:
        cout << "Lasanha: 12 reais \n";
    break;
    case 3:
        cout << "Picanha: 2394 reais \n";
    break;
    case 4:
        cout << "Salada simples: 123 reais \n";
    break;
    default:
        cout << "Numero invalido!!";
    }


    return 0;
}
