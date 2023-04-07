#include <iostream>

using namespace std;

int main(){
	float salario, conta1, conta2, restosalario;
	int juros = 2;
	
	cout << "Salario do Joao: ";
	cin >> salario;
	
	cout << "Primeira conta: ";
	cin >> conta1;
	
	cout << "Segunda conta: ";
	cin >> conta2;	
	
	conta1 = conta1 + (conta1 * juros) / 100;
	conta2 = conta2 + (conta2 * juros) / 100;
	restosalario = salario - (conta1 + conta2);
	
	cout << "Valor da primeira conta com multa de 2%: " << conta1 << "\n";
	
	cout << "Valor da segunda conta com multa de 2%: " << conta2 << "\n";
	
	cout << "Resto salario de Joao: " << restosalario << "\n";
	return 0;
}