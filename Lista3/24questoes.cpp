#include<cstdio>
#include<iostream>
#include<locale.h>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float real, dolar, libra, marco;
    
	cout << " Informe a quantidade em R$ (reais), que você possui (sem pontuação): R$ ";
	cin >> real;
	
	dolar = real / 1.80;
	marco = real / 2.00;
	libra = real / 3.57;
	
	cout << fixed;
	cout << setprecision(2) << " Você tem: U$ " << dolar << " dólares." << endl;
	cout << setprecision(2) << " Você tem: DM " << marco << " marcos alemães." << endl;
	cout << setprecision(2) << " Você tem: £ " << libra << " libras esterlinas." << endl;
	
	return 0.0;
}
