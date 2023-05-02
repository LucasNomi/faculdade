#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float valor, prodEscalar;
    float v1[5], v2[5];

    prodEscalar = 0;

    for (int i = 0; i < size(v1); i++)
    {
        cout << "Valor real para vetor 1: ";
        cin >> valor;

        v1[i] = valor;
    }

    for (int i = 0; i < size(v2); i++)
    {
        cout << "Valor real para vetor 2: ";
        cin >> valor;

        v2[i] = valor;
    }

    for (int i = 0; i < 5; i++)
    {
        prodEscalar += v1[i] * v2[i];
    }
    
    cout << "Valores do vetor 1: ";
    for (int i = 0; i < size(v1); i++)
    {
        cout << v1[i] << " ";
    }
    
    cout << endl;

    cout << "Valores do vetor 2: ";
    for (int i = 0; i < size(v2); i++)
    {
        cout << v2[i] << " ";
    }
    
    cout << endl;

    cout << "Produto escalar: " << prodEscalar;
    return 0;
}
