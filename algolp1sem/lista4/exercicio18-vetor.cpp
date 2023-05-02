#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int valor, numPesquisa;
    int arrEntrada[10];

    // Entra com valores no vetor
    for (int i = 0; i < size(arrEntrada); i++)
    {
        cout << "Entre com um valor: ";
        cin >> valor;

        arrEntrada[i] = valor;
    }

    // Entra com um numero para procurar multiplos
    cout << "Entre com um numero de pesquisa: ";
    cin >> numPesquisa;

    // Itera pelo vetor até encontrar um numero que divide inteiro pelo numero
    // de pesquisa
    for (int i = 0; i < size(arrEntrada); i++)
    {   
        // Mostra o numero multiplo na tela
        if (arrEntrada[i] % numPesquisa == 0)
        {
            cout << "Encontrado valor multiplo: " << arrEntrada[i] << endl;
        }
        
    }
    
    
    return 0;
}
