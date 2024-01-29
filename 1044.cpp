#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cin >> a >> b;
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b%a == 0){
        cout << "Sao Multiplos" << endl;
    }
    else{
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;
}
