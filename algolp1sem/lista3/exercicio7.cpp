#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char identificadorTurma, situacao;
    int alunosMatriculados, numeroMatricula, alunosPresente, alunosAusente;
    float porcAusencia, porcAusenciaMaior5;

    alunosPresente = 0;
    alunosAusente = 0;
    porcAusencia = 0;
    porcAusenciaMaior5 = 0;

    for (int i = 0; i < 14; i++)
    {
        cout << "Turma: ";
        cin >> identificadorTurma;
        cout << "Quantidade de alunos matriculados: ";
        cin >> alunosMatriculados;

       for (int i = 0; i <= alunosMatriculados; i++)
       {
             cout << "Numero da matricula do aluno: ";
             cin >> numeroMatricula;
             cout << "Situacao (A/P): ";
             cin >> situacao;

             if(situacao == 'A'){
                alunosAusente++;
             }else if(situacao == 'P')
             {
                alunosPresente++;
             }else
             {
                cout << "Situacao foi inserida incorretamente";
                return 1;
             }
       }
       
       porcAusencia = (alunosAusente * 100) / alunosMatriculados;

       cout << "Turma " << identificadorTurma << endl;
       cout << "Porcentagem de ausencia: " << porcAusencia << endl;

       if (porcAusencia > 5)
       {
        porcAusenciaMaior5++;
       }
    }
    
    cout << "Turmas com porcentagem maior que 5% " << porcAusenciaMaior5;

    return 0;
}
