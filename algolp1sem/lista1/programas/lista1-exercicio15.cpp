#include <iostream>

using namespace std;

int main(){
	int ang1, ang2, ang3;
	
	cout << "Primeiro angulo interno do triangulo: ";
	cin >> ang1;
	
	cout << "Segundo angulo interno de um triangulo: ";
	cin >> ang2;
	
	ang3 = 180 - (ang1 + ang2);
	
	cout << "Terceiro angulo interno de um triangulo: " << ang3;
	return 0;
}