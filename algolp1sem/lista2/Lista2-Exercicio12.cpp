#include <iostream>

using namespace std;

int main(){
	int dia, mes, ano;
	
	cout << "Que dia estamos (numerico): ";
	cin >> dia;
	
	cout << "Que mes estamos (numerico): ";
	cin >> mes;
	
	cout << "Que ano estamos (numerico): ";
	cin >> ano;
	
	// Impede o usuario de colocar um mes maior que 12.
	if(mes > 12){
		cout << "Erro: Mes nao pode ser maior que 12";
		return 1;
	// Verifica ano bissexto
	}else if((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0){
		// Dia 29 do mes 2
		if(mes == 2 && dia >= 29){
			dia = 1;
			mes++;
			// Meses que terminam com 30 dias
			// Corrige automaticamente caso o usuario coloque um dia maior que 30
		}else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
			if(dia >= 30){
				dia = 1;
				mes++;
			}else{
				dia++;
			}
		}else{
			// Meses que terminam com 31
			// Corrige automaticamente caso o usuario coloque um dia maior que 31
			if(dia >= 31){
				dia = 1;
				if(mes == 12){
					mes = 1;
					ano++;
				}else{
					mes++;
				}
			}else{
				dia++;
			}
		}
	// Anos não bissextos
	}else{
		// Dia 28 do mes 2
		if(mes == 2 && dia >= 28){
			dia = 1;
			mes++;
		// Meses que terminam com 30 dias
		}else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
			// Corrige automaticamente caso o usuario coloque um dia maior que 30
			if(dia >= 30){
				dia = 1;
				mes++;
			}else{
				dia++;
			}
		}else{
			// Meses que terminam com 31
			// Corrige automaticamente caso o usuario coloque um dia maior que 31
			if(dia >= 31){
				dia = 1;
				if(mes == 12){
					mes = 1;
					ano++;
				}else{
					mes++;
				}
			}else{
				dia++;
			}
		}
	}
	
	cout << "Dia seguinte: " << dia << "/" << mes << "/" << ano;
	
	return 0;
}