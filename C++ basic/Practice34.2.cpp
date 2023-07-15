//https://www.hackerearth.com/problem/algorithm/sherlock-and-mind-palace-queries/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool isPrime(int a)
{
	if (a <= 1) return false;
	for (int i = 2; i <= sqrt(a); i++)
		if (a % i == 0) return false;
	return true;
}

int count_div(int i)
{
	if (i == 1) return 1;
	if (isPrime(i)) return 2;
	int res = 1; int div = 2; int pow = 0;
	while (i != 1)
	{
		if (i % div == 0){
			pow += 1;
			i /= div;
		}
		else
		{
			if (pow >= 1) res = res * (pow + 1);
			pow = 0;
			div++;
		}
	}
	if (pow >= 1) res = res * (pow + 1);
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//sort(a, a+n);
	for (int i = 0; i < n; i++)		
		cout << count_div(a[i]) << "\n";
}