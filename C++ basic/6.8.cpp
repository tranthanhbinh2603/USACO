//https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long int n)
{
	if (n < 1) return false;
	for (int i = 2; i < sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	getline(cin, s);
	long int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{		
		if ((int) s[i] >= 97) s[i] -= 32; else s[i] += 32;
		if ((int) s[i] >= 97) sum -= (int)s[i]; else sum += (int)s[i];
	}
	if (isPrime(abs(sum))) cout << 1; else cout << 0;
}