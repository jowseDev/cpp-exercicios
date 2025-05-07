#include <iostream>

using namespace std;

int main()
{
    char b;
    cout << "Escolha uma opcao de cardapio para saber o valor:" << endl;
    cout << "Digite - C - para bolo de Chocolate" << endl;
    cout << "Digite - B - banana:" << endl;
    cout << "Digite - A - Amendoin:" << endl;
    cout << "Digite - L - Limão" << endl;
    cin >> b;

    switch(b)
    {
    case C:
        cout << "Bolo de chocolate: 17 reais \n";
    break;
    case B:
        cout << "Bolo de Banana: 12 reais \n";
    break;
    case A:
        cout << "Amendoin: 2394 reais \n";
    break;
    case L:
        cout << "Limao: 123 reais \n";
    break;
    default:
        cout << "Numero invalido!!";
    }


    return 0;
}
