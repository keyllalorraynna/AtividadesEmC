#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float nota1, nota2, total;
	
	cout << " Digite a primeira nota: ";
	cin >> nota1;
	
	cout << " Digite a segunda nota: ";
	cin >> nota2;
	
	total = ((nota1*2)+(nota2*3)) / 5;
	cout << " O total da sua m�dia ponderada �: " << total << endl;
	cout << " Lembrando que o peso da 1� nota � 2 e" << endl;
	cout << "        o peso da 2� � de 3! " << endl;
}

