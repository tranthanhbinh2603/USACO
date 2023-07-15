//https://www.spoj.com/problems/MAY99_E1/
//Sorting
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
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

	string s;
	cin >> s;

	vector<pair<int, int>> m(150);
	for (int i = 0; i < s.size(); i++){
		m[s[i]].first = (int)s[i];
		m[s[i]].second++;
	}

	sort(m.begin(), m.end(), cmp);
	cout << (char)m.begin()->first;
}

//https://www.hackerearth.com/.../algorithm/good-string-3/
//https://www.hackerearth.com/.../chandu-and-his-girlfriend/