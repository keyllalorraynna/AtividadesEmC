#include<cstdio>
#include<iostream>
#include<locale.h>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float real, dolar, libra, marco;
    
	cout << " Informe a quantidade em R$ (reais), que voc� possui (sem pontua��o): R$ ";
	cin >> real;
	
	dolar = real / 1.80;
	marco = real / 2.00;
	libra = real / 3.57;
	
	cout << fixed;
	cout << setprecision(2) << " Voc� tem: U$ " << dolar << " d�lares." << endl;
	cout << setprecision(2) << " Voc� tem: DM " << marco << " marcos alem�es." << endl;
	cout << setprecision(2) << " Voc� tem: � " << libra << " libras esterlinas." << endl;
	
	return 0.0;
}
