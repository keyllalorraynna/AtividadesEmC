#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opcao;
	float num1, num2, media, diferenca, produto, div;
	
	cout << " Digite o primeiro número: ";
	cin >> num1;
	
	cout << " Digite o segundo número: ";
	cin >> num2;
	
	cout << endl;
	cout << " 1-Média | 2-Diferença | 3-Produto | 4-Divisão " << endl;
	cout << "   Escolha (em número) uma das opções acima: ";
	cin >> opcao;
	
	switch (opcao){
		case 1:
			media = (num1 + num2) / 2;
			cout << fixed;
			cout << setprecision(2) << "  A média é: " << media << endl;
			break;
		case 2:
			diferenca = num1 - num2;
			cout << fixed;
			cout << setprecision(2) << "  O resultado da diferença é: " << diferenca << endl;
			break;
		case 3:
			produto = num1 * num2;
			cout << fixed;
			cout << setprecision(2) << "  O resultado do produto é: " << produto << endl;
			break;
		case 4:
			if(num2 != 0){
			div = num1 / num2;
			cout << fixed;
			cout << setprecision(2) << "  O resultado da divisão é: " << div << endl;	
			}
			else{
			cout << "  O segundo número não pode ser igual a 0!" << endl;
			}
			break;
		default:
			cout << "  Opção inválida! " << endl;
			break;	
		}
	
	return 0.0;
}
