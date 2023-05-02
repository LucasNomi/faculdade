#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int valor, soma;
    int matriz[3][3];
    int arraySoma[3];

    soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Linha: " << j+1 << " Coluna: " << i+1 << " ";
            cin >> valor;

            matriz[i][j] = valor;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma += matriz[j][i];
        }
        arraySoma[i] = soma;
        soma = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arraySoma[i] << " ";
    }

    return 0;
}