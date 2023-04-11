#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float soma;

    soma = 0;

    for (int i = 1; i <= 10; i++)
    {
        soma = soma + ((-1^(i-1)) * i/(i*i));
    }

    cout << soma << endl;
    
    return 0;
}
