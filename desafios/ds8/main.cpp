#include <iostream>

using namespace std;
// Soma at� digitar zero
// Fa�a um programa que leia n�meros inteiros positivos e v� somando at� que o usu�rio digite 0.
// Ao final, exiba a soma total dos n�meros digitados.
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
