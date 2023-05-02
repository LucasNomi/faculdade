#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[10][10];

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