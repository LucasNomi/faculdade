#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    float matriz[4][4];
    float maior, posLinha, posColuna;

    // entra valores na matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Qual valor introduzir na matriz: ";
            cin >> valor;
            matriz[i][j] = valor;
        }
    }

    // itera pela matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // valor da primeira linha e primeira coluna assume o maior valor encontrado
            if (j == 0 && i == 0)
            {
                maior = matriz[i][j];
                posLinha = j+1;
                posColuna = i+1;
            }
            else
            {
                // se algum valor encontrado for maior, o antigo é trocado pelo novo maior.
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    posLinha = j+1;
                    posColuna = i+1;
                }
            }
        }
    }

    // Mostra a matriz inteira
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