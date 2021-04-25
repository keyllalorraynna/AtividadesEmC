#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float valor, desc;
	
	cout << " Digite o valor do produto: ";
	cin >> valor;
	
	desc = valor - valor * 0.1;
	cout << " O novo valor com desconto é de: " << desc << endl;
	
	return 0.0;
}

