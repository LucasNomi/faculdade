#include <iostream>

using namespace std;

int main(){
	float num1, num2, resultado;
	
	cout << "Numero 1: ";
	cin >> num1;
	
	cout << "Numero 2: ";
	cin >> num2;
	
	if(num1 == num2){
		resultado = num1 + num2;
	}else{
		resultado = num1 * num2;
	}
	
	cout << "Resultado: " << resultado;
	
	return 0;
}