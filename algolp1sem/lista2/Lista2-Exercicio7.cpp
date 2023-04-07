#include <iostream>

using namespace std;

int main(){
	int valor, valorfinal, estado;
	int mgporc = 7, spporc = 12, rjporc = 15, msporc = 8;
	
	cout << "Insira um valor: ";
	cin >> valor;
	
	cout << "Selecione o estado: [1] MG, [2] SP, [3] RJ, [4] MS ";
	cin >> estado;
	
	switch(estado){
		case 1: 
			valorfinal = valor + (valor * mgporc) / 100;
			break;
		case 2:
			valorfinal = valor + (valor * spporc) / 100;
			break;
		case 3:
			valorfinal = valor + (valor * rjporc) / 100;
			break;
		case 4:
			valorfinal = valor + (valor * msporc) / 100;
			break;
		default:
			cout << "Estado invalido \n";
			return 1;
			break;
	}
	
	cout << "Valor final: " << valorfinal << endl;
	
	return 0;
}