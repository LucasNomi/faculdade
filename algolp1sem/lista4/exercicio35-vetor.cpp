#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    // Criacao do array de digitos de a com 5 posicoes, todas iniciadas com 0
    int digitsA[5] = {0,0,0,0,0};
    // Criacao do array de digitos de b com 5 posicoes, todas iniciadas com 0
    int digitsB[5] = {0,0,0,0,0};
    // Criacao do array de soma com 5 posicoes,  todas iniciadas com 0
    int soma[5] = {0,0,0,0,0};

    // Insere valores em a e b
    // Nao permite valores maiores que 9999
    do
    {
        cout << "Insira A: ";
        cin >> a;
        cout << "Insira B: ";
        cin >> b;

        if (a >= 10000 || b >= 10000)
        {
            cout << "Numeros devem ser menores que 10000" << endl;
        }
        
    } while (a >= 10000 || b >= 10000);

    // Transforma cada digito de a em um valor do array digitsA
    // O comando for so vai ate a penultima posicao de digitsA
    // A ultima posicao permanece como 0 para nao afetar a soma.
    for (int i = 0; i < (size(digitsA) - 1); i++)
    {
        digitsA[i] = a % 10;
        a /= 10;
    }

    // Transforma cada digito de b em um valor do array digitsB
    // O comando for so vai ate a penultima posicao de digitsB
    // A ultima posicao permanece como 0 para nao afetar a soma.
    for (int i = 0; i < (size(digitsB) - 1); i++)
    {
        digitsB[i] = b % 10;
        b /= 10;    
    }
    
    // Soma cada posicao dos array digitsA e digitsB
    for (int i = 0; i < size(soma); i++)
    {
        soma[i] += digitsA[i] + digitsB[i];
        
        // se soma ultrapassar 10, subtraido 10 e adicionado 1 na prox casa
        if (soma[i] >= 10)
        {
            soma[i] -= 10;
            soma[i+1] += 1;
        }
    }
    
    // Mostra cada valor do array soma
    // O for e invertido pois as primeiras posicoes sao os algarimos menos
    // significativo, entao na ordem eles sao os ultimos.
    for (int i = (size(soma) - 1); i >= 0; i--)
    {  
        if (i == (size(soma) - 1))
        {
            cout << "Resultado soma: ";
        }
        
       cout <<  soma[i];
    }
    
    return 0;
}
