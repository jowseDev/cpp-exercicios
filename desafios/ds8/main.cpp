#include <iostream>

using namespace std;
// Soma até digitar zero
// Faça um programa que leia números inteiros positivos e vá somando até que o usuário digite 0.
// Ao final, exiba a soma total dos números digitados.
int main()
{
   int i, n, s;
    while(i < 1){
    cout << "Digite o numeros a ser somado: (Digite 0 para parar o programa!)" << endl; cin >> n;
        if(n > 0){
            s = s + n;
        }else{
        i = 10;
        }
    }
        cout << "O Resultado foi: " << s;
    return 0;
}
