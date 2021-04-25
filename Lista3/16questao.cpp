#include<cstdio>
#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float ladoA, ladoB, hipotenusa;
	
	cout << " Insira o valor do lado A: ";
	cin >> ladoA;
	
	cout << " Insira o valor do lado B: ";
	cin >> ladoB;
	
	hipotenusa = sqrt((ladoA * ladoA) + (ladoB + ladoB));
	
	cout << " Este é o valor da hipotenusa: " << hipotenusa << endl;
	
	return 0.0;
}
