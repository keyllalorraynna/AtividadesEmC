#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	float valor, total;
	int tipo;
	
	cout << endl;
	cout << " Informe (em n�mero) o tipo de conta sabendo que: " << endl;
	cout << "    1- Poupan�a | 2- Fundos de renda fixa " << endl;
	cout << " ";
	cin >> tipo;
	
	cout << " Informe o valor do investimento: ";
	cin >> valor;
					
	if (tipo == 1){
		total = valor + 0.03 * valor;
	}	
	else
		if (tipo == 2){
			total = valor + 0.04 * valor;
		}
		else 
			cout << " tipo inv�lido! " << endl;
				
		cout << fixed;
		cout << setprecision(2) << " Valor corrigido ap�s 1 m�s de investimento: " << total << endl;	
	
	return 0.0;
}
