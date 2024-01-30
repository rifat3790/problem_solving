#include<iostream>
using namespace std;
int main()
{
    int a, b, r, x;
    cin >> a >> b;
    if(a >= b){
        r = 24 - a;
        x = r + b;
    }
    else {
        x = b - a;
    }
    cout << "O JOGO DUROU " << x << " HORA(S)" << endl;
    return 0;
}
