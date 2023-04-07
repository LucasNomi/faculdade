#include <iostream>

using namespace std;

int main(){
	float valor, valorprest;
	int prestacao = 12;
	
	cout << "Informe o valor da mercadoria: ";
	cin >> valor;
	
	cout << "Em quantas prestacoes deseja pagar (min 12)? ";
	cin >> prestacao;
	
	if(prestacao < 12){
		cout << "Prestacao menor que min, assumindo valor 12. \n";
		prestacao = 12;
		
		valorprest = valor / prestacao;
		
	}else if(prestacao >= 12 && prestacao < 24){
		
		valorprest = valor / prestacao;
		
	}else if(prestacao >= 24 && prestacao < 36){
		cout << "Adicionando juros de 10% \n";
		
		valorprest = (valor / prestacao);
		valorprest = valorprest + ((valorprest * 10) / 100);
	}else{
		cout << "Adicionando juros de 15% \n";
		
		valorprest = (valor / prestacao);
		valorprest = valorprest + ((valorprest * 15) / 100);
	}
	
	cout << "Valor prestacao: " << valorprest;
	
	return 0;
}