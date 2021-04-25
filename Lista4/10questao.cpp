#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	float preco, desconto, codigo, novo_preco;

	cout << " Informe o preço do produto: ";
	cin >> preco;
	
	cout << " Informe o código: ";
	cin >> codigo;
					
	if (preco <= 30.00 && preco > 0){
		desconto = preco * 0 / 100;
		novo_preco = preco - desconto;
	}	
	else
		if (preco > 30.00 && preco <= 100.00){
			desconto = preco * 10 / 100;
			novo_preco = preco - desconto;
		}
		else 
			if (preco > 100.00){
				desconto = preco * 15 / 100;
				novo_preco = preco - desconto;
			}
			else
				cout << " Preço inválido! " << endl;
				
		cout << fixed;
		cout << setprecision(2) << " O valor do desconto é de: R$ " << desconto << endl;
		cout << setprecision(2) << " O valor final é de: R$ " << novo_preco << endl;	
	return 0.0;
}
