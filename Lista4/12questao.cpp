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
		cout << " Voc� j� � maior de idade! " << endl;
	}	
	else
		if (idade < 18){
		cout << " Voc� ainda � menor de idade! " << endl;
		}
		else
			cout << " Idade inv�lida, voc� nem nasceu! " << endl;
	return 0;
}
