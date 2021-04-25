#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
	
	float nota1, nota2, nota3, media;
	
	cout << " Digite a primeira nota: ";
	cin >> nota1;
	
	cout << " Digite a segunda nota: ";
	cin >> nota2;
	
	cout << " Digite a terceira nota: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	cout << " O valor da sua média é: " << media << endl;
}

