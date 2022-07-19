//https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/
#include <iostream>
using namespace std;

void print(long long int a[], int n)
{
	for (int i = 0; i < n + 1; i++)
		cout << a[i] << ' ';
	cout << "\n";
}

long long int before[40], after[40];
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

		for (int i = 0; i < n; i++)
		{
			if (i == 0) after[0] = 1;
			if (i == 1) after[0] = after[1] = 1;
			if (i > 1)
			{
				for (int z = 0; z <= i; z++)
				{
					if (z == 0) before[0] = 1;
						else before[z] = after[z] + after[z - 1];
				}
				after[i] = 1;
				for (int z = 0; z < i; z++)
					after[z] = before[z];
			}
			print(after, i);
		}
	}
}