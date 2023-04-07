#include <iostream>

using namespace std;

int main(){
	float peso, altura;
	string sexo;
	
	cout << "Qual seu sexo biologico \n [h] Homem \n [m] Mulher \n ";
	cin >> sexo;
	
	cout << "Qual sua altura em metros: ";
	cin >> altura;
	
	if(sexo == "h" && altura < 3){
		peso = (72.7 * altura) - 58;
	}else if(sexo == "m" && altura < 3){
		peso = (62.1 * altura) - 44.7;
	}else{
		cout << "Sexo biologico ou altura informado errado. Tente novamente";
		return 1;
	}
	
	cout << "Peso: " << peso;
	
	return 0;
}