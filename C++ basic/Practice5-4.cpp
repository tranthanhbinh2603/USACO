//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int n, cgr, cpu;
		cin >> cgr >> cpu >> n;

		int a[n][2];
		for (int i = 0; i < n; i++)
			cin >> a[i][0] >> a[i][1];

		int res1 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i][0] == 1) res1 += cgr;
			if (a[i][1] == 1) res1 += cpu;
		} 
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i][0] == 1) res += cpu;
			if (a[i][1] == 1) res += cgr;
		}

		cout << min(res,res1) << "\n";
	}
}