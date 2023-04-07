#include <iostream>

using namespace std;

int main(){
	float nota1, nota2, media;
	int peso1 = 2, peso2 = 3;
	
	cout << "Calculadora de notas2000\n";
	
	cout << "Qual foi a primeira nota do aluno? ";
	cin >> nota1;
	
	cout << "E a segunda? ";
	cin >> nota2;
	
	media = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
	
	cout << "Nota final: " << media;
	return 0;
}