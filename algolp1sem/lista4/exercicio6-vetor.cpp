#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    float arrEntrada[10];
    float maior, menor;

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

    cout << "Maior valor do array: " << maior << endl;
    cout << "Menor valor do array: " << menor << endl;

    return 0;
}
