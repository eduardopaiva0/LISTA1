#include<iostream>
#include<math.h>
using namespace	std;

int main(){
	double num1, num2, mediaGeo;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;	
	
	mediaGeo = sqrt(num1 * num2);
	
	cout << "A media geometrica dos valores digitados eh: " << mediaGeo;
	return 0;
}