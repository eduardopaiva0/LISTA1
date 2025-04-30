#include<iostream>
using namespace	std;

int main(){
	double valorCelsius, valorFahrenheit;
	
	cout << "Digite a temperatura em graus Celsius: ";
	cin >> valorCelsius;
	
	valorFahrenheit = (valorCelsius * 1.8) + 32;
	
	cout << "A temperatura digitada em Fahrenheit eh: " << valorFahrenheit;
	return 0;
}