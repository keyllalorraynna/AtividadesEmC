#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2, num3;
	
	cout << " Insira o primeiro n�mero: ";
	cin >> num1;
	
	cout << " Insira o segundo n�mero: ";
	cin >> num2;
	
	cout << " Insira o terceiro n�mero: ";
	cin >> num3;
					
	if (num1 > num2 && num1 > num3)
		cout << " O maior n�mero �: " << num1 << endl;
	else
		if (num2 > num1 && num2 > num3) 
			cout << " O maior n�mero �: " << num2 << endl;
		else
			cout << " O maior n�mero �: " << num3 << endl;
		
	return 0.0;
}
