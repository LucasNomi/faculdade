#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char flag;
    string nomeProduto;
    double precoCompra, precoVenda, dif, lucro;
    double totalCompra, totalVenda, totalLucro;
    int qtdLucro10, qtdLucro20, qtdLucroMaior20, qtdProdutos;

    totalCompra = 0;
    totalVenda = 0;
    totalLucro = 0;
    qtdLucro10 = 0;
    qtdLucro20 = 0;
    qtdLucroMaior20 = 0;
    qtdProdutos = 0;

    do
    {
        cout << "Nome do produto: ";
        cin >> nomeProduto;

        cout << "Preco de compra do produto: ";
        cin >> precoCompra;

        cout << "Preco venda do produto: ";
        cin >> precoVenda;

        dif = precoVenda - precoCompra;
        lucro = (dif * 100) / precoCompra;

        totalCompra = totalCompra + precoCompra;
        totalVenda = totalVenda + precoVenda;

        if (lucro < 10)
        {
            qtdLucro10++;
        }else if (lucro >= 10 && lucro <= 20)
        {
            qtdLucro20++;
        }else
        {
            qtdLucroMaior20++;
        }
        
        qtdProdutos++;
        totalLucro = (totalLucro + lucro) / qtdProdutos;

        cout << "Gostaria de continuar a adicionar produtos? \n";
        cout << "[S] - Continuar \n";
        cout << "[N] - Não \n";
        cin >> flag;
        
    } while (flag != 'N');
    
    cout << "Valor total de compras: " << totalCompra << endl;
    cout << "Valor total de vendas: " << totalVenda << endl;
    cout << "Valor total de lucro: " << totalLucro << endl;

    cout << "Quantidade de produtos com lucro inferior a 10%: " << qtdLucro10 << endl;
    cout << "Quantidade de produtos com lucro entre 10% e 20%: " << qtdLucro20 << endl;
    cout << "Quantidade de produtos com lucro superior a 20%: " << qtdLucroMaior20 << endl;

    return 0;
}
