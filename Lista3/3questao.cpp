#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2;
	
	cout << " Digite o primeiro número: ";
	cin >> num1;
	
	cout << " Digite o segundo número: ";
	cin >> num2;
	
	if(num2 != 0)
		cout << " O total da divisão é: " << num1 / num2 << endl;
	else
		cout << " O segundo número não pode ser 0!" << endl;
		
}
