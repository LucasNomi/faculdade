#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int valor, numPesquisa;
    int arrEntrada[10];

    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    cout << "Entre com um numero de pesquisa: ";
    cin >> numPesquisa;

    for (int i = 0; i < size(arrEntrada); i++)
    {
        if (arrEntrada[i] % numPesquisa == 0)
        {
            cout << "Encontrado valor multiplo: " << arrEntrada[i] << endl;
        }
        
    }
    
    
    return 0;
}
