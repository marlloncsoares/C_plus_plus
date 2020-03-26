#include <iostream>
#include <iomanip>

using namespace std;

// Programa faz o cálculo da média.

int main() {

    double a, b, c, media;
    cin >> a >> b >> c;
    media = ( (a*2) + (b*3) + (c*5) ) / (2+3+5);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
    return 0;
}
