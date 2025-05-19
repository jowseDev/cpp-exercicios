#include <iostream>

using namespace std;

int main()
{
    int n, r, i;
    cout << "Digite o numero da tabuada" << endl;
    cin >> n;

    for(i = 1; i <= 10; i++){
        r = i * n;
        cout << r << endl;
    }


    return 0;
 }
