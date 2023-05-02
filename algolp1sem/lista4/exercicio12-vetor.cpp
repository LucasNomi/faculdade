#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float valor;
    float arrEntrada[5];
    float maior, menor, somaValores, mediaValores;

    somaValores = 0;

    // entra valores no vetor
    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor numerico: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    // encontra maior e menor valor do vetor
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

    // Soma todos os valores do vetor
    for (int i = 0; i < size(arrEntrada); i++)
    {
        if (i <= 5)
        {
            somaValores += arrEntrada[i];
        }

        cout << "Valor lido na posicao: " << i << " " << arrEntrada[i] << endl;
    }

    // Faz a media da soma dos valores do vetor, pelo tamanho do vetor
    mediaValores = somaValores / size(arrEntrada);

    cout << "Maior valor encontrado: " << maior << endl;
    cout << "Menor valor encontrado: " << menor << endl;
    cout << "Media dos valores: " << mediaValores << endl;
}
