#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int qtdClientes, qtdTrans, numeroConta, codigoTrans;
    float minBal, taxServ, valTrans, balFinal, transDep, transRet;

    balFinal = 60;

    cout << "Quantidade de clientes para atualizar: ";
    cin >> qtdClientes;

    for (int i = 0; i < qtdClientes; i++)
    {
        cout << "Escreva, na respectiva ordem, o valor do balanco min \n";
        cout << "quantidade de transacoes \n";
        cout << "A taxa de servico \n";
        cin >> minBal >> qtdTrans >> taxServ;

        cout << "Numero da conta: ";
        cin >> numeroConta;

        for (int i = 0; i < qtdTrans; i++)
        {
            cout << "Voce tem atualmente: " << balFinal << " Reais" << endl;

            cout << "Realizar \n (1) deposito \n (2) retirada";
            cin >> codigoTrans;

            if (codigoTrans == 1)
            {
                cout << "Quanto deseja depositar: ";
                cin >> transDep;

                balFinal = balFinal + transDep;
            }
            else if (codigoTrans == 2)
            {
                cout << "Quanto deseja retirar: ";
                cin >> transRet;

                balFinal = balFinal - transRet;
            }
            else
            {
                cout << "Informe um codigo existente";
                i = i - 1;
            }
        }

        if (balFinal < minBal)
        {
            balFinal - taxServ;
        }

        cout << "Numero conta: " << numeroConta << endl;

        if (balFinal < 0)
        {
            balFinal = 0;
            cout << "Balanco calculado: NAO HA FUNDOS";
        }
        else
        {
            cout << "Balanco calculado: " << balFinal << endl;
        }
    }

    return 0;
}
