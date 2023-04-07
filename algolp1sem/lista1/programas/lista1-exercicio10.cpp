#include <iostream>

using namespace std;

int main(){
	float salariomin, salariofunc;
	int qtdsalariomin;
	
	cout << "Qual o valor do salario minimo atual: ";
	cin >> salariomin;
	
	cout << "Qual o valor do seu salario: ";
	cin >> salariofunc;
	
	qtdsalariomin = salariofunc / salariomin;
	
	cout << "Voce recebe: " << qtdsalariomin << " salario(s) minimo(s)";
	return 0;
}