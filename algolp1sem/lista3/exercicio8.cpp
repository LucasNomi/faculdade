#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char resposta, sexo;
    int  qtdSim, qtdNao;
    float qtdSimFem, qtdNaoMasc;

    qtdSim=0;
    qtdNao=0;
    qtdSimFem=0;
    qtdNaoMasc=0;

    for (int i = 0; i < 2000; i++)
    {
        cout << "Sexo do participante (M/F) \n";
        cin >> sexo;

        cout << "Gostou do novo produto? (S/N) \n";
        cin >> resposta;

        if (resposta == 'S')
        {
            qtdSim++;
            if (sexo == 'F')
            {
                qtdSimFem++;
            }
            
        }else
        {
            qtdNao++;
            if (sexo == 'M')
            {
                qtdNaoMasc++;
            }
            
        }
        
    }

    qtdNaoMasc = (qtdNaoMasc * 100) / qtdNao;
    qtdSimFem = (qtdSimFem * 100) / qtdSim;

    cout << "Quantidade de respostas SIM: " << qtdSim << endl;
    cout << "Quantidade de respostas NAO: " << qtdNao << endl;
    cout << "Porcentagem de homens que responderam NÃO: " << qtdNaoMasc << endl;
    cout << "Porcentagem de mulheres que responderam SIM: " << qtdSimFem << endl;
    
    return 0;
}
