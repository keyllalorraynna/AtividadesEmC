#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int codigo, categoria, qntd;
	float preco, nota_total, desc, total_final;

	cout << " Informe o código do produto: ";
	cin >> codigo;
	
	cout << " Quantidade: ";
	cin >> qntd;
		
	if (codigo >= 1 && codigo <= 10){
		categoria = 1;
		preco = 10.00;
	}	
	else if (codigo >= 11 && codigo <= 20){
		categoria = 2;
		preco = 15.00;
	}
	else if (codigo >= 21 && codigo <= 30){
		categoria = 3;
		preco = 20.00;
	}	
	else if (codigo >= 31 && codigo <= 40){
		categoria = 4;
		preco = 30.00;
	}
	else{
		cout << " Código inválido!" << endl;
		exit(0);		
		}
	
	nota_total = preco * qntd;	
	
	if (nota_total <= 250){
		desc = nota_total * 5 / 100;
		total_final = nota_total- desc;
	}	
	else if (nota_total > 250 && nota_total <= 500){
		desc = nota_total * 10 / 100;
		total_final = nota_total- desc;
	}
	else if (nota_total > 500){
		desc = nota_total * 15 / 100;
		total_final = nota_total- desc;
	}			
	
	switch(categoria){
		case 1:
			cout << fixed;
			cout << setprecision(2) << " Preço unitário: R$ " << preco << endl;
			cout << setprecision(2) << " Valor total da nota: R$ " << nota_total << endl;
			cout << setprecision(2) << " Valor do desconto: R$ " << desc << endl;
			cout << setprecision(2) << " Preço total com desconto: R$ " << total_final << endl;
			break; 
		case 2:
			cout << fixed;
			cout << setprecision(2) << " Preço unitário: R$ " << preco << endl;
			cout << setprecision(2) << " Valor total da nota: R$ " << nota_total << endl;
			cout << setprecision(2) << " Valor do desconto: R$ " << desc << endl;
			cout << setprecision(2) << " Preço total com desconto: R$ " << total_final << endl;
			break; 
		case 3:
			cout << fixed;
			cout << setprecision(2) << " Preço unitário: R$ " << preco << endl;
			cout << setprecision(2) << " Valor total da nota: R$ " << nota_total << endl;
			cout << setprecision(2) << " Valor do desconto: R$ " << desc << endl;
			cout << setprecision(2) << " Preço total com desconto: R$ " << total_final << endl;
			break; 
		case 4:
			cout << fixed;
			cout << setprecision(2) << " Preço unitário: R$ " << preco << endl;
			cout << setprecision(2) << " Valor total da nota: R$ " << nota_total << endl;
			cout << setprecision(2) << " Valor do desconto: R$ " << desc << endl;
			cout << setprecision(2) << " Preço total com desconto: R$ " << total_final << endl;
			break; 
		case 5:
			cout << fixed;
			cout << setprecision(2) << " Preço unitário: R$ " << preco << endl;
			cout << setprecision(2) << " Valor total da nota: R$ " << nota_total << endl;
			cout << setprecision(2) << " Valor do desconto: R$ " << desc << endl;
			cout << setprecision(2) << " Preço total com desconto: R$ " << total_final << endl;
			break;  
	}
	return 0.0;
}
