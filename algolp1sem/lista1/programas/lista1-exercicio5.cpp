#include <iostream>

using namespace std;

int main(){
	float preco1, preco2;
	int desconto = 10;
	
	cout << "Preco original: ";
	cin >> preco1;
	
	preco2 = preco1 - (preco1 * 10) / 100;
	
	cout << "Preco com desconto: " << preco2;
	
	return 0;
}