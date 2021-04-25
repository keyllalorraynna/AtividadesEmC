#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int h_extra, faltas, h;
	float premio;

	cout << " Informe (em minutos) a quantidade de horas extras: ";
	cin >> h_extra;
	
	cout << " Informe (em minutos) a quantidade de faltas: ";
	cin >> faltas;
	
	h = h_extra - ((2 / 3) * faltas);
	
	if (h >= 2400){
		premio = 500.00;
	}	
	else if (h > 1800 && h < 2400){
		premio = 400.00;
	}
	else if (h >= 1200 && h <= 1800){
		premio = 300.00;
	}	
	else if (h >= 600 && h <= 1200){
		premio = 200.00;
	}
	else if (h < 600 && h > 0){
		premio = 100.00;
	}
	else{
		cout << " Minutagem inválida!" << endl;
		exit(0);		
	}
		
	cout << fixed;
	cout << setprecision(2) << " Sua bonificação é de: R$ " << premio << endl;
	
	return 0.0;
}
