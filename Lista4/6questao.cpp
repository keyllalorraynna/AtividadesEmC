#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, sal_reajust1, sal_reajust2;

	cout << " Informe o salário do funcionário: ";
	cin >> salario;
		
	sal_reajust1 = salario + (salario * 0.35);
	sal_reajust2 = salario + (salario * 0.15);
					
	if (salario <= 300.00 && salario > 0){
		cout << fixed;
		cout << setprecision(2) << " O valor do reajuste é: " << sal_reajust1 << endl;
	}
	else
		if (salario > 300.00){
		cout << fixed;
		cout << setprecision(2) << " O valor do reajuste é: " << sal_reajust2 << endl;
		}
		else
			cout << " Salário inválido! " << endl;	
	return 0.0;
}
