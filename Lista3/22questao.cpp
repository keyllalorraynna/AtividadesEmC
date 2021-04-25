#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float lados;
    
	cout << " Informe o número de lados: ";
	cin >> lados;

	if (lados >= 3)
		cout << " Esse polígono tem: " << lados * (lados - 3) / 2 << " diagonais." << endl;
	else
		cout << " Não existe polígono de: " << lados << " lados." << endl;

	return 0.0;
}
