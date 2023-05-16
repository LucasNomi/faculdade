#include <iostream>
using namespace std;

int VerificadorPositivo(int);

int main(int argc, char const *argv[])
{
    int num;

    cout << "Insira um inteiro: ";
    cin >> num;

    cout << VerificadorPositivo(num);
    return 0;
}

int VerificadorPositivo(int num)
{

    if (num < 0)
    {
        return -1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
        return 1;
}