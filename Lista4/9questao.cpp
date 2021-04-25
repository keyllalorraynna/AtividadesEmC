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
	cout << " Informe (em número) o tipo de conta sabendo que: " << endl;
	cout << "    1- Poupança | 2- Fundos de renda fixa " << endl;
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
			cout << " tipo inválido! " << endl;
				
		cout << fixed;
		cout << setprecision(2) << " Valor corrigido após 1 mês de investimento: " << total << endl;	
	
	return 0.0;
}
