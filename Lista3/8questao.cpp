#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float kilos, gramas, menos_peso;
	
	cout << " Digite o peso em kg: ";
	cin >> kilos;
	
	gramas = kilos * 1000;
	cout << " " << kilos << "kg em gramas fica: " << gramas << endl;

	return 0.0;
}
