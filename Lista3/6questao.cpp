#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, vendas, comissao;
	
	cout << " Digite o seu sal�rio: ";
	cin >> salario;
	
	cout << " Digite o valor das vendas: ";
	cin >> vendas;
	
	comissao = vendas - vendas * 0.96;
	cout << " O total da sua comiss�o � de: R$ " << comissao << endl;
	cout << " O total que ir� receber � de: R$ " << salario+comissao << endl;
	
	return 0.0;
}

