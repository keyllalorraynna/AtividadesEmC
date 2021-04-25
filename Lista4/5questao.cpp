#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, sal_reajust;

	cout << " Informe o salário do funcionário: ";
	cin >> salario;
	
	sal_reajust = salario + (salario * 0.3);
					
	if (salario < 500 && salario > 0)
		cout << " O valor do reajuste é: " << sal_reajust << endl;
	else
		if (salario <= 0) 
			cout << " Salário inválido! " << endl;
		else
			cout << " Você não tem direito ao benefício! " << endl;	
	return 0.0;
}

