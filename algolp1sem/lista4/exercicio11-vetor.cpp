#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor, somaPositivos;
    int qtdNeg;
    int arr[10];

    qtdNeg = 0;
    somaPositivos = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira um valor real no vetor: ";
        cin >> valor;

        arr[i] = valor;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            qtdNeg++;
        }
        else
        {
            somaPositivos += arr[i];
        }
    }

    cout << "Quantidade de negativos no vetor: " << qtdNeg << endl;
    cout << "Soma dos valores positivos do vetor: " << somaPositivos << endl;

    return 0;
}
