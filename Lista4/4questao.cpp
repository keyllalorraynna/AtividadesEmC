#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2, num3;
	
	cout << " Insira o primeiro número: ";
	cin >> num1;
	
	cout << " Insira o segundo número: ";
	cin >> num2;
	
	cout << " Insira o terceiro número: ";
	cin >> num3;
					
	if (num1 > num2 && num1 > num3)
		cout << " O maior número é: " << num1 << endl;
	else
		if (num2 > num1 && num2 > num3) 
			cout << " O maior número é: " << num2 << endl;
		else
			cout << " O maior número é: " << num3 << endl;
		
	return 0.0;
}
