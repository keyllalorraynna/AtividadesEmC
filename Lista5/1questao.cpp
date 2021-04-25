#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opcao;
	float num1, num2, media, diferenca, produto, div;
	
	cout << " Digite o primeiro n�mero: ";
	cin >> num1;
	
	cout << " Digite o segundo n�mero: ";
	cin >> num2;
	
	cout << endl;
	cout << " 1-M�dia | 2-Diferen�a | 3-Produto | 4-Divis�o " << endl;
	cout << "   Escolha (em n�mero) uma das op��es acima: ";
	cin >> opcao;
	
	switch (opcao){
		case 1:
			media = (num1 + num2) / 2;
			cout << fixed;
			cout << setprecision(2) << "  A m�dia �: " << media << endl;
			break;
		case 2:
			diferenca = num1 - num2;
			cout << fixed;
			cout << setprecision(2) << "  O resultado da diferen�a �: " << diferenca << endl;
			break;
		case 3:
			produto = num1 * num2;
			cout << fixed;
			cout << setprecision(2) << "  O resultado do produto �: " << produto << endl;
			break;
		case 4:
			if(num2 != 0){
			div = num1 / num2;
			cout << fixed;
			cout << setprecision(2) << "  O resultado da divis�o �: " << div << endl;	
			}
			else{
			cout << "  O segundo n�mero n�o pode ser igual a 0!" << endl;
			}
			break;
		default:
			cout << "  Op��o inv�lida! " << endl;
			break;	
		}
	
	return 0.0;
}
