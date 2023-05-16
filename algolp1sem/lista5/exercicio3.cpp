#include <iostream>
using namespace std;

int Absoluto(int);

int main(int argc, char const *argv[])
{
    typedef int V[5];

    V valoresAbsolutos;

    for (int i = 0; i < 5; i++)
    {
        cout << "Absoluto de ";
        cin >> valoresAbsolutos[i];

        cout << Absoluto(valoresAbsolutos[i]) << endl;
    }

    return 0;
}

// Retorna o valor absoluto de um número
int Absoluto(int n)
{
    return (n < 0) ? n * (-1) : n;
}
