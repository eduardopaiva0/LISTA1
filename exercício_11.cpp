#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double valorX, valorY, potencia;
	
	cout << "Digite o valor da base: ";
	cin >> valorX;
	
	cout << "Digite o valor do expoente: ";
	cin >> valorY;
	
	potencia = pow(valorX, valorY);
	
	cout << valorX << " elevado ao numero " << valorY << " eh: " << potencia;
	return 0;	
}