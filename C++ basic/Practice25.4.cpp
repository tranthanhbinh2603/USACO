//https://codeforces.com/problemset/problem/525/A
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	string s;
	cin >> s;

	map <char, int> m;
	int res = 0;
	for (int i = 1; i < n; i++)
	{
		char keys = s[2 * i - 2];
		char lock = s[2 * i - 1];

		m[keys]++;
		if (m[(char)tolower(lock)] == 0) res++; else m[(char)tolower(lock)]--;
	}
	cout << res;
}