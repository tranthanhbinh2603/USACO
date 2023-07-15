//https://practice.geeksforgeeks.org/problems/reverse-an-array/0
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		int A[N];
		for (int i = 0; i < N; i++)
			cin >> A[i];
		reverse(A, A+N);
		for (int i = 0; i < N; i++)
			cout << A[i] << " ";
		cout << "\n";
	}
}