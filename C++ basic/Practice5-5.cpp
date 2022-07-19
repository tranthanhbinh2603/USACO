//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include <iostream>
using namespace std;

const long int maxarr = 100000;
long int A[maxarr];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long int t;
	cin >> t;
	while (t--)
	{
		long int n, k;
		cin >> n >> k;
		for (long int i = 0; i < n; i++)
			cin >> A[i];

		long int min = A[0];
		for (long int i = 1; i < n; i++)
			if (A[i] < min) min = A[i];

		cout << (k - min > 0 ? k - min : 0) << "\n";
	}
}