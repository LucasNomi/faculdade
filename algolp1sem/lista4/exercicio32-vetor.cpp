#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int valor;
    int valoresX[5];
    int valoresY[5];
    int somaValores[5], prodValores[5];
    int diffSet[5] = {0, 0, 0, 0, 0};
    int intercSet[5] = {0, 0, 0, 0, 0};
    int unionSet[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        cout << "Insira um valor para o primeiro conjunto: ";
        cin >> valor;

        valoresX[i] = valor;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Insira um valor para o segundo conjunto: ";
        cin >> valor;

        valoresY[i] = valor;
    }

    for (int i = 0; i < 5; i++)
    {
        somaValores[i] = valoresX[i] + valoresY[i];
        prodValores[i] = valoresX[i] * valoresY[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (valoresX[i] != valoresY[i])
        {
            diffSet[i] = valoresX[i];
        }
        else
        {
            intercSet[i] = valoresX[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {

        unionSet[i] = valoresX[i];
        if (valoresY[i] != valoresX[i])
        {
            unionSet[i + 5] = valoresY[i];
        }
    }

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
        if (diffSet[i] != 0)
        {
            cout << diffSet[i] << " ";
        }
    }

    cout << endl;
    cout << "Grupo interseccao entre x e y: ";

    for (int i = 0; i < 5; i++)
    {
        if (intercSet[i] != 0)
        {
            cout << intercSet[i] << " ";
        }
    }

    cout << endl;
    cout << "Grupo uniao entre x e y: ";

    for (int i = 0; i < 10; i++)
    {
        if (unionSet[i] != 0)
        {
            cout << unionSet[i] << " ";
        }
    }

    return 0;
}
