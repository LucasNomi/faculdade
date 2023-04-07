#include <iostream>

using namespace std;

int main(){
	float num1, num2, sub;
	
	cout << "Vamos fazer uma subtracao. \n";
	
	cout << "Por favor, insira o primeiro numero: ";
	cin >> num1;
	
	cout << "Agora o segundo: ";
	cin >> num2;
	
	sub = num1 - num2;
	
	cout << "Resultado da subtracao: " << sub;
	

	return 0;
}