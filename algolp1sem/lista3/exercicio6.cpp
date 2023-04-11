#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float massaInicial, massaFinal, massaCheckpoint;
    int tempoDecorrido, horas, minutos, segundos;

    cout << "Massa inicial do material radioativo: ";
    cin >> massaInicial;

    massaFinal = massaCheckpoint = massaInicial;
    tempoDecorrido = 0;
    horas = 0;
    minutos = 0;
    segundos = 0;

    while (massaFinal > 0.5)
    {
        massaInicial = massaInicial / 2;
        massaFinal = massaInicial;
        tempoDecorrido += 50;
    }
    
    minutos = tempoDecorrido / 60;
    horas = minutos / 60;
    segundos = tempoDecorrido - (minutos * 60 + horas * 3600);

    cout << "Massa Inicial: " << massaCheckpoint << endl;
    cout << "Massa Final: " << massaFinal << endl;
    cout << "Tempo Decorrido em horas:" << horas << endl;
    cout << "Tempo Decorrido em minutos:" << minutos << endl;
    cout << "Tempo Decorrido em segundos:" << segundos << endl;
    return 0;
}
