#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, conta1, conta2, multa1, multa2, total;
	
	cout << " Quanto voc� recebe? ";
	cin >> salario;
	
	cout << " Qual o valor da primeira conta? ";
	cin >> conta1;
	
	cout << " Qual o valor da segunda conta? ";
	cin >> conta2;
	
	total = salario - (((conta1 + conta2) * 0.98) - conta1 + conta2);
	
	cout << " Jo�o, tudo o que te restar� do sal�rio � isto: " << total << endl;
	
	return 0;
}
