#include<iostream>
using namespace std;

int main(){
	double cotacaoDolar, dol, dolParaReal ;
	
	cout << "Digite o valor da cotacao do dolar: ";
	cin >> cotacaoDolar;
	
	cout << "Digite a quantia em dolar: ";
	cin >> dol;
	
	dolParaReal = dol * cotacaoDolar;
	
	cout << "A quantia " << dol << " em dolar convertida para real eh de: " << dolParaReal;
	return 0;
}
