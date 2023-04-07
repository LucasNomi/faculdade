#include <iostream>

using namespace std;

int main(){
	int num1, num2, resultado;
	string escolha;
	
	cout << "Primeiro num: ";
	cin >> num1;
	
	cout << "Segundo num: ";
	cin >> num2;
	
	cout << "Escolha: \n [A] Soma \n [S] Subtracao \n [M] Multiplicacao \n [Q] Quociente inteiro \n [E] opcao invalida \n ";
	cin >> escolha;
	
	if(escolha == "A" || escolha == "a"){
		resultado = num1 + num2;
	}else if(escolha == "S" || escolha == "s"){
		resultado = num1 - num2;
	}else if(escolha == "M" || escolha == "m"){
		resultado = num1 * num2;
	}else if(escolha == "Q" || escolha == "q"){
		resultado = num1 / num2;
	}else{
		cout << "Opcao invalida";
		return 1;
	}
	
	cout << "Resultado: " << resultado;
	
	return 0;
}