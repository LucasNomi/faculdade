#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float altura, peso, imc;
	
	cout << "Sua altura em metros: ";
	cin >> altura;
	
	cout << "Seu peso em kg: ";
	cin >> peso;
	
	 if(altura < 3 && peso < 600.00){
		imc = peso / pow(altura, 2);
		
		if(imc < 18.5){
			cout << "Abaixo do peso.";
		}else if(imc >= 18.5 && imc <= 25){
			cout << "Peso normal";
		}else if(imc > 25 && imc <= 30){
			cout << "Acima do peso";
		}else if(imc > 30){
			cout << "Obeso";
		}else{
			cout << "Houve algum erro do alem, perdao.";
			return 1;
		}
		
	}else{
		cout << "valores de peso ou altura invalidos. Tente novamente.";
		return 2;
	}
	
	return 0;
}