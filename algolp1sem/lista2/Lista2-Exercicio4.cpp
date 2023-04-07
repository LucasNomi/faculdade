#include <iostream>

using namespace std;

int main(){
	float num1, num2, maior = 0;
	
	cout << "Numero 1: ";
	cin >> num1;
	
	cout << "Numero 2: ";
	cin >> num2;
	
	if(num1 > num2){
		maior = num1;
	}else if(num2 > num1){
		maior = num2;
	}else{
		cout << "Numeros sao identicos";
		return 1;
	}
	
	cout << "Maior: " << maior << endl;
	
	return 0;
}