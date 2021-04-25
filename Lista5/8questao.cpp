#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	int opcao, codigo;
	float num1, num2, potencia, raiz_quad1, raiz_quad2, raiz_cub1, raiz_cub2;
	
	cout << " Digite o código do produto: ";
	cin >> codigo;
	
	switch (codigo){
		case 1:
			cout << "Este produto vem do sul!" << endl;
			break;
		case 2:
			cout << "Este produto vem do norte!" << endl;
			break;
		case 3:
			cout << "Este produto vem do leste!" << endl;
			break;
		case 4:
			cout << "Este produto vem do oeste!" << endl;
			break;
		case 5:
		case 6:
			cout << "Este produto vem do nordeste!" << endl;
			break;
		case 7:
		case 8:
		case 9:
			cout << "Este produto vem do sudeste!" << endl;
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			cout << "Este produto vem do centro-oeste!" << endl;
			break;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
			cout << "Este produto vem do nordeste!" << endl;
			break;
		default:
			cout << " Código inválido!" << endl;
			break;
	}
	return 0.0;
}
