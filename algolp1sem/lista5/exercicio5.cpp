#include <iostream>
using namespace std;

int VerificadorPar(int);

int main(int argc, char const *argv[])
{
    int num;

    cout << "Insira um inteiro: ";
    cin >> num;

    cout << VerificadorPar(num);

    return 0;
}

int VerificadorPar(int num)
{
    return (num % 2 == 0) ? 1 : 0;
}
