#include<iostream>
using namespace	std;

int main(){
	double base,altura,area;
	cout << "Digite a base do triangulo: ";
	cin >> base;
	
	cout << "Digite a altura do triangulo: ";
	cin >> altura;
	
	area = (base*altura)/2;
	
	cout << "A area do triangulo eh: " << area;
	return 0;
}