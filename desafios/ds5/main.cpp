#include <iostream>

using namespace std;

int main()
{
    // 2. Fa�a um programa que leia a idade de uma pessoa e diga se ela � menor de idade, maior de idade, ou idosa (60 anos ou mais).
    cout << "Digite sua idade: " << endl;
    int i; cin >> i;
    if(i > 60){
    cout << "Voc� � velho!" << endl;
    }else if(i < 18){
    cout << "Vo�� � menor de idade!!" << endl;
    }else{
    cout << "Vo�� � adulto!" << endl;
    }
    return 0;
}
