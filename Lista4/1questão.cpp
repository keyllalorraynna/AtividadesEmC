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
	
	cout << " Insira sua terceira nota: ";
	cin >> nota3;
	
	cout << " Insira sua quarta nota: ";
	cin >> nota4;
				
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (media < 7)
		cout << " Voc� est� reprovado! sua m�dia foi: " << media << endl;
	else 
		cout << " Voc� foi aprovado! sua m�dia foi: " << media << endl;
	
	return 0.0;
}
