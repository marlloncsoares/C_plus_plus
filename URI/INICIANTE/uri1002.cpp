#include <iostream>
using namespace std;

// Algoritmo realiza o cálculo da área.
// Recebe os dados referente ao raio e logo em seguida 
// faz o processamento dos dados realizando o cálculo
// da área = (rario*raio) * pi.
int main () {
    
    // Declara variáveis para serem utilizadas.    
    double raio, area;
    // Realiza a leitura dos dados
    cin >> raio;    
    // Realiza processamento dos dados
    area = (raio*raio) * 3.14159;
    // Mostra o resultado de saída para o usuário final.
    cout << "A=" << area << endl;
    return 0;

}