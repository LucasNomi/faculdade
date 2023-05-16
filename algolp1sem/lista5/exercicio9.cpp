#include <iostream>
#include <cmath>
using namespace std;

void TrocaNegativos(int arr[], int size);
void PrintArray(int arr[], int size);

int main(int argc, char const *argv[])
{
    int arr[25];
    int sizeArray = size(arr);

    for (int i = 0; i < sizeArray; i++)
    {
        arr[i] = (i % 2 == 0) ? i : i * (-1);
    }

    cout << "Array Original: ";
    PrintArray(arr, sizeArray);

    cout << endl;

    TrocaNegativos(arr, sizeArray);

    cout << "Array Trocado: ";
    PrintArray(arr, sizeArray);

    return 0;
}

void TrocaNegativos(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
}

void PrintArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}