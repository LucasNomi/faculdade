#include <iostream>

using namespace std;

int main(){
	int peso, pesoplus, pesominus;
	
	cout << "Bem-vindo a academia virtual!\n";
	
	cout << "Quanta voce pesa? ";
	cin >> peso;
	
	pesoplus = peso + (peso * 15) / 100;
	pesominus = peso - (peso * 20) / 100;
	
	cout << "Se voce engordar 15% ficara com: " << pesoplus << "\n";
	cout << "Se emagrecer 20% ficara com: " << pesominus << "\n";
	return 0;
}