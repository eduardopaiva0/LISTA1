#include<iostream>
using namespace	std;

int main(){
	double aresta;
	double area;
	
	cout << "Informe o valor da aresta: ";
	cin >> aresta;
	
	area = aresta*aresta;
	
	cout << "A area de um quadrado que tem a aresta de " << aresta << " eh " << area;
	return 0;
}