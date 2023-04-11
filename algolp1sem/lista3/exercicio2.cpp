#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char sexo;
    double altura, mediaFem, maiorAltura, menorAltura;
    double somaAltura;
    int contadorFem, contadorPessoa;

    somaAltura = 0;
    contadorFem = 0;
    contadorPessoa = 0;

    for (int i = 0; i < 50; i++)
    {
        cout << "Sexo da pessoa (M/F) ";
        cin >> sexo;

        cout << "Altura da pessoa em centimetros: ";
        cin >> altura;

        if (i == 0)
        {
            maiorAltura = altura;
            menorAltura = altura;
        }else
        {
            if (altura > maiorAltura)
            {
                maiorAltura = altura;
            }else if (altura < menorAltura)
            {
                menorAltura = altura;
            }
        }

        if (sexo == 'F')
        {
            somaAltura = somaAltura + altura;
            contadorFem++;
        }
        
        contadorPessoa++;
    }

    cout << "Maior altura: " << maiorAltura << endl;
    cout << "Menor altura: " << menorAltura << endl;

    if (contadorFem == 0)
    {
        cout << "Nenhuma mulher respondeu o questionario, não ha media.";
    }else
    {
        cout << "Media entre altura das mulheres = " << somaAltura / contadorFem << endl;
    }
    
    cout << "Quantidade de homens: " << contadorPessoa - contadorFem << endl;
    
    return 0;
}
