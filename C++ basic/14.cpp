//Vấn đề: https://www.codechef.com/problems/GCDQ
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		int a[n+10];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		while(q--)
		{
			int l, r;
			cin >>  l >> r;
			int gc = 0;
			for (int i = 1; i <= l-1; i++)
				gc = __gcd(gc, a[i]);
			for (int i = r+1; i <= n; i++)
				gc = __gcd(gc, a[i]);
			cout << gc << endl;
		}
	}

	//O(T * (N + Q * N)) = O (T * N + T * Q * N) = 100^3
}