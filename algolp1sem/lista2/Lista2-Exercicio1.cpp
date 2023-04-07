#include <iostream>

using namespace std;

int main(){
	float nota1, nota2, media;
	
	cout << "Nota 1: ";
	cin >> nota1;
	
	cout << "Nota 2: ";
	cin >> nota2;
	
	media = (nota1 + nota2) / 2;
	
	cout << "Media: " << media << endl;
	
	if(media >= 7){
		cout << "Aprovado";
	}else{
		cout << "Nota invalida";
	}
	
	return 0;
}