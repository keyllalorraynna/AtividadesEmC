#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario_min, salario, total;
	
	cout << " Digite o seu sal�rio atual: ";
	cin >> salario;
	
	cout << " Digite o sal�rio m�nimo atual: ";
	cin >> salario_min;

	
	total = salario / salario_min;
	cout << " Voc� recebe " << total << " sal�rios m�nimos." << endl;
	
	return 0.0;
}
