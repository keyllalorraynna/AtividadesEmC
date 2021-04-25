#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	double base_menor, base_maior, h, area;

	cout << " Digite a base menor: ";
	cin >> base_menor;
	while (base_menor<=0){
   		cout << " A base menor não pode ser menor ou igual a 0, digite novamente: ";
		cin >> base_menor;
	}

	cout << " Digite a base maior: ";
	cin >> base_maior;
	while (base_maior<=0){
		cout << " A base maior não pode ser menor ou igual a 0, digite novamente: ";
		cin >> base_maior;
	}

	while (base_menor > base_maior){
	   	cout << " A base menor não pode ser maior que a base maior, digite-a novamente (base menor): ";
		cin >> base_menor;
	   	cout << " Agora digite a base maior: ";
		cin >> base_maior;
	}

	cout << " Digite a altura: ";
	cin >> h;
	while (h<=0){
	   	cout << " O valor da altura não pode ser menor ou igual a 0, digite novamente: ";
		cin >> h;
	}

	area = ((base_menor + base_maior) * h) / 2;
	cout << " O total do valor da área é de: " << area << endl;			
	
	return 0;
}
