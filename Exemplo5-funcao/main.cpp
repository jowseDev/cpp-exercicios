#include <iostream>

using namespace std;

int qu(int n){
    return n * n;
}
int main()
{
    int s1, s2, s3;
    cout << "Entre com 3 numeros inteiros: " << endl;
    cin >> s1 >> s2 >> s3;
        if(s1 > 0 && s2 > 0 && s3 > 0 &&
           (qu(s1) + qu(s2)+ qu(s3)||
           qu(s2) + qu(s3)+ qu(s2)||
           qu(s3) + qu(s1)+ qu(s1) )){
                cout << " " << s1 << " " << s2 << " " << s3
                << " Podem formar um triangulo reto \n";

        }else{
                cout << " " << s1 << " " << s2 << " " << s3
                << " Não podem formar um triangulo reto \n";


        }
    return 0;
}
