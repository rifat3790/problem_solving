#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double s, n, i;
    cin >> s;

    if(s >= 0 && s <= 400.00){
        n = s + s * 0.15;
        i = n - s;
        cout << "Novo salario: " << fixed << setprecision(2) << n << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << i << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(s > 400.00 && s <= 800.00){
        n = s + s * 0.12;
        i = n - s;
        cout << "Novo salario: " << fixed << setprecision(2) << n << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << i << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(s > 800.00 && s <= 1200.00){
        n = s + s * 0.10;
        i = n - s;
        cout << "Novo salario: " << fixed << setprecision(2) << n << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << i << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(s > 1200.00 && s <= 2000.00){
        n = s + s * 0.07;
        i = n - s;
        cout << "Novo salario: " << fixed << setprecision(2) << n << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << i << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if(s > 2000.0){
        n = s + s * 0.04;
        i = n - s;
        cout << "Novo salario: " << fixed << setprecision(2) << n << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << i << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}
