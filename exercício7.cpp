#include<iostream>
using namespace	std;

int main(){
	double milhasMarit, mMparaKm;

	cout << "Digite a quantidade de milhas maritimas: ";
	cin >> milhasMarit;
	mMparaKm = milhasMarit * 1.852;
	
	cout << "O valor digitado convertido para quilometros eh: " << mMparaKm << " km";
	return 0;
}