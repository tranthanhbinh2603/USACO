#include <iostream>
using namespace std;

//Factorial of N

void func(int n)
{
	if (n == 0) return;
	func(n-1);
	cout << n << "\n";
}

int factorial(int n)
{
	if (n == 1) return 1;
	return factorial(n-1) * n;
}
//1. Số lượng func gọi lại: n
//2. Độ phực tạp (0(1))

int main()
{
	int n;
	cin >> n;
	//func(n);
	cout << factorial(n);
}