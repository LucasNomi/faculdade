#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string codigo;
    int numeroMatricula, nota1, nota2, nota3, aulasFreq;
    float mediaNotaAluno, somaMediaNotaAluno, mediaNotaSala;
    int maiorNota, menorNota, totalAlunosRep, AlunosRepInf;
    float porcAlunosRepInf;

    totalAlunosRep=0;
    AlunosRepInf=0;
    porcAlunosRepInf=0;
    somaMediaNotaAluno = 0;

    for (int i = 0; i < 100; i++)
    {
        cout << "Numero da matricula aluno: ";
        cin >> numeroMatricula;

        cout << "Nota 1: ";
        cin >> nota1;
        cout << "Nota 2: ";
        cin >> nota2;
        cout << "Nota 3: ";
        cin >> nota3;

        cout << "Frequencia do Aluno: ";
        cin >> aulasFreq;

        mediaNotaAluno = (nota1 + nota2 + nota3) / 3;
        somaMediaNotaAluno = somaMediaNotaAluno + mediaNotaAluno;

        if (i == 0)
        {
            maiorNota = nota1;
            menorNota = nota1;

            if (nota2 > maiorNota)
            {
                maiorNota = nota2;
            }
            
            if (nota3 > maiorNota)
            {
                maiorNota = nota3;
            }

            if (nota2 < menorNota)
            {
                menorNota = nota2;
            }
            
            if (nota3 < menorNota)
            {
                menorNota = nota3;
            }
        }else
        {
            if (nota1 > maiorNota)
            {
                maiorNota = nota1;
            }

            if (nota2 > maiorNota)
            {
                maiorNota = nota2;
            }
            
            if (nota3 > maiorNota)
            {
                maiorNota = nota3;
            }

            if (nota1 < menorNota)
            {
                menorNota = nota2;
            }

            if (nota2 < menorNota)
            {
                menorNota = nota2;
            }
            
            if (nota3 < menorNota)
            {
                menorNota = nota3;
            }
        }

        if (mediaNotaAluno < 60 || aulasFreq < 40)
        {
            totalAlunosRep++;
            codigo = "Reprovado";

            if (aulasFreq < 40)
            {
                AlunosRepInf++;
            }
        }else
        {
            codigo = "Aprovado";
        }
        
        
        cout << "Numero da matricula: " << numeroMatricula << endl;
        cout << "Frequencia: " << aulasFreq << endl;
        cout << "Nota final:" << mediaNotaAluno << endl;
        cout << "Código: " << codigo << endl;
    }

    mediaNotaSala = somaMediaNotaAluno / 100;
    porcAlunosRepInf = (AlunosRepInf * 100) / totalAlunosRep;
    
    cout << "Media Nota Sala: " << mediaNotaAluno << endl;
    cout << "Porcentagem de alunos reprovados por falta: " << porcAlunosRepInf << endl;
    return 0;
}
