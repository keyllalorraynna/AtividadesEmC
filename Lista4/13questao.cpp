#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	float altura, peso_ideal;
	char sexo;

	cout << " Informe a altura: ";
	cin >> altura;
	
	cout << " Informe o sexo sendo: " << endl;
	cout << " F - Feminino | M - Masculino " << endl;
	cin >> sexo;
					
	if (sexo == 'M'){
		peso_ideal = (72.7 * altura) - 58;
		cout << fixed;
		cout << setprecision(2) << " Seu peso ideal é: " << peso_ideal << "Kg" << endl;
	}	
	else
		if (sexo == 'F'){
		peso_ideal = (62.1 * altura) - 44.7;
		cout << fixed;
		cout << setprecision(2) << " Seu peso ideal é: " << peso_ideal << "kg" << endl;
		}
		else
				cout << " Opção inválida! " << endl;
	return 0.0;
}
