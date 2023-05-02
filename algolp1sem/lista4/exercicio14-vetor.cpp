#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float valor;
    float arrEntrada[10];

    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor numerico: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    for (int i = 0; i < size(arrEntrada); i++)
    {
        for (int j = i+1; j < size(arrEntrada); j++)
        {
            if (arrEntrada[j] == arrEntrada[i])
            {
                cout << "Valor igual encontrado no array: ";
                cout << arrEntrada[i] << endl;
            }
        } 
    }

    return 0;
}