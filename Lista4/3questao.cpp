#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2;
	
	cout << " Insira o primeiro n�mero: ";
	cin >> num1;
	
	cout << " Insira o segundo n�mero: ";
	cin >> num2;
					
	if (num1 < num2 )
		cout << " O menor n�mero �: " << num1 << endl;
	else 
		cout << " O menor n�mero �: " << num2 << endl;
		
	return 0.0;
}
