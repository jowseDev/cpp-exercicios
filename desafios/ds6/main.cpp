#include <iostream>

using namespace std;

int main()
{
    //3. Crie um programa que leia um n�mero inteiro e diga se ele � par ou �mpar.
    cout << "Digite um numero:" << endl;
    int n; cin>>n;
    if(n % 2){
        cout << "Impar";
    }else{
        cout << "Par";
    }

    return 0;
}
