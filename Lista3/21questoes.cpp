#include<cstdio>
#include<iostream>
#include<locale.h>
#include <iomanip>

using namespace std;

int main (void){
	
	setlocale(LC_ALL,"portuguese");
		
     float sal_min, sal_bruto, sal_final, hora_extra, val_horas_trab, qtd_hora_extra;
     int num_horas_trab, horas_ext_trab;
	          
	cout << " Informe o salário mínimo atual: ";
	cin >> sal_min;
     
	cout << " Informe as horas trabalhadas: ";
	cin >> num_horas_trab;
     
	cout << " Digite a quantidade de horas extras trabalhadas: ";
	cin >> horas_ext_trab;
     
     val_horas_trab = sal_min * 0.125;
     hora_extra = sal_min * 0.25;
     sal_bruto = num_horas_trab * val_horas_trab;
     qtd_hora_extra = horas_ext_trab * hora_extra;
     sal_final = sal_bruto + qtd_hora_extra;
     
     cout << fixed;
     cout << setprecision(2) << " O valor do salário bruto é: " << sal_bruto << "." << endl;
     cout << setprecision(2) << " O valor das horas extras é: " << qtd_hora_extra << "." << endl;
     cout << setprecision(2) << " O valor do salário final é: " << sal_final << "." << endl;

	return 0.0;
}
