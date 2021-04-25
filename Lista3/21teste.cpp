#include<cstdio>
#include<iostream>
#include<locale.h>
#include <iomanip>

using namespace std;

int main (void){
	
	setlocale(LC_ALL,"portuguese");
		
    float sal_min, sal_bruto, sal_final, hora_extra, val_horas_trab, qtd_hora_extra;
    int num_horas_trab, horas_ext_trab;
	          
	printf("Informe o valor do salario minimo: \n");
	scanf("%f", &sal_min);
     
	printf("Informe a quantidade de horas trabalhadas: \n");
    scanf("%i", &num_horas_trab);
     
	printf("Informe a quantidade de horas extras trabalhadas: \n");
    scanf("%i", &horas_ext_trab);
     
     val_horas_trab = sal_min * 0.125;
     hora_extra = sal_min * 0.25;
     sal_bruto = num_horas_trab * val_horas_trab;
     qtd_hora_extra = horas_ext_trab * hora_extra;
     sal_final = sal_bruto + qtd_hora_extra;
     
	 printf("O valor do salario bruto e: %.2f\nO valor das horas extras e: %.2f\nO valor do salario final e: %.2f\n",sal_bruto, qtd_hora_extra, sal_final);
	
	return 0.0;
}
