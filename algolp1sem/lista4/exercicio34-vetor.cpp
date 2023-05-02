#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor;
    bool diff = true;
    float v[10];

    // Insere valores no vetor
    for (int i = 0; i < 10; i++)
    {
        cout << "Valor para ser adicionado no vetor: ";
        cin >> valor;

        // Quando adicionado na primeira posicao o valor vai direto
        if (i == 0)
        {
            v[i] = valor;
        }
        else
        {   
            // Nas proximas posicoes é preciso verificar se aql valor já
            // foi adicionado em qualquer posicao anterior a atual.
            for (int j = 0; j <= i; j++)
            {
                if (valor == v[j])
                {   
                    // diff é mudado para false para sinalizar q aql valor
                    // ja existe
                    diff = false;
                }
            }

            if (diff == false)
            {   
                cout << "Valor ja existe no vetor." << endl;
                // i é subtraido para continuar na msm posicao na prox iteracao
                i -= 1;
                // diff volta a ser true para fazer a validacao novamente.
                diff = true;
            }
            else
            {
                v[i] = valor;
            }
        }
    }

    cout << v[9];
    return 0;
}
