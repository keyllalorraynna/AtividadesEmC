#include<cstdio>
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float saldoM, valor;

	cout << " Informe o saldo médio anual: ";
	cin >> saldoM;
					
	if (saldoM > 400.00){
		valor = saldoM + (saldoM * 0.3);
		cout << fixed;
		cout << setprecision(2) << " O valor do crédito é: " << valor << endl;
	}	
	else
		if (saldoM <= 400.00 && saldoM > 300.00 ){
			valor = saldoM + (saldoM * 0.25);
			cout << fixed;
			cout << setprecision(2) << " O valor do crédito é: " << valor << endl;
		}
		else 
			if (saldoM <= 300.00 && saldoM > 200.00){
				valor = saldoM + (saldoM * 0.2);
				cout << fixed;
				cout << setprecision(2) << " O valor do crédito é: " << valor << endl;
			}
			else 
				if (saldoM <= 200.00 && saldoM > 0.00){
					valor = saldoM + (saldoM * 0.1);
					cout << fixed;
					cout << setprecision(2) << " O valor do crédito é: " << valor << endl;
				}
				else
					cout << " Salário inválido! " << endl;	
	return 0.0;
}
