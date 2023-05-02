#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    float arrEntrada[10];
    float arrQuadrados[10];

    // Adiciona valores no vetor
    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "ENTRE COM UM VALOR REAL: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    // faz o quadrado de cada valor do vetor entrada
    // e adiciona no vetor quadrados
    for (int i = 0; i < size(arrEntrada); i++)
    {
        arrQuadrados[i] = arrEntrada[i] * arrEntrada[i];
    }

    // Mostra cada uma das posicoes tanto do vetor de entrada
    // quanto do resultado no quadrado.
    for (int i = 0; i < 10; i++)
    {
        cout << "Posicao: " << i;
        cout << " dos valores de entrada: " << arrEntrada[i] << endl;
        
        cout << "Posicao: " << i;
        cout << " dos valores ao quadrado: " << arrQuadrados[i] << endl;
    }
    
    return 0;
}
