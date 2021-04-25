#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int categoria, id;
	float preco, aumento, imposto, novo_valor;
	char situacao;

	cout << " Informe o pre�o do produto: R$ ";
	cin >> preco;
	
	cout << " Informe a categoria do produto sendo, 1-limpeza | 2-alimenta��o | 3-vestuario: ";
	cin >> categoria;
	
	cout << " O produto precisa de refrigera��o? (Digite 'R' para refriger�vel, ou 'N' para n�o refriger�vel): ";
	cin >> situacao;
	
	// atribuindo um id para identifica��o da categoria	
	if (preco <= 25 && preco > 0){
		id = 100;
	}	
	else if (preco > 25){
		id = 200;
	}
	else{
		cout << " Pre�o inv�lido!" << endl;
		exit(0);		
	}
	
	// Selecionando a categoria e calculando o aumento
	switch(id){
		case 100:
			if (categoria == 1){
				aumento = preco * 5 / 100;
				imposto = 0;
			}
			else if (categoria == 2){
				aumento = preco * 8 / 100;
				imposto = preco * 5 / 100;
			}
			else if (categoria == 3){
				aumento = preco * 10 / 100;
				imposto = 0;
			}
			else if (situacao == 'R'){
				imposto = preco * 5 / 100;
			}
			else{
				cout << " Categoria inv�lida" << endl;
			}
			cout << fixed;
			cout << setprecision(2) << " Valor do aumento: R$ " << aumento << endl;
			break;
		
		case 200:
			if (categoria == 1){
				aumento = preco * 12 / 100;
				imposto = 0;
			}
			else if (categoria == 2){
				aumento = preco * 15 / 100;
				imposto = preco * 5 / 100;
			}
			else if (categoria == 3){
				aumento = preco * 18 / 100;
				imposto = 0;
			}
			else if ( situacao == 'R'){
				imposto = preco * 5 / 100;
			}
			else{
				cout << " Categoria inv�lida" << endl;
			}
			cout << fixed;
			cout << setprecision(2) << " Valor do aumento: R$ " << aumento << endl;
			break;	
	}
	novo_valor = (preco + aumento) - imposto;
	cout << " imposto: R$ " << imposto << endl;
	cout << " Novo valor: R$ " << novo_valor << endl;
	
	if (novo_valor <= 50 && novo_valor > 0){
		cout << " Classifica��o: Barato! " << endl;
	}
	else if (novo_valor > 50 && novo_valor <= 120){
		cout << " Classifica��o: Normal! " << endl;
	}
	else if (novo_valor >120){
		cout << " Classifica��o: Caro! " << endl;
	}
	return 0.0;
}
