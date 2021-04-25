#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float tempC, tempF;
    
	cout << " Insira a temperatura em Celsius: ";
	cin >> tempC;
	
	tempF = 180 * (tempC + 32) / 100;

	cout << " A temperatura em Fahrenheit: " << tempF << "°F. " << endl;

	return 0.0;
}
