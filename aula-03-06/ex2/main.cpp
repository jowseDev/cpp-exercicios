#include <iostream>
using namespace std;

int main() {
    float numeros[15], soma = 0, media;
    int iguaisA4 = 0, maioresQueMedia = 0;
    for(int i = 0; i < 15; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
        soma += numeros[i];

        if(numeros[i] == 4)
            iguaisA4++;
    }
    media = soma / 15;
    for(int i = 0; i < 15; i++) {
        if(numeros[i] > media)
            maioresQueMedia++;
    }
    cout << "\nQuantidade de numeros iguais a 4: " << iguaisA4 << endl;
    cout << "Media dos numeros: " << media << endl;
    cout << "Quantidade de numeros maiores que a media: " << maioresQueMedia << endl;

    return 0;
}
