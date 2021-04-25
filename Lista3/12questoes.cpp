#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario_min, salario, total;
	
	cout << " Digite o seu salário atual: ";
	cin >> salario;
	
	cout << " Digite o salário mínimo atual: ";
	cin >> salario_min;

	
	total = salario / salario_min;
	cout << " Você recebe " << total << " salários mínimos." << endl;
	
	return 0.0;
}
