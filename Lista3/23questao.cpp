#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float x, y, z;
    
	cout << " Informe o lado A: ";
	cin >> x;
	
	cout << " Informe o lado B: ";
	cin >> y;
	
	z = 180 - ( x + y);
	
	cout << " o valor do terceiro lado é: " << z << endl;
	
	return 0.0;
}
