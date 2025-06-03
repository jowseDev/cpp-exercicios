#include <iostream>

using namespace std;

int main()
{
    int v[8], s = 0;
    for(int i = 0; i < 8; i++){
    cout << "Digite o:" << i << "-Numero" << endl;
    cin >> v[i];
    }
    cout << "Os valores digitados foram: ";
    for(int ii = 0; ii < 8; ii++){
        if(v[ii] % 3 == 0){
            s = s + 1;
        }
        cout << v[ii] << " - ";
    }
    cout << "Foram digitados: " << s << " Numeros multiplos de 3;";
    return 0;
}
