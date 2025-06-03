#include <iostream>
#include <vector> // Necessário para usar vector

using namespace std;

int main()
{
    int p;
    cout << "Digite a quantidade de produtos: ";
    cin >> p;
    float n, s = 0;

    for(int i = 0; i < p; i++) {
        cout << "Digite o valor do produto " << i << ": ";
        cin >> n;
        s = s + n;
}

    cout << "O valor total de todos os produtos foi: " << s << endl;
    return 0;
}
