#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int valor, soma;
    int matriz[3][3];

    soma = 0;

    // Entra com valores na matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Insira um valor na matriz: ";
            cin >> valor;

            matriz[i][j] = valor;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Se i for maior que j, então estamos em uma posição
            // abaixo da diagonal principal. 
            //Somamos todos os valores abaixo da diagonal principal
            if (i > j)
            {
                soma += matriz[i][j];
            }
        }
    }

    cout << "Soma dos elementos abaixo da diagonal principal: " << soma;

    return 0;
}