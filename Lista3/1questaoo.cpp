#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2, total;
	
	cout << " Digite o primeiro n�mero: ";
	cin >> num1;
	
	cout << " Digite o segundo n�mero: ";
	cin >> num2;
	
	total = num1 - num2;
	cout << " O total da subtra��o �: " << total << endl;
}

