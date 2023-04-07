#include <iostream>

using namespace std;

int main(){
	float kg, g;
	
	cout << "Conversor de kilos para gramas\n";
	
	cout << "Quanto voce pesa em kilos? ";
	cin >> kg;
	
	g = kg * 1000;
	
	cout << "Voce pesa: " << g << " gramas";
	return 0;
}