#include<iostream>
using namespace	std;

int main(){
	double altura;
	double base;
	double area;
	cout << "Digite a altura do retangulo: ";
	cin >> altura;
	
	cout << "Digite a base do retangulo: ";
	cin >> base;
	
	area = altura * base;
	cout << "A area do retangulo torna-se: " << area << endl;
}