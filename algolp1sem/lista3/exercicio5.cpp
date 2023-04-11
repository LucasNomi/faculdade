#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float popPaisA = 9000000, popPaisB = 20000000;
    int qtdAnos;

    qtdAnos = 0;

    while (popPaisA <= popPaisB)
    {
        popPaisA += (popPaisA * 3) / 100;
        popPaisB += (popPaisB * 1.5) / 100;

        qtdAnos++;
    }
    
    cout << "Populacao do Pais A: " << popPaisA << endl;
    cout << "Populacao do Pais B: " << popPaisB << endl;
    cout << "Quantidade de anos até equalizar: " << qtdAnos << endl;

    return 0;
}
