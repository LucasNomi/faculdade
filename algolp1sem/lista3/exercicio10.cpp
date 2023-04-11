#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int canal;
    int qtdTotal, qtdAdd;
    double qtdEmissora4, qtdEmissora5, qtdEmissora7, qtdEmissora12, qtdEmissoraN;

    qtdTotal = 0;
    qtdEmissora4 = 0;
    qtdEmissora5 = 0;
    qtdEmissora7 = 0;
    qtdEmissora12 = 0;
    qtdEmissoraN = 0;

    canal = 1;

    while (canal != 0)
    {
        cout << "Qual emissora a casa esta assistindo \n";
        cout << "[4] Rede Globe \n";
        cout << "[5] Tupi \n";
        cout << "[7] Olimpica \n";
        cout << "[12] BTS \n";
        cout << "[-1] Tv desligada \n";
        cin >> canal;

        if (canal != 0 && canal != -1)
        {
            switch (canal)
            {
            case 4:
                cout << "Quantas pessoas assistem essa emissora na casa: ";
                cin >> qtdAdd;
                qtdEmissora4 += qtdAdd;
                break;
            case 5:
                cout << "Quantas pessoas assistem essa emissora na casa: ";
                cin >> qtdAdd;
                qtdEmissora5 += qtdAdd;
                break;
            case 7:
                cout << "Quantas pessoas assistem essa emissora na casa: ";
                cin >> qtdAdd;
                qtdEmissora7 += qtdAdd;
                break;
            case 12:
                cout << "Quantas pessoas assistem essa emissora na casa: ";
                cin >> qtdAdd;
                qtdEmissora12 += qtdAdd;
                break;
            default:
                cout << "Emissora nao catalogada \n";
                cout << "Quantas pessoas assistem essa emissora na casa: ";
                cin >> qtdAdd;
                qtdEmissoraN += qtdAdd;
                break;
            }
            qtdTotal = qtdTotal + qtdEmissora4 + qtdEmissora5 + qtdEmissora7 + qtdEmissora12 +qtdEmissoraN;
        }
    }

    qtdEmissora4 = (qtdEmissora4 * 100) / qtdTotal;
    qtdEmissora5 = (qtdEmissora5 * 100) / qtdTotal;
    qtdEmissora7 = (qtdEmissora7 * 100) / qtdTotal;
    qtdEmissora12 = (qtdEmissora12 * 100) / qtdTotal;
    qtdEmissoraN = (qtdEmissoraN * 100) / qtdTotal;
    
    cout << "Quantidade de entrevistados: " << qtdTotal << endl;
    cout << "Porcentagem da emissora 4: " << qtdEmissora4 << endl;
    cout << "Porcentagem da emissora 5: " << qtdEmissora5 << endl;
    cout << "Porcentagem da emissora 7: " << qtdEmissora7 << endl;
    cout << "Porcentagem da emissora 12: " << qtdEmissora12 << endl;
    cout << "Porcentagem de emissora NÃO catalogada: " << qtdEmissoraN << endl;

    return 0;
}
