//https://www.hackerrank.com/challenges/crush/problem
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1e7 + 10;
long long int Arr[maxn];
long long int pf[maxn];
int main()
{ 
	int n, m;
	cin >> n >> m;
	while (m--)
	{
		int a, b, k;
		cin >> a >> b >> k;
		Arr[a] = Arr[a] + k;
		Arr[b + 1] = Arr[b+1] - k; 
	}
	for (int z = 1; z <= n; z++)
		pf[z] = pf[z - 1] + Arr[z];
	cout << *max_element(pf, pf+n+1);
}

//O(M) + O(N) + O(N) = 10^7 => Kiểu gì cũng qua! 