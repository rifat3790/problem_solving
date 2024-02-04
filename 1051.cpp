#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x,m;
    cin >> x;

    if(x >= 0 && 2000.00 > x){
        cout << "Isento" << endl;
    }
    else if(2000.00 < x && 3000.00 >= x){
        m = (x - 2000.00) * 0.08;
        cout << "R$ " << fixed << setprecision(2) << m << endl;
    }
    else if(3000.00 < x && 4500.00 >= x){
        m = (x - 3000.00) * 0.18;
        cout << "R$ " << fixed << setprecision(2) << (80 + m) << endl;
    }
    else if(4500.00 < x){
        m = (x - 4500.00) * 0.28;
        cout <<"R$ " << fixed << setprecision(2) <<(350 + m) << endl;
    }
    return 0;
}
