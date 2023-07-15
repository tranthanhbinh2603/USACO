#include <iostream>
using namespace std;

const int maxarr = 1e7;
int a[maxarr];

//sum of array
//sum(n,a) = a[n] + sum(n-1,a)
int sum(int n, int A[])
{
	if (n < 0) return 0;
	return sum(n-1, A) + A[n];
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << sum(n, a);
}