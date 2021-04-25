#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float salario, imposto, gratificacao;
	
	cout << " Informe o salário bruto do funcionário: ";
	cin >> salario;
	
		if (salario <= 350 && salario > 0){
			imposto = salario * 7/100;
			gratificacao = (salario + 100.00) - imposto;
			cout << fixed;
			cout << setprecision(2) << " O valor a receber é de: R$ " << gratificacao << endl;
		}	
		else if (salario > 350 && salario < 600){
			imposto = salario * 7/100;
			gratificacao = (salario + 75.00) - imposto;
			cout << fixed;
			cout << setprecision(2) << " O valor a receber é de: R$ " << gratificacao << endl;
		}
		else if (salario >= 600 && salario <= 900){
			imposto = salario * 7/100;
			gratificacao = (salario + 50.00) - imposto;
			cout << fixed;
			cout << setprecision(2) << " O valor a receber é de: R$ " << gratificacao << endl;
		}
		else if (salario > 900){
			imposto = salario * 7/100;
			gratificacao = (salario + 35.00) - imposto;
			cout << fixed;
			cout << setprecision(2) << " O valor a receber é de: R$ " << gratificacao << endl;
		}
		else{
			cout << " Valor inválido!" << endl;
		}
	return 0.0;
}
