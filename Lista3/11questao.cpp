#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	double diag_menor, diag_maior, area;

	cout << " Digite a diagonal menor: ";
	cin >> diag_menor;
	while (diag_menor<=0){
   		cout << " A diagonal menor não pode ser menor ou igual a 0, digite novamente: ";
		cin >> diag_menor;
	}

	cout << " Digite a diagonal maior: ";
	cin >> diag_maior;
	while (diag_maior<=0){
		cout << " A diagonal maior não pode ser menor ou igual a 0, digite novamente: ";
		cin >> diag_maior;
	}

	while (diag_menor > diag_maior){
	   	cout << " A diagonal menor não pode ser maior que a diagonal maior, digite-a novamente (diagonal menor): ";
		cin >> diag_menor;
	   	cout << " Agora digite a diagonal maior: ";
		cin >> diag_maior;
	}

	area = (diag_menor * diag_maior) / 2;
	cout << " O total do valor da área é de: " << area << endl;			
	
	return 0;
}
