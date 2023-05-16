#include <iostream>
#include <cmath>
using namespace std;

void GeradorPrimos(int arr[]);
void PrintArray(int arr[], int size);

int main(int argc, char const *argv[])
{
    int arr[10];

    GeradorPrimos(arr);
    cout << "Primeiros 10 primos depois de 100: ";
    PrintArray(arr, size(arr));

    return 0;
}

void GeradorPrimos(int arr[])
{
    int qtdPrimos = 0;
    int qtdDivisores = 0;
    int num = 100;

    while (qtdPrimos < 10)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                qtdDivisores++;
            }
        }

        if (qtdDivisores == 2)
        {
            arr[qtdPrimos] = num;
            qtdPrimos++;
        }

        num++;
        qtdDivisores = 0;
    }
}

void PrintArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}