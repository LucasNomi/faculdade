#include <iostream>

using namespace std;

int main(){
	int anonasc, anoatual, idadeanos, idademeses;
	float idadesemanas, idadedias;
	
	cout << "Em qual ano voce nasceu? ";
	cin >> anonasc;
	
	cout << "Em qual ano estamos? ";
	cin >> anoatual;
	
	idadeanos = anoatual - anonasc;
	idademeses = idadeanos * 12;
	idadesemanas = idademeses * 4.3;
	idadedias = idadesemanas * 7;
	
	cout << "Voce tem: " << idadeanos << " anos " << idademeses << " meses "
		<< idadesemanas << " semanas " << idadedias << " dias ";
	return 0;
}