#include<cstdio>
#include<iostream>
#include<locale.h>
using namespace std;

float potencia(float medida1, float medida2){
    float watt;
    watt = medida1 * medida2 * 18;
    return(watt);
}
int main(){
	setlocale(LC_ALL,"portuguese");

    float comprimento,largura,watt;

    cout << " Insira o comprimento da sala: ";
	cin >> comprimento;

	cout << " Insira a largura da sala: ";
	cin >> largura;

    watt = potencia(comprimento,largura);

    cout << " C�modo de: " << comprimento*largura << "m�: " << watt << " Wats." << endl;

    return 0.0;
}
