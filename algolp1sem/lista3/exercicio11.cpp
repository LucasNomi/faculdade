#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int curso, cursoMaiorCandidatoVaga;
    int qtdVagas, qtdFem, qtdMasc, qtdTotalCurso, qtdTotalGeral, i, maior;
    float candidatoVaga, porcFem;

    qtdTotalGeral = 0;
    i = 0;
    maior = 0;
    candidatoVaga = 0;
    porcFem = 0;

    do
    {
        cout << "identificador do curso (0 para a inserção): ";
        cin >> curso;

        if (curso != 0)
        {
            do
            {
                cout << "Quantidade de vagas desse curso: ";
                cin >> qtdVagas;

                cout << "Quantidade de candidatas femininas: ";
                cin >> qtdFem;

                cout << "Quantidade de candidatos masculinos: ";
                cin >> qtdMasc;

                qtdTotalCurso = qtdFem + qtdMasc;

                if (qtdFem > qtdVagas || qtdMasc > qtdVagas || qtdTotalCurso > qtdVagas)
                {
                    cout << "Quantidade de candidatos nao pode ser maior que a quantidade total de vagas";
                    continue;
                }else
                {
                    qtdTotalGeral = qtdTotalGeral + qtdTotalCurso;
                }
            } while (qtdFem > qtdVagas || qtdMasc > qtdVagas || qtdTotalCurso > qtdVagas);

            candidatoVaga = qtdVagas / qtdTotalCurso;
            porcFem = (qtdFem * 100) / qtdTotalCurso;
            i++;

            if (i == 1)
            {
                maior = candidatoVaga;
                cursoMaiorCandidatoVaga = curso;
            }else
            {
                if (candidatoVaga > maior)
                {
                    maior = candidatoVaga;
                    cursoMaiorCandidatoVaga = curso;
                }
            }

            cout << "Curso: " << curso << endl;
            cout << "Quantidade de vagas: " << candidatoVaga << endl;
            cout << "Porcentagem de candidatas femininas: " << porcFem << endl;
        }

    } while (curso != 0);

    cout << "Curso com maior quantidade de candidatos por vaga: " << cursoMaiorCandidatoVaga << endl;
    cout << "Candidatos por vaga: " << maior << endl;
    cout << "Quantidade total de candidatos: " << qtdTotalGeral << endl;

    return 0;
}
