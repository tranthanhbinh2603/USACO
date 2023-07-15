#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first != b.first)
		return a.first < b.first;
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	/*int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	for (int i : a)
		cout << i << "\n";*/

	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v[i] = {a, b};
	}
	sort(v.begin(), v.end(), cmp);
	for (auto it : v)
		cout << it.first << " " << it.second << "\n";
}