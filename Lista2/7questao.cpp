#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	
	printf(" Digite sua idade: ");
	scanf("%d",&idade);
	
	if (idade < 16)
		printf(" N�o pode votar!");
	else
		if(idade >= 16 && idade < 18 || idade > 70 && idade < 120)
			printf(" Seu voto � facultativo, n�o obrigat�rio.");
		else
			if (idade > 120)
				printf(" Idade inv�lida!");
			else
				printf(" Voto obrigat�rio!");	
	return(0);
}
