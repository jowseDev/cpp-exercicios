#include <iostream>

using namespace std;

int main()
{
    // 2. Faça um programa que leia a idade de uma pessoa e diga se ela é menor de idade, maior de idade, ou idosa (60 anos ou mais).
    cout << "Digite sua idade: " << endl;
    int i; cin >> i;
    if(i > 60){
    cout << "Você é velho!" << endl;
    }else if(i < 18){
    cout << "Voçê é menor de idade!!" << endl;
    }else{
    cout << "Voçê é adulto!" << endl;
    }
    return 0;
}
