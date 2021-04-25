#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float peso, mais_peso, menos_peso;
	
	cout << " Digite o peso: ";
	cin >> peso;
	
	mais_peso = peso - peso * 0.85;
	cout << " Se você engordar mais 15% você irá pesar: " << peso + mais_peso << endl;

	
	menos_peso = peso - peso * 0.8;
	cout << " Se você emagrecer mais 20% você irá pesar " << peso - menos_peso << endl;
	
	return 0.0;
}

