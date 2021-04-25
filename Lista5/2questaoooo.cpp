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
	
	cout << " Digite o primeiro n�mero: ";
	cin >> num1;
	
	cout << " Digite o segundo n�mero: ";
	cin >> num2;
	
	cout << endl;
	cout << " 1-Pot�ncia | 2-Raiz quadrada | 3-Raiz c�bica" << endl;
	cout << "   Escolha (em n�mero) uma das op��es acima: ";
	cin >> opcao;
	
	switch (opcao){
		case 1:
			potencia = pow(num1,num2);
			cout << fixed;
			cout << setprecision(2) << "  O valor da pot�ncia �: " << potencia << endl;
			break;
		case 2:
			raiz_quad1 = sqrt(num1);
			raiz_quad2 = sqrt(num2);
			cout << fixed;
			cout << setprecision(2) << "  A raiz quadrada de " << num1 << " �: "<< raiz_quad1 << endl;
			cout << setprecision(2) << "  A raiz quadrada de " << num2 << " �: "<< raiz_quad2 << endl;
			break;
		case 3:
			raiz_cub1 = cbrt(num1);
			raiz_cub2 = cbrt(num2);
			cout << fixed;
			cout << setprecision(2) << "  A raiz c�bica de " << num1 << " �: "<< raiz_cub1 << endl;
			cout << setprecision(2) << "  A raiz c�bica de " << num2 << " �: "<< raiz_cub2 << endl;
			break;
		default:
			cout << "  Op��o inv�lida! " << endl;
			break;
	}
	
	return 0.0;
}
