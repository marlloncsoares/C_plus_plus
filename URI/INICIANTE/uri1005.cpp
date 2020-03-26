#include <iostream>
#include <iomanip>

using namespace std;

// Algoritmo para fazer o cálculo de média.

int main() {

    // Declara as variáveis
    float a, b, media;
    // Realiza a leitura dos dados
    cin >> a >> b;
    // Realiza o processamento dos dados
    media = ( (a * 3.5) + (b * 7.5) ) / (3.5 + 7.5);
    // Mostra o resultado para os usuários
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
    return 0;

}
