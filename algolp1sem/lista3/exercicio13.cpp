#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeroConsumidor, i;
    float precoKWh, qtdKWhConsumida, maiorConsumo, menorConsumo;
    float totalConsumoResid, totalConsumoComer, totalConsumoInd;
    float totalPagar, totalConsumido, mediaConsumo;

    numeroConsumidor = 1;
    i = 0;
    totalConsumoResid = 0;
    totalConsumoComer = 0;
    totalConsumoInd = 0;
    totalConsumido = 0;

    cout << "Preco KWh: ";
    cin >> precoKWh;

    while (numeroConsumidor != 0)
    {
        cout << "Código de consumidor \n";
        cout << "[1] Residencial \n";
        cout << "[2] Comercial \n";
        cout << "[3] Industrial \n";
        cin >> numeroConsumidor;

        if (numeroConsumidor != 0)
        {
            switch (numeroConsumidor)
            {
            case 1:
                cout << "Quantidade consumida KWh: ";
                cin >> qtdKWhConsumida;
                totalConsumoResid = totalConsumoResid + qtdKWhConsumida;
                break;
            case 2:
                cout << "Quantidade consumida KWh: ";
                cin >> qtdKWhConsumida;
                totalConsumoComer = totalConsumoComer + qtdKWhConsumida;
                break;
            case 3:
                cout << "Quantidade consumida KWh: ";
                cin >> qtdKWhConsumida;
                totalConsumoInd = totalConsumoInd + qtdKWhConsumida;
                break;
            default:
                cout << "Código nao consta";
                continue;
            }

            totalPagar = precoKWh * qtdKWhConsumida;
            totalConsumido = totalConsumido + qtdKWhConsumida;

            if (i == 0)
            {
                maiorConsumo = qtdKWhConsumida;
                menorConsumo = qtdKWhConsumida;
            }else
            {
                if (qtdKWhConsumida > maiorConsumo)
                {
                    maiorConsumo = qtdKWhConsumida;
                }else if (qtdKWhConsumida < menorConsumo)
                {
                    menorConsumo = qtdKWhConsumida;
                }
            }

            cout << "Numero do consumidor: " << numeroConsumidor << endl;
            cout << "Total a pagar: " << totalPagar << endl;
            i++;
        }
    }

    mediaConsumo = totalConsumido / 3;

    cout << "Maior consumo: " << maiorConsumo << endl;
    cout << "Menor consumo: " << menorConsumo << endl;
    cout << "Total consumo residencial: " << totalConsumoResid << endl;
    cout << "Total consumo comercial: " << totalConsumoComer << endl;
    cout << "Total consumo industrial: " << totalConsumoInd << endl;
    cout << "Media geral de consumo: " << mediaConsumo << endl;
    
    return 0;
}
