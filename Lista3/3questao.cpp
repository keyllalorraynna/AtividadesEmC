#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2;
	
	cout << " Digite o primeiro n�mero: ";
	cin >> num1;
	
	cout << " Digite o segundo n�mero: ";
	cin >> num2;
	
	if(num2 != 0)
		cout << " O total da divis�o �: " << num1 / num2 << endl;
	else
		cout << " O segundo n�mero n�o pode ser 0!" << endl;
		
}
