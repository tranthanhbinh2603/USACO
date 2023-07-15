//https://www.spoj.com/problems/MOZSATLA/
#include <iostream>
using namespace std;

const int maxarr = 1e5+1;
long long int arr[maxarr], resarr[maxarr];

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

		for (int i = 0; i < n - 1; i++)
			cin >> arr[i];

		resarr[0] = 1;
		for (int i = 0; i < n - 1; i++){
			if (arr[i] == 0) resarr[i + 1] = resarr[i];
			if (arr[i] == 1) resarr[i + 1] = resarr[i] + 1;
			if (arr[i] == 2) resarr[i + 1] = resarr[i] - 1;
			if (resarr[i + 1] < 1) resarr[i + 1] = 1;
		}

		for (int i = 0; i < n; i++)
			cout << resarr[i] << " ";
		cout << "\n"; 
	}
}