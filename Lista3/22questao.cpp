#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float lados;
    
	cout << " Informe o n�mero de lados: ";
	cin >> lados;

	if (lados >= 3)
		cout << " Esse pol�gono tem: " << lados * (lados - 3) / 2 << " diagonais." << endl;
	else
		cout << " N�o existe pol�gono de: " << lados << " lados." << endl;

	return 0.0;
}
