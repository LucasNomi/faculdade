#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    // Vetores são criados já com uma quantidade fixa e definida de valores
    // esses valores vão ser mudados no decorrer, todos os que permanecerem como 0
    // são ocultados posteriormente
    int valor;
    int valoresX[5];
    int valoresY[5];
    int somaValores[5], prodValores[5];
    int diffSet[5] = {0, 0, 0, 0, 0};
    int intercSet[5] = {0, 0, 0, 0, 0};
    int unionSet[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Insere valores para o primeiro conjunto
    for (int i = 0; i < 5; i++)
    {
        cout << "Insira um valor para o primeiro conjunto: ";
        cin >> valor;

        valoresX[i] = valor;
    }

    // Insere valores para o segundo conjunto
    for (int i = 0; i < 5; i++)
    {
        cout << "Insira um valor para o segundo conjunto: ";
        cin >> valor;

        valoresY[i] = valor;
    }

    // Faz a soma e produto entre os valores do primeiro e segundo conjunto
    for (int i = 0; i < 5; i++)
    {
        somaValores[i] = valoresX[i] + valoresY[i];
        prodValores[i] = valoresX[i] * valoresY[i];
    }

    for (int i = 0; i < 5; i++)
    {   
        // Valores entre o primeiro conjunto que são diferentes do segundo
        if (valoresX[i] != valoresY[i])
        {   // Valores diferentes são adicionado no conjunto de diferença
            diffSet[i] = valoresX[i];
        }
        else
        {   
            // Valores entre o primeiro conjunto que são iguais ao segundo
            // Valores são adicionado no conjunto de intersecção
            intercSet[i] = valoresX[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        // Todos os valores do primeiro conjunto sao adicionado na união 
        unionSet[i] = valoresX[i];
        // Valores do segundo conjunto que não estão no primeiro
        // São adicionado na uniao 5 posições para frente
        if (valoresY[i] != valoresX[i])
        {
            unionSet[i + 5] = valoresY[i];
        }
    }

    // Mostra todos os vetores e conjuntos
    cout << "Vetor soma: ";

    for (int i = 0; i < 5; i++)
    {
        cout << somaValores[i] << " ";
    }

    cout << endl;
    cout << "Vetor produto: ";

    for (int i = 0; i < 5; i++)
    {
        cout << prodValores[i] << " ";
    }

    cout << endl;
    cout << "Grupo diferenca entre x e y: ";

    for (int i = 0; i < 5; i++)
    {   
        // Oculta os valores que permanecem como 0
        if (diffSet[i] != 0)
        {
            cout << diffSet[i] << " ";
        }
    }

    cout << endl;
    cout << "Grupo interseccao entre x e y: ";

    for (int i = 0; i < 5; i++)
    {
        // Oculta os valores que permanecem como 0
        if (intercSet[i] != 0)
        {
            cout << intercSet[i] << " ";
        }
    }

    cout << endl;
    cout << "Grupo uniao entre x e y: ";

    for (int i = 0; i < 10; i++)
    {
        // Oculta os valores que permanecem como 0
        if (unionSet[i] != 0)
        {
            cout << unionSet[i] << " ";
        }
    }

    return 0;
}
