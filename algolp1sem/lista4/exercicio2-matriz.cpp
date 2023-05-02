#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[5][5];

    // Quando a matriz estiver em uma posicao em que linha = coluna
    // a adiciona 1 naql posicao.
    // quando forem diferentes e adicionado 0.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == i)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    // Desenha matriz na tela
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << " ";
            if (j == 4)
            {
                cout << endl;
            }
            
        }
    }

    return 0;
}
