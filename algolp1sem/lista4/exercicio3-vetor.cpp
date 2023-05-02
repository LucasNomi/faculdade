#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    float arrEntrada[10];
    float arrQuadrados[10];

    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "ENTRE COM UM VALOR REAL: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    for (int i = 0; i < size(arrEntrada); i++)
    {
        arrQuadrados[i] = arrEntrada[i] * arrEntrada[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Posicao: " << i;
        cout << " dos valores de entrada: " << arrEntrada[i] << endl;
        
        cout << "Posicao: " << i;
        cout << " dos valores ao quadrado: " << arrQuadrados[i] << endl;
    }
    
    return 0;
}
