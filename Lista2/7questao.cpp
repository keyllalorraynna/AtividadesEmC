#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	
	printf(" Digite sua idade: ");
	scanf("%d",&idade);
	
	if (idade < 16)
		printf(" Não pode votar!");
	else
		if(idade >= 16 && idade < 18 || idade > 70 && idade < 120)
			printf(" Seu voto é facultativo, não obrigatório.");
		else
			if (idade > 120)
				printf(" Idade inválida!");
			else
				printf(" Voto obrigatório!");	
	return(0);
}
