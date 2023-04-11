#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char sexo;
    int qtdNascimentos, meses, qtdCriancasMortas;
    float porcMortes, porcMortesMasc, porcMortes24Meses;

    porcMortes=0;
    porcMortesMasc=0;
    porcMortes24Meses=0;

    cout << "Quantas criacas nasceram: ";
    cin >> qtdNascimentos;

    cout << "Agora insira as criancas que morreram: \n";

    do{
        cout << "Sexo da crianca (M/F) ";
        cin >> sexo;

        if (sexo != 'V')
        {
            cout << "Quantos meses de vida a crianca tinha: ";
            cin >> meses;

            if (sexo = 'M')
            {
                porcMortesMasc++;
            }

            if (meses <= 24)
            {
                porcMortes24Meses++;
            }

            qtdCriancasMortas++;
        }
        
    }
    while (sexo != 'V');
    
    porcMortes = (qtdCriancasMortas * 100) / qtdNascimentos;
    porcMortesMasc = (porcMortesMasc * 100) / qtdCriancasMortas;
    porcMortes24Meses = (porcMortes24Meses * 100) / qtdCriancasMortas;

    cout << "Porcentagem de mortes: " << porcMortes << endl;
    cout << "Porcentagem de mortes masculinas" << porcMortesMasc << endl;
    cout << "Porcentagem de mortes com menos ou igual a 24 meses" << porcMortes24Meses;

    return 0;
}
