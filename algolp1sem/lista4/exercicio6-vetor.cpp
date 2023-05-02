#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    float arrEntrada[10];
    float maior, menor;

    // Entra com valores no vetor
    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor numerico: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    //Acha os maiores e menores valores do vetor
    for (int i = 0; i < size(arrEntrada); i++)
    {
        // Quando na primeira pos do vetor, assume maior e menor valor
        if (i == 0)
        {
            maior = arrEntrada[i];
            menor = arrEntrada[i];
        }
        else
        {
            // encontra outros valores menores ou maiores, se existirem nas
            // prox posicoes do vetor
            if (arrEntrada[i] > maior)
            {
                maior = arrEntrada[i];
            }
            else if (arrEntrada[i] < menor)
            {
                menor = arrEntrada[i];
            }
        }
    }

    cout << "Maior valor do array: " << maior << endl;
    cout << "Menor valor do array: " << menor << endl;

    return 0;
}
