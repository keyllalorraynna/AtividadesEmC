#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	float peso;

	cout << " Informe a sua idade: ";
	cin >> idade;
	
	cout << " Informe o seu peso: ";
	cin >> peso;
					
	if (idade < 20 ){
		if (peso <= 60 && peso > 0){
			cout << " Grupo de risco 9! " << endl; }
		else if (peso > 60 && peso <=90){
			cout << " Grupo de risco 8!" << endl; }
		else if (peso > 90){
			cout << "Grupo de risco 7!" << endl;}
	}
	else if (idade >= 20 && idade <= 50){
		if (peso <= 60 && peso > 0){
			cout << " Grupo de risco 6! " << endl; }
		else if (peso > 60 && peso <=90){
			cout << " Grupo de risco 5!" << endl; }
		else if (peso > 90){
			cout << "Grupo de risco 4!" << endl;}
	}
	else if (idade > 50){
		if (peso <= 60 && peso > 0){
			cout << " Grupo de risco 3! " << endl; }
		else if (peso > 60 && peso <=90){
			cout << " Grupo de risco 2!" << endl; }
		else if (peso > 90){
			cout << "Grupo de risco 1!" << endl;}
	}
	else 
		cout << " Idade inválida!" << endl;

	return 0.0;
}
