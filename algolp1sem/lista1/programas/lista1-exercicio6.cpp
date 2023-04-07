#include <iostream>

using namespace std;

int main(){
	
	float salario, salariofinal;
	int vendas, comissao = 4;
	
	cout << "Salario fixo do funcionario: ";
	cin >> salario;
	
	cout << "Valor vendido no dia: ";
	cin >> vendas;
	
	salariofinal = salario + (vendas * 4) / 100;
	
	cout << "Salario final: " << salariofinal;
	return 0;
}