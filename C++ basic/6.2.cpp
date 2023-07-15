//https://www.hackerearth.com/problem/algorithm/jiyas-sequence/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		long long int res = 1; int temp;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			res *= temp;
		}

		if ((res % 10 == 2) || (res % 10 == 3) || (res % 10 == 5))
		{
			cout <<  "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
		res = 1;
	}
}