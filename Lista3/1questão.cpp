#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int Num1, Num2, Sub;
	
	printf(" Digite o primeiro n�mero: ");
	scanf("%d",&Num1);
	
	printf(" Digite o segundo n�mero: ");
	scanf("%d",&Num2);
	
	Sub=Num1-Num2;
	
	printf(" O resultado de %d - %d = %d", Num1, Num2, Sub);
	return(0);
}

