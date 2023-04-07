#include <iostream>

using namespace std;

int main(){
	float num1, num2, num3, mult;
	
	cout << "Agora, vamos fazer algumas multiplicacoes\n";
	
	cout << "Primeiro numero: ";
	cin >> num1;
	
	cout << "Segundo numero: ";
	cin >> num2;
	
	cout << "Ultimo numero: ";
	cin >> num3;
	
	mult = num1 * num2 * num3;
	
	cout << "Resultado da multiplicacao: " << mult;
	return 0;
}