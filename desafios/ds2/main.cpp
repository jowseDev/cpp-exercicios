#include <iostream>

using namespace std;

int main()
{
    //Faça um algoritmo que fique mostrando a mensagem Comando enquanto.
    //A cada frase mostrada, dê a opção para que o usuário escolher se
    //continua ou não S-Continuar ou N-Não continuar.
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
