#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int ano_nasc, ano_atual, anos, meses, semanas, dias;
	
	cout << " Digite seu ano atual: ";
	cin >> ano_atual;
	
	cout << " Digite seu ano de nascimento: ";
	cin >> ano_nasc;
	
	anos = ano_atual - ano_nasc;
	cout << " voc� tem " << anos << " anos de idade." << endl;

	meses = anos * 12; 
	cout << " voc� tem " << meses << " meses de vida." << endl;
	
	semanas = anos * 52;
	cout << " voc� tem " << semanas << " semanas de vida." << endl;
	
	dias = anos * 365;
	cout << " voc� tem " << dias << " dias de vida." << endl;
	
	return 0;
}
