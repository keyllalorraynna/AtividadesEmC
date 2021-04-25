#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int idade, categoria;

	cout << " Informe a idade do nadador: ";
	cin >> idade;
		
	if (idade >= 5 && idade <= 7){
		categoria = 1;
	}	
	else if (idade >= 8 && idade <= 10){
		categoria = 2;
	}
	else if (idade >= 11 && idade <= 15){
		categoria = 3;
	}	
	else if (idade >= 16 && idade <= 30){
		categoria = 4;
	}	
	else if (idade > 30){
		categoria = 5;
	}		
	else{
		cout << " idade inválida, Você não pode competir!" << endl;
		exit(0);		
		}
		
	switch(categoria){
		case 1:
			cout << " Categoria infantil." << endl;
			break; 
		case 2:
			cout << " Categoria juvenil." << endl; 
			break;
		case 3:
			cout << " Categoria Adolescente." << endl; 
			break;
		case 4:
			cout << " Categoria Adulta." << endl; 
			break;
		case 5:
			cout << " Categoria Sênior." << endl;
			break; 
	}
	return 0;
}
