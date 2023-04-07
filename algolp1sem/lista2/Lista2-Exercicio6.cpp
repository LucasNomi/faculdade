#include <iostream>

using namespace std;

int main(){
	int ano;
	
	cout << "Ano: ";
	cin >> ano;
	
	if((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0){
		cout << "Bissexto";
	}else{
		cout << "Nao bissexto";
	}
	
	return 0;
}