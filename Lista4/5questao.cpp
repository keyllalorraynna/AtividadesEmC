#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float salario, sal_reajust;

	cout << " Informe o sal�rio do funcion�rio: ";
	cin >> salario;
	
	sal_reajust = salario + (salario * 0.3);
					
	if (salario < 500 && salario > 0)
		cout << " O valor do reajuste �: " << sal_reajust << endl;
	else
		if (salario <= 0) 
			cout << " Sal�rio inv�lido! " << endl;
		else
			cout << " Voc� n�o tem direito ao benef�cio! " << endl;	
	return 0.0;
}

