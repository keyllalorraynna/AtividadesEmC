#include<cstdio>
#include<iostream>
#include<locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int tabuada, total;
	
	cout << " Digite o valor da tabuada que deseja: ";
	cin >> tabuada;
	
	for (int x = 1; x <= 10; ++x){
		cout << " " << tabuada << " X " << x << " = " << tabuada*x << endl;
	} 
	
	return 0;
}
