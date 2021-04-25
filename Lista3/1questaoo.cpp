#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2, total;
	
	cout << " Digite o primeiro número: ";
	cin >> num1;
	
	cout << " Digite o segundo número: ";
	cin >> num2;
	
	total = num1 - num2;
	cout << " O total da subtração é: " << total << endl;
}

