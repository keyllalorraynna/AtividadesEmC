#include<cstdio>
#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
		
	float h, base, altura, distancia, hipotenusa;
    
	cout << " Digite o �ngulo base: ";
	cin >> base;

	cout << " Digite a distancia: ";
	cin >> distancia;

    hipotenusa = base / cos(base);
	
	//valida se � positivo:
	if (hipotenusa < 0){ 
		hipotenusa = hipotenusa * (-1);
	}
	
	// calcula a altura:
	h = sqrt(pow(hipotenusa, 2) - pow(distancia, 2)); //dando erro n�o sei pq
	altura = 180 - (90 + base);

	cout << " A medida da escada �: " << hipotenusa << endl;
	cout << " A altura da escada �: " << h << endl;
	cout << "Os tr�s �ngulos do tri�ngulo s�o: " << base << " e " << altura << "graus." << endl;

	return 0.0;
}
