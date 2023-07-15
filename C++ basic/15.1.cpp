//https://www.hackerrank.com/challenges/crush/problem
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1e7 + 10;
long long int A[maxn];

int main()
{ 
	int n, m;
	cin >> n >> m;
	while (m--)
	{
		int a, b, k;
		cin >> a >> b >> k;
		for (int i = a; i <= b; i++)
			A[i] += k;
	}
	cout << *max_element(A, A+n+1);
}