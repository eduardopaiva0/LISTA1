#include<iostream>
using namespace	std;

int main(){
	double num1, num2, num3, num4, mediaAri;
	cout << "Digite o primeiro numero: ";
	cin >> num1;	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "Digite o terceiro numero: ";
	cin >> num3;
	cout << "Digite o quarto numero: ";
	cin >> num4;
	
	mediaAri = (num1 + num2 + num3 + num4)/4;
	
	cout << "A media aritmetica dos valores digitados eh: " << mediaAri;
	return 0;
}