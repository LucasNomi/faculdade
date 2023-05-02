#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[10][10];

    // Criacao de uma matriz onde:
    // A[i][j] = 2i+ 7j2,se i < j;
    // A[i][j] = (3i^2)1 se i=j;
    //A[i][j] = (4i^3)5j2 + 1 se i > j.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j)
            {
                matriz[i][j] = (2 * i) + (7 * j * 2);
            }
            else if (i == j)
            {
                matriz[i][j] = 3 * (i ^ 3);
            }
            else
            {
                matriz[i][j] = ((4 * (i ^ 3)) * (5 * (j ^ 2))) + 1;
            }
        }
    }

    // Desenha a matriz na tela
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matriz[i][j] << " ";
            if (j == 9)
            {
                cout << endl;
            }
        }
    }

    return 0;
}