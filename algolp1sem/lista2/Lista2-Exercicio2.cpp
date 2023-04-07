#include <iostream>

using namespace std;

int main(){
	float nota1, nota2, nota3, nota4, media;
	
	cout << "Nota 1: ";
	cin >> nota1;
	
	cout << "Nota 2: ";
	cin >> nota2;
	
	cout << "Nota 3: ";
	cin >> nota3;
	
	cout << "Nota 4:";
	cin >> nota4;
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	cout << "Media: " << media << endl;
	
	if(media > 3){
		cout << "Aprovado";
	}else if(media >= 3 < 7){
		cout << "Exame";
	}else if(media >=7){
		cout << "Reprovado";
	}
	
	return 0;
}