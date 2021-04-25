#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float lado, area;

	cout << " Digite o valor do lado: ";
	cin >> lado;
	while (lado<=0){
   		cout << " A base menor não pode ser menor ou igual a 0, digite novamente: ";
		cin >> lado;
	}

	area = lado * lado;
	cout << " O total do valor da área do quadrado é de: " << area << endl;			
	
	return 0.0;
}
