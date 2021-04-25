#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, vendas, comissao;
	
	cout << " Digite o seu salário: ";
	cin >> salario;
	
	cout << " Digite o valor das vendas: ";
	cin >> vendas;
	
	comissao = vendas - vendas * 0.96;
	cout << " O total da sua comissão é de: R$ " << comissao << endl;
	cout << " O total que irá receber é de: R$ " << salario+comissao << endl;
	
	return 0.0;
}

