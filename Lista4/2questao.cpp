#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float nota1, nota2, nota3, nota4, media;
	
	cout << " Insira sua primeira nota: ";
	cin >> nota1;
	
	cout << " Insira sua segunda nota: ";
	cin >> nota2;
				
	media = (nota1 + nota2) / 2;
	
	if (media <= 3 )
		cout << " Você está reprovado! sua média foi: " << media << endl;
	else 
		if (media > 3 && media < 7)
			cout << " Exame! sua média foi: " << media << endl;
		else
			cout << " Você foi aprovado! sua média foi: " << media << endl;
	
	return 0.0;
}
