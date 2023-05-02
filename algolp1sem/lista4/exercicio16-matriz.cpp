#include <iostream>
using namespace std;

//Claramente o codigo mais horrivel do mundo, mas esse aqui eu tive que fazer
// muito na forca bruta pq nao tava achando um meio mais correto;

int main(int argc, char const *argv[])
{
    // resp é usado como char, mas transformado em int em cada array e matriz.
    char resp;
    int numMatricula;
    int gabarito[11] = {-1};
    int alunos[3][11];
    int notasFinais[3];
    int somaAcertos;

    somaAcertos = 0;

    // Atribui uma letra de resposta a cada posicao do gabarito
    //  a primeira posicao do gabarito começa com -1 e nao é usada
    cout << "Qual o gabarito da prova" << endl;
    for (int i = 1; i < 11; i++)
    {
        // nao permite inserir respostas menores que a e maiores que e.
        do
        {
            cout << "Exercicio " << i << " Resposta: ";
            cin >> resp;
            gabarito[i] = resp;

            if ((int)resp < 97 || (int)resp > 101)
            {
                cout << "Respostas so podem ser a,b,c,d ou e" << endl;
            }

        } while ((int)resp < 97 || (int)resp > 101);
        gabarito[i] = resp;
    }

    // Atribui um numero de matricula na primeira linha da coluna i de alunos
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Numero matricula: ";
        cin >> numMatricula;

        alunos[i][0] = numMatricula;

        // Atribui uma letra de resposta para cada linha j, começando da segunda
        // da coluna i de alunos
        for (int j = 1; j < 11; j++)
        {
            // nao permite inserir respostas menores que a e maiores que e.
            do
            {
                cout << "Respostas do aluno: ";
                cin >> resp;
                alunos[i][j] = resp;

                if ((int)resp < 97 || (int)resp > 101)
                {
                    cout << "Respostas so podem ser a,b,c,d ou e" << endl;
                }

            } while ((int)resp < 97 || (int)resp > 101);
        }
        cout << endl;
    }

    // Compara as respostas dos alunos com o gabarito.
    for (int i = 0; i < 3; i++)
    {
        // primeiro linha das colunas i tanto de gabarito quanto de alunos
        // sao sempre numeros diferentes (numMatricula, -1)
        // logo nao ha problemas de adicionar um ponto ao aluno sem querer
        for (int j = 0; j < 11; j++)
        {
            // Se resposta for a mesma que o gabarito na pos j
            // aluno ganha 1 ponto.
            if (gabarito[j] == alunos[i][j])
            {
                somaAcertos += 1;
            }
        }
        // soma dos pontos e adicionado em um array de 3 posicoes, uma para cada
        // aluno
        notasFinais[i] = somaAcertos;
        somaAcertos = 0;
    }

    // Passar por cada aluno na matriz alunos.
    for (int i = 0; i < 3; i++)
    {
        cout << "aluno: " << i + 1 << endl;
        for (int j = 0; j < 11; j++)
        {
            // Mostra Matricula do aluno na linha 0 da coluna i
            if (j == 0)
            {
                cout << "Matricula: " << alunos[i][j] << endl;
            }
            // Mostra respostas do aluno aos exercicios
            // resp que foi como int e transformado em char
            else if (j > 0 && j < 11)
            {
                cout << "Resposta Exercicio " << j << ": " << (char)alunos[i][j] << endl;
            }
            // Mostra situacao do aluno se notaFinal for maior que 7
            // como cada pos na notafinal esta em relacao a um aluno 1:1
            // e possivel usar o iterador i para buscar as notasFinais.
            if (j == 10)
            {
                if (notasFinais[i] >= 7)
                {
                    cout << "Situacao: Aprovado!" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "Situacao: Reprovado!" << endl;
                    cout << endl;
                }
            }
        }
    }
    return 0;
}