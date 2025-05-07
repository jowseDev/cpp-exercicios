#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    while(c <= 100){
        if(c % 10 == 0){
        cout << c << endl;
        }
        c++;
    }
    cout << "Acabou" << endl;
      return 0;
}
