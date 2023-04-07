#include <iostream>

using namespace std;

int main(){
	int baseMaior, baseMenor, altura, area;
	
	cout << "Formulas sao chatas, use nossa calculadora para resolver o problema!\n";
	
	cout << "Base maior do trapezio: ";
	cin >> baseMaior;
	
	cout << "Base menor do trapezio: ";
	cin >> baseMenor;
	
	cout << "Por fim, altura do trapezio: ";
	cin >> altura;
	
	area = ((baseMaior + baseMenor) * altura) / 2;
	
	cout << "Area do trapezio: " << area << "cm2";
	return 0;
}