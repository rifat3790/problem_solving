#include<iostream>
using namespace std;

int main() {
    int sh, sm, fh, fm, h, m;

    cin >> sh >> sm >> fh >> fm;

    int totalStartMinutes = sh * 60 + sm;
    int totalEndMinutes = fh * 60 + fm;

    if (totalStartMinutes == totalEndMinutes) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    } else {
        int totalDurationMinutes = (totalEndMinutes - totalStartMinutes + 24 * 60) % (24 * 60);

        h = totalDurationMinutes / 60;
        m = totalDurationMinutes % 60;

        cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
    }

    return 0;
}
