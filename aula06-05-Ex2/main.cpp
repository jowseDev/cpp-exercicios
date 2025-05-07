#include <iostream>

using namespace std;
int acheMaior (int a, int b, int c)
{
int maior;
maior = a;

if(b < maior){
    maior = b;
    }
if(c > maior){
    maior = c;
    }
    return maior;
}



int main()
{
    int primeiro, segundo, terceiro, x, y, z, maior_1, maior_2;
    cout << "Digite o primeiro conjuntos de numeros inteiros: ";
    cin >> primeiro >> segundo >> terceiro;
        maior_1 = acheMaior(primeiro, segundo, terceiro);


    cout << "Digite o segundo conjunto de tres numeros inteiros:";
    cin >> x >> y >> z;

    maior_2 = acheMaior(x, y, z);

    cout << endl << maior_1 << " + " << maior_2 << " = " << maior_1 + maior_2 << endl;


    return 0;
}
