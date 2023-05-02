#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    float valor;
    float arrEntrada[10];

    // Entra com valores no array  
    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor numerico: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    // procura por valores iguais no array
    for (int i = 0; i < size(arrEntrada); i++)
    {   
        // a procura é sempre feita até um valor antes do valor da atual posicao
        // que a iteracao esta no vetor.
        for (int j = i+1; j < size(arrEntrada); j++)
        {   
            // Se um valor igual for encontrado é mostrado na tela.
            if (arrEntrada[j] == arrEntrada[i])
            {
                cout << "Valor igual encontrado no array: ";
                cout << arrEntrada[i] << endl;
            }
        } 
    }

    return 0;
}