#include<iostream>
#include<math.h>
using namespace	std;

int main(){
	double diametroCirc, areaCirc;

	cout << "Digite o valor do diametro do circulo: ";
	cin >> diametroCirc;
	
	areaCirc = 3.14 * (pow((diametroCirc/2),2));
	
	cout << "A area do circulo eh aproximadamente: " << areaCirc;
	return 0;
}