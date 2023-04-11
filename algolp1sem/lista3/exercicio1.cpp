#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int idade, somaIdade, contadorPessoa;
    float media;

    somaIdade = 0;
    contadorPessoa = 0;

    do
    {
        cout << "Idade da pessoa: ";
        cin >> idade;

        if (idade != 0)
        {
            somaIdade = somaIdade + idade;
            contadorPessoa++;
        }
        
    } while (idade != 0);

    media = somaIdade/contadorPessoa;

    cout << "Media das idades: " << media << endl;
     
    return 0;
}
