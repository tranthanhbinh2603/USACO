#include <iostream>
using namespace std;

int main()
{
	int a = 50, b = 60;
	//50: 110010
	//60: 111100
	a = a ^ b;
	//xor: 001110 = a 
	cout << a << " " << b << "\n";
	b = b ^ a;
	//b=110010
	cout << a << " " << b << "\n";
	a = b ^ a;
	//a = 111100
	cout << a << " " << b << "\n";
}