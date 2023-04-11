#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    double soma;

    soma = 0;
    i = 1;
    j = 1;

    while (i <= 99 && j <= 50)
    {
        soma = soma + i/j;
        i += 2;
        j++;
    }

    cout << soma << endl;
    
    return 0;
}
