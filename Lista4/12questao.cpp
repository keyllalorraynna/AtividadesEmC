#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int idade;

	cout << " Digite a idade: ";
	cin >> idade;
					
	if (idade >= 18){
		cout << " Você já é maior de idade! " << endl;
	}	
	else
		if (idade < 18){
		cout << " Você ainda é menor de idade! " << endl;
		}
		else
			cout << " Idade inválida, você nem nasceu! " << endl;
	return 0;
}
