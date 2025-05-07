#include <iostream>
using namespace std;

int main()
{
    int qtdP;
    cout << "Personagens de cod" << endl;
    cout << "Digite a quantidade de personagens a serem cadastrados: " << endl;
    cin >> qtdP;

   struct EstruturaPersonagem{
   char nome[60];
   char habilidade[60];
   char esquadrao[40];
   char patente[40];
   int anoDeAlistamento;
   int idade;


   }strPersonagem[qtdP];
    int i;
    for(i = 0; i < qtdP ;i++){
        cout << "Informe o nome do personagem:  ";
        cin.getline(strPersonagem[i].nome, 60);

        cout << "Informe a habilidade do personagem::  ";
        cin.getline(strPersonagem[i].habilidade, 60);

        cout << "Informe o esquadrao do seu personagem:  ";
        cin.getline(strPersonagem[i].esquadrao, 60);

        cout << "Informe a patente do seu personagem :  ";
        cin.getline(strPersonagem[i].patente, 60);

        cout << "Informe o Ano de Alistamento do seu personagem:  ";
        cin >> strPersonagem[i].anoDeAlistamento;

        cout << "Informe a Idade do seu perosnagem:  ";
        cin >> strPersonagem[i].idade;

        fflush(stdin);
    }
        cout << "\n Personagens Cadastrados com Sucesso! \n \n";
        for(i = 0; i < qtdP; i++){
            cout << "Nome do personagem:: " << strPersonagem[i].nome << endl;
            cout << "Habilidade: " << strPersonagem[i].habilidade << endl;
            cout << "Esquadrão: " << strPersonagem[i].esquadrao << endl;
            cout << "Patente:: " << strPersonagem[i].patente << endl;
            cout << "Ano de Alistamento:: " << strPersonagem[i].anoDeAlistamento << endl;
            cout << "Idade: " << strPersonagem[i].idade << endl;
                    }
    return 0;
}
