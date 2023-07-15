//https://www.hackerearth.com/problem/algorithm/help-joe-ii/
#include <iostream>
#include <algorithm>
using namespace std;

const int maxN = 1e5;
long long int A[maxN];
int n, q; long int m; long long int x;

long long int Div(int k)
{
	return (k + x) % m;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> A[i];
		A[i] %= m;
	}
	sort(A, A+n);
	cin >> q;
	while (q--)
	{
		cin >> x;
		// long long int min = 0;
		// long long int max = A[n - 1];
		// while (max - min > 0)
		// {
		// 	cout << Div(A[min]) << " " << Div(A[max]) << "\n";	
		// 	long long int mid = (max + min) / 2;
		// 	if (Div(A[mid + 1]) >= Div(A[mid - 1]))
		// 		max = mid;
		// 	else 
		// 		min = mid + 1;
		// }
		for (int i = 0; i < n; i++)
			cout << Div(A[i]);
		cout << "\n";
	}
}