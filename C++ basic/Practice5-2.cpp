//https://www.hackerrank.com/challenges/30-arrays/problem
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int A[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << A[i] << " ";
	}
}