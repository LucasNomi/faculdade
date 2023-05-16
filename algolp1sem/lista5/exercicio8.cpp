#include <iostream>
using namespace std;

void DirectSelection(int arr[], int size);
void PrintArray(int arr[], int size);

int main(int argc, char const *argv[])
{
    int arr[50];

    for (int i = 0; i < 50; i++)
    {
        arr[i] = (50 - i);
    }

    cout << "Array Original: ";
    PrintArray(arr, size(arr));

    cout << endl;

    DirectSelection(arr, size(arr));

    cout << "Array Organizado: ";
    PrintArray(arr, size(arr));

    return 0;
}

void DirectSelection(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
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