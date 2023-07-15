#include <iostream>
using namespace std;

void printHello()
{
	cout << "Hello, hacker!";
}

sum (int a, int b){
	int res = a + b;
	return res;
}

int digit_sum(int n)
{
	int digit_sum = 0;
	while (n)
	{
		digit_sum += n % 10;
		n = n / 10;
	}
	return digit_sum;
}

void increment(int &n, int z)
{
	n++;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//Dấu & không cần thiết với array
void func(int a[10])
{
	a[0] = 10;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//printHello();
	//cout << sum(2,3);

	/*int a, b;
	cin >> a >> b;
	cout << digit_sum(a) + digit_sum(b);*/

	/*int a = 3; int z = 4;
	cout << a << " " << z << endl;
	increment(a, z);
	cout << a << " " << z << endl;*/

	/*int a = 3; int z = 4;
	cout << a << " " <<b << "\n";
	swap(a,b);
	cout << a << " " <<b << "\n";*/

	int a[10];
	a[0] = 5;
	cout << a[0] << "\n";
	func(a);
	cout << a[0] << "\n";

}