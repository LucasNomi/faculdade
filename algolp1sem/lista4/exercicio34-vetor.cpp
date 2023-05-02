#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    bool diff = true;
    float v[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Valor para ser adicionado no vetor: ";
        cin >> valor;

        if (i == 0)
        {
            v[i] = valor;
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                if (valor == v[j])
                {
                    diff = false;
                }
            }

            if (diff == false)
            {
                cout << "Valor ja existe no vetor." << endl;
                i -= 1;
                diff = true;
            }
            else
            {
                v[i] = valor;
            }
        }
    }

    cout << v[9];
    return 0;
}
