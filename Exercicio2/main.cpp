#include <iostream>

// Se voc� tiver 77 graus Fahrenheit (F), a convers�o seria:
// C = (77 - 32) * 5/9
// C = 45 * 5/9
// C = 25
// Portanto, 77 graus Fahrenheit s�o 25 graus Celsius

using namespace std;

    float calcular(float);

int main()
{
   cout << "Digite o valor em Fahrenheit: " << endl;
   float r,  f; cin >> f;
        r = calcular(f);
   cout << "O Valor em Celcius �: " << r;
    return 0;
}

float calcular(float f2){
    float r;
        r = (f2 - 32) * 5/9;
    return r;
}
