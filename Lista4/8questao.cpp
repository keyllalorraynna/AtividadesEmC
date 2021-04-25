#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	float custo, preco, imposto, distribuidor;

	cout << " Informe o custo de fábrica: ";
	cin >> custo;
					
	if (custo < 12.000 && custo > 0){
		imposto = custo * 0 / 100;
		distribuidor = custo * 5 / 100;
		preco = custo + imposto + distribuidor;
	}	
	else
		if (custo >= 12.000 && custo < 25.000){
			imposto = custo * 15 / 100;
			distribuidor = custo * 10 / 100;
			preco = custo + imposto + distribuidor;
		}
		else 
			if (custo >= 25.000){
				imposto = custo * 20 / 100;
				distribuidor = custo * 15 / 100;
				preco = custo + imposto + distribuidor;
			}
			else
				cout << " custo inválido! " << endl;
				
		cout << fixed;
		cout << setprecision(3) << " O valor final é de: R$ " << preco << endl;	
	return 0.0;
}
