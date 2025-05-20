#include <iostream>

using namespace std;

int main()
{
    // 10. Faça um programa que calcule a soma de todos os números ímpares entre 1 e 100.
    int i,r = 0;
    while(i <= 100){
        if(i%2){
            r = r + i;
        }
    cout << r << endl;
    i++;
    }

    return 0;
}
