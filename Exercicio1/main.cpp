#include <iostream>

using namespace std;

    int calcular(int x,int y){
        int z; z = x / y;
        return z;
    }
int main()
{
    int n1, n2, r;
    cout << "Digite o primeiro numero:";
        cin >> n1;
    cout << "Digite o primeiro numero:";
        cin >> n2;
        r = calcular(n1, n2);
    cout << r;

    return 0;
}
