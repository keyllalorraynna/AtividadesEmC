#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, conta1, conta2, multa1, multa2, total;
	
	cout << " Quanto você recebe? ";
	cin >> salario;
	
	cout << " Qual o valor da primeira conta? ";
	cin >> conta1;
	
	cout << " Qual o valor da segunda conta? ";
	cin >> conta2;
	
	total = salario - (((conta1 + conta2) * 0.98) - conta1 + conta2);
	
	cout << " João, tudo o que te restará do salário é isto: " << total << endl;
	
	return 0;
}
