#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int raio;
	float pi = 3.14, circ, area, vol;
	
	cout << "Raio da sua esfera: ";
	cin >> raio;
	
	circ = (2 * pi) * raio;
	area = (4 * pi) * pow(raio, 2);
	vol = ((4 * pi) * pow(raio,3)) / 3;
	
	cout << "Circunferencia da esfera: " << circ << "\n";
	cout << "Area da sua esfera: " << area << "\n";
	cout << "Volume da sua esfera: " << vol << "\n";
	
	return 0;
}