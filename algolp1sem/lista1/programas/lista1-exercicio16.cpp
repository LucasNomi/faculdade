#include <iostream>

using namespace std;

int main(){
	float reais, dolar, marco, libra;
	float codolar = 1.80, comarco = 2.00, colibra = 3.57;
	
	cout << "Quantos reais possui? ";
	cin >> reais;
	
	dolar = reais / codolar;
	marco = reais / comarco;
	libra = reais / colibra;
	
	cout << "Reais em dolares: " << dolar << "\n";
	cout << "Reais em marco: " << marco << "\n";
	cout << "Reais em libra: " << libra << "\n";
	return 0;
}