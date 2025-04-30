#include<iostream>
using namespace	std;

int main(){
	double milhasMarit, mMParaKm;

	cout << "Digite a quantidade de milhas maritimas: ";
	cin >> milhasMarit;
	mMParaKm = milhasMarit * 1.852;
	
	cout << "O valor digitado convertido para quilometros eh: " << mMParaKm << " km";
	return 0;
}