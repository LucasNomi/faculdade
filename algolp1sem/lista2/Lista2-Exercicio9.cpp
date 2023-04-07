#include <iostream>

using namespace std;

int main(){
	int escolha;
	float valor, valorfinal;
	
	cout << "Informe valor da etiqueta: ";
	cin >> valor;
	
	cout << "Qual opcao de pagamento: \n [1] A vista em dinheiro ou cheque \n [2] A vista no cartao \n [3] Em duas vezes \n [4] Mais de duas vezes \n ";
	cin >> escolha;
	
	switch(escolha){
		case 1:
			valorfinal = valor - (valor * 10) / 100;
			break;
		case 2:
			valorfinal = valor - (valor * 15) / 100;
			break;
		case 3:
			valorfinal = valor;
			break;
		case 4:
			valorfinal = valor + (valor * 10) / 100;
			break;
		default:
			cout << "Opcao selecionada nao existe.";
			return 1;
			break;
	}
	
	cout << "Valor final: " << valorfinal; 
	return 0;
}