#include <iostream>
using namespace std;

int MenorValor(int, int);

int main()
{
    int num1, num2;

    cout << "Insira dois valores";
    cin >> num1, num2;

    cout << MenorValor(num1, num2);

    return 0;
}

int MenorValor(int num1, int num2)
{

    int menor;

    menor = (num1 < num2) ? num1 : num2;

    return menor;
}