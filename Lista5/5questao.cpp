#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float preco, aumento, novo_preco, classif;
	
	cout << " Informe o preço do produto: ";
	cin >> preco;
	
	if (preco <= 50 && preco > 0){
		aumento = preco * 5/100;
	}	
	else if (preco > 50 && preco < 100){
		aumento = preco * 10/100;
	}
	else if (preco > 100){
		aumento = preco * 15/100;
	}
	else{
		cout << " Valor inválido!" << endl;
	}
	novo_preco = preco + aumento;
	cout << fixed;
	cout << setprecision(2) << " Novo preço: R$ " << preco + aumento << endl;
		
	if (novo_preco <= 80 && novo_preco > 0){
		cout << " Barato!" << endl;
	}
	else if (novo_preco > 80 && novo_preco <= 120){
		cout << " Normal!" << endl;
	}
	else if (novo_preco > 120 && novo_preco <= 200){
		cout << " Caro!" << endl;
	}
	else if (novo_preco > 200){
		cout << " Muito caro!" << endl;
	}
	return 0.0;
}
