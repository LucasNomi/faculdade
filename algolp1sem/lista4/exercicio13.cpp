#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int value, maiorValor, menorValor, posMaiorValor, posMenorValor;
    int arr[5];
    
    // Atribuicao de valores no array
    for (int i = 0; i < size(arr); i++)
    {
        cout << "Valor da posicao: " << i << endl;
        cin >> value;

        arr[i] = value;

        // Leitura do array quando estiver na ultima interacao
        if (i == 4)
        {
            // Achar maior e menor valores e suas posicoes
            for (int i = 0; i < size(arr); i++)
            {
                if (i == 0)
                {
                    maiorValor = arr[i];
                    posMaiorValor = i;
                    menorValor = arr[i];
                    posMenorValor = i;
                }else
                {
                    if (arr[i] > maiorValor)
                    {
                        maiorValor = arr[i];
                        posMaiorValor = i;
                    }else if (arr[i] < menorValor)
                    {
                        menorValor = arr[i];
                        posMenorValor = i;
                    }                   
                }              
            }
        }
    }
    
    cout << "Maior valor encontrado na posicao: " << posMaiorValor << endl;
    cout << "Menor valor encontrado na posicao: " << posMenorValor << endl;

    return 0;
}
