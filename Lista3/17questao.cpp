#include<cstdio>
#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float pi, raio, comprimento, area, volume;
    
	cout << " Insira o valor do raio: ";
	cin >> raio;
	
	pi = 3,14159;

	comprimento = 2.0 * pi * raio;
	area = pi * pow(raio, 2); 
	volume = 3.0 / 4.0 * pi * pow(raio, 3);

	cout << " Este � o valor do comprimento da esfera: " << comprimento << endl;
	cout << " Este � o valor da �rea da esfera: " << area << endl;
	cout << " Este � o valor do volume da esfera: " << volume << endl;

	return 0.0;
}
