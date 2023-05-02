#include <iostream>
using namespace std;

int fact(int n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int linhas;
    int comb;

    cout << "numero de linhas do triangulo de pascal: ";
    cin >> linhas;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            comb = fact(i) / (fact(j) * fact(i - j));

            cout << comb << " ";
        }

        cout << endl;
    }

    return 0;
}
