#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[5][5];

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
