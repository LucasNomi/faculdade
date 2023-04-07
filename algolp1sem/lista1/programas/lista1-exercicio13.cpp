#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int cato, cata, hip;
	
	cout << "Valor do cateto oposto: ";
	cin >> cato;
	
	cout << "Valor do cateto adjacente: ";
	cin >> cata;
	
	hip = sqrt(pow(cato, 2) + pow(cata, 2));
	
	cout << "Hipotenusa do triangulo: " << hip;
	return 0;
}