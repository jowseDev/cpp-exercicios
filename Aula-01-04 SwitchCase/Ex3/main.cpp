#include <iostream>

using namespace std;

int main()
{
    int op, n1, n2, r;
    cout << "Digite 1 para Somar" << endl;
    cout << "Digite 2 para Subtrair:" << endl;
    cout << "Digite 3 para Multiplicar:" << endl;
    cout << "Digite 4 para Dividir" << endl;
    cin >> op;
    cout << "Digite o primeiro numero:" endl;
    cin >> n1;
    cout << "Digite o segundo numero numero:" endl;
    cin >> n2;

    switch(op)
    {
    case 1:
        r = n1 + n2;
        cout << "O resultado é: ", r;
    break;
    case 2:
        r = n1 - n2;
        cout << "O resultado é: " , r;
    break;
    case 3:
        r = n1 * n2;
        cout << "O resultado é:", r;
    break;
    case 4:
        r = n1 / n2;
        cout << "O resultado é:", r;
    break;
    default:
        cout << "Numero invalido!!";
    }


    return 0;
}
