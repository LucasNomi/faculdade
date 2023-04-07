#include <iostream>

using namespace std;

int main(){
	float num1, num2, menor = 0;
	
	cout << "Numero 1: ";
	cin >> num1;
	
	cout << "Numero 2: ";
	cin >> num2;
	
	if(num1 < num2){
		menor = num1;
	}else if(num2 < num1){
		menor = num2;
	}else{
		cout << "Numeros sao identicos";
		return 1;
	}
	
	cout << "Menor : " << menor << endl;
	
	return 0;
}