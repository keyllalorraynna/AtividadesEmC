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
	cout << " Se voc� engordar mais 15% voc� ir� pesar: " << peso + mais_peso << endl;

	
	menos_peso = peso - peso * 0.8;
	cout << " Se voc� emagrecer mais 20% voc� ir� pesar " << peso - menos_peso << endl;
	
	return 0.0;
}

