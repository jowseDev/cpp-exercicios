#include <iostream>

using namespace std;

int main()
{
    //Fa�a um algoritmo que fique mostrando a mensagem Comando enquanto.
    //A cada frase mostrada, d� a op��o para que o usu�rio escolher se
    //continua ou n�o S-Continuar ou N-N�o continuar.
    char r; int i;
    while(i < 1){
    cout << "Digite {Sim} para continuar e Nao para sair!";
    cin >> r;
      if(r == 'Nao' || r == 'nao'){
            i++;
        }
    }
    return 0;
}
