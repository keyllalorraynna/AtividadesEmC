#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float salario, aumento;
	
	cout << " Informe o salário do funcionário: ";
	cin >> salario;
	
		if (salario <= 300 && salario > 0){
			aumento = salario * 0.15;
			cout << fixed;
			cout << setprecision(2) << " O valor do aumento é de: " << aumento << endl;
			cout << setprecision(2) << " O valor do novo salário é de: " << salario+aumento << endl;
		}	
		else if (salario > 300 && salario < 600){
			aumento = salario * 0.10;
			cout << fixed;
			cout << setprecision(2) << " O valor do aumento é de: " << aumento << endl;
			cout << setprecision(2) << " O valor do novo salário é de: " << salario+aumento << endl;
		}
		else if (salario >= 600 && salario <= 900){
			aumento = salario * 0.05;
			cout << fixed;
			cout << setprecision(2) << " O valor do aumento é de: " << aumento << endl;
			cout << setprecision(2) << " O valor do novo salário é de: " << salario+aumento << endl;
		}
		else if (salario > 900){
			aumento = salario * 0.00;
			cout << fixed;
			cout << setprecision(2) << " O valor do aumento é de: " << aumento << endl;
			cout << setprecision(2) << " O valor do novo salário é de: " << salario+aumento << endl;	
		}
		else{
			cout << " Valor inválido!" << endl;
		}
	return 0.0;
}
