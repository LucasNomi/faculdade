#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int j;
    float soma;

    j = 38;
    soma = 0;

    for (int i = 1; i <= 37; i++)
    {
        soma = soma + (j * (j-1)) / i;
    }

    cout << soma << endl;
    
    return 0;
}
