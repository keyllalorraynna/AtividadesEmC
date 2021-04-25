#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int raio;
	float M_PI, PI, area;

	M_PI = 3.14159;
	PI = M_PI;

	printf("\n Digite o valor do raio: ");
	scanf("%d", &raio);

	area = PI*raio*raio;

	printf("\nO valor da área é: %.2f", area);

    return(0); 
}
