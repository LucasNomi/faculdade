#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    double soma;

    i = 1;
    j = 50;
    soma = 0;

    while (i <= 50 && j >= 1)
    {
        soma = soma + (2^i) / j;
        i++;
        j--;
    }

    cout << soma << endl;
    
    return 0;
}
