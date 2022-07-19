//https://www.codechef.com/LRNDSA01/problems/CARVANS
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

		int res = 1; int min;
		cin >> min;
		for (int i = 1; i < n; i++)
		{
			int temp; cin >> temp;
			if (temp <= min)
			{
				min = temp;
				res++;
			}			
		}
		cout << res << "\n";
	}
}