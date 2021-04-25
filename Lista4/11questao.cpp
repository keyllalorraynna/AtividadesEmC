#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main(void) {
	
	setlocale(LC_ALL,"portuguese");
	
	int senha;

	cout << " Digite sua senha: ";
	cin >> senha;
					
	if (senha == 4531){
		cout << " Senha aceita! " << endl << " Acesso liberado!" << endl;
	}	
	else
		cout << " Senha inválida! " << endl << " Acesso negado!" << endl;
	return 0;
}
