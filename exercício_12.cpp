#include <iostream>
using namespace std;

int main(){
	double produto1,produto2,produto3,produto4,produto5,valorPago,troco,precoCompra;

	cout << "Digite o valor do primeiro produto: ";
	cin >> produto1;
	cout << "Digite o valor do segundo produto: ";
	cin >> produto2;
	cout << "Digite o valor do terceiro produto: ";
	cin >> produto3;
	cout << "Digite o valor do quarto produto: ";
	cin >> produto4;
	cout << "Digite o valor do quinto produto: ";
	cin >> produto5;
	
	precoCompra = produto1 + produto2 + produto3 + produto4 + produto5;
	
	cout << "Digite o valor para pagar os produtos: ";
	cin >> valorPago;
	
	troco = valorPago - precoCompra;

	cout << "O valor do troco ficou: " << troco ;
	return 0;
}