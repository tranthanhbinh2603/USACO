//https://www.hackerearth.com/problem/algorithm/stl/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
	if (a.second != b.second)
		return a.second > b.second;
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<pair<string, int>> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end(), cmp);
	for (auto it : v)
		cout << it.first << " " << it.second << "\n";
}