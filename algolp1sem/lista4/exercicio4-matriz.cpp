#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    float matriz[4][4];
    float maior, posLinha, posColuna;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Qual valor introduzir na matriz: ";
            cin >> valor;
            matriz[i][j] = valor;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0 && i == 0)
            {
                maior = matriz[i][j];
                posLinha = j+1;
                posColuna = i+1;
            }
            else
            {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    posLinha = j+1;
                    posColuna = i+1;
                }
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << " ";
            if (j == 3)
            {
                cout << endl;
            }
            
        }
    }

    cout << endl;

    cout << "Maior valor encontrado: " << maior << endl;
    cout << "Linha: " << posLinha << endl;
    cout << "Coluna: " << posColuna << endl;
    return 0;
}