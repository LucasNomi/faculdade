#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y;
	
	cout << "Insira x: ";
	cin >> x;
	
	if(x < 1){
		y = 4 - pow(x, 2);
	}else if(x > 1){
		y = 2 + pow(x, 2);
	}else{
		y = 2;
	}
	
	cout << "Valor de y: " << y;
	
	return 0;
}