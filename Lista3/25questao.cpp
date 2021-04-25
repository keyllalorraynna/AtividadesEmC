#include<cstdio>
#include<iostream>
#include<locale.h>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
	
	int h, min, h_minutos, minutos_total; 
	float seg;
    
	cout << " Informe as horas: ";
	cin >> h;
	
	cout << " Informe os minutos: ";
	cin >> min;
	
	h_minutos = h * 60;
	minutos_total = h_minutos + min;
	seg = minutos_total * 60;
	
	cout << fixed;
	cout << " Horas convertidas em minutos: " << h_minutos << " min." << endl;
	cout << " Total geral dos minutos: " << minutos_total << " min." << endl;
	cout << setprecision(2) << " Total de segundos: " << seg << " seg." << endl;
	
	return 0.0;
}
