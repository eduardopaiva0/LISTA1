#include<iostream>
using namespace	std;

int main(){
	double diagonal, area;
	
	cout << "Digite a diagonal do quadrado: ";
	cin >> diagonal;
	
	area = (diagonal*diagonal)/2;
	
	cout << "A area o quadrado de diagonal " << diagonal << " eh: " << area;
	
}