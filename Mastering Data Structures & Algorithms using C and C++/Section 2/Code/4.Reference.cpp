#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int &r = a;

	cout << a << " " << r << "\n";
	a++;
	cout << a << " " << r << "\n";

	r = 25;
	cout << a << " " << r << "\n";

	int b = 10000;
	r = b;
	cout << a << " " << r << "\n";
}