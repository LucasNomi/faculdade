#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float valor;
    float arrEntrada[5];
    float maior, menor, somaValores, mediaValores;

    somaValores = 0;

    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor numerico: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    for (int i = 0; i < size(arrEntrada); i++)
    {
        if (i == 0)
        {
            maior = arrEntrada[i];
            menor = arrEntrada[i];
        }
        else
        {
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

    for (int i = 0; i < size(arrEntrada); i++)
    {
        if (i <= 5)
        {
            somaValores += arrEntrada[i];
        }

        cout << "Valor lido na posicao: " << i << " " << arrEntrada[i] << endl;
    }

    mediaValores = somaValores / size(arrEntrada);

    cout << "Maior valor encontrado: " << maior << endl;
    cout << "Menor valor encontrado: " << menor << endl;
    cout << "Media dos valores: " << mediaValores << endl;
}
