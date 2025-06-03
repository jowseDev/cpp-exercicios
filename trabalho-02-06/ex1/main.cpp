#include <iostream>

using namespace std;

int main()
{
    int v[10], s = 0;
    for(int i = 0; i < 10; i++){
    cout << "Digite o:" << i << "-Numero" << endl;
    cin >> v[i];
    }
    for(int ii = 0; ii < 10; ii++){
        s = s + v[ii];
        cout << v[ii] << "-";
    }
    cout << "A soma dos vetores foi: " << s;
    return 0;
}
