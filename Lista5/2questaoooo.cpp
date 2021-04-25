#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int opcao;
	float num1, num2, potencia, raiz_quad1, raiz_quad2, raiz_cub1, raiz_cub2;
	char escolha;
	
	cout << " Digite o primeiro número: ";
	cin >> num1;
	
	cout << " Digite o segundo número: ";
	cin >> num2;
	
	cout << endl;
	cout << " 1-Potência | 2-Raiz quadrada | 3-Raiz cúbica" << endl;
	cout << "   Escolha (em número) uma das opções acima: ";
	cin >> opcao;
	
	switch (opcao){
		case 1:
			potencia = pow(num1,num2);
			cout << fixed;
			cout << setprecision(2) << "  O valor da potência é: " << potencia << endl;
			break;
		case 2:
			raiz_quad1 = sqrt(num1);
			raiz_quad2 = sqrt(num2);
			cout << fixed;
			cout << setprecision(2) << "  A raiz quadrada de " << num1 << " é: "<< raiz_quad1 << endl;
			cout << setprecision(2) << "  A raiz quadrada de " << num2 << " é: "<< raiz_quad2 << endl;
			break;
		case 3:
			raiz_cub1 = cbrt(num1);
			raiz_cub2 = cbrt(num2);
			cout << fixed;
			cout << setprecision(2) << "  A raiz cúbica de " << num1 << " é: "<< raiz_cub1 << endl;
			cout << setprecision(2) << "  A raiz cúbica de " << num2 << " é: "<< raiz_cub2 << endl;
			break;
		default:
			cout << "  Opção inválida! " << endl;
			break;
	}
	
	return 0.0;
}
