#include <iostream>
using namespace std;

const int maxarr = 1e7;
int a[maxarr];

//digit sum
//digitsum(123) = 1 + digitsum(23)
int digitsum(int n)
{
	if (n == 0) return 0;
	return (n % 10) + digitsum(n/10);
}
//Call theo số chữ số n
//Độ phức tạp: O(log(n))

int main()
{
	int n;
	cin >> n;
	cout << digitsum(n);
}