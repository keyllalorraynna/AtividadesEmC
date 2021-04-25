#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, aumento, novo_sal;

	cout << " Informe o salário do funcionário: ";
	cin >> salario;
		
	if (salario <= 300 && salario > 0){
		aumento = salario * 50/100;
	}	
	else if (salario > 300 && salario <= 500){
		aumento = salario * 40/100;
	}
	else if (salario > 500 && salario <= 700){
		aumento = salario * 30/100;	
	}	
	else if (salario > 700 && salario <= 800){
		aumento = salario * 20/100;
	}	
	else if (salario > 800 && salario <= 1000){
		aumento = salario * 10/100;
	}	
	else if (salario > 1000){
		aumento = salario * 5/100;
	}	
	else{
		cout << " Salário inválido!" << endl;
		exit(0);		
		}
	novo_sal = salario + aumento;
	cout << fixed;
	cout << setprecision(2) << " O valor do novo salário é de: R$ " << novo_sal << endl;
	
	return 0.0;
}
