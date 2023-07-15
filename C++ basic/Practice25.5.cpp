//https://codeforces.com/problemset/problem/4/C
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
	map<string, int> m;
	while (n--)
	{
		string s;
		cin >> s;
		if (m[s] == 0) 
		{ 
			m[s]++; 
			cout << "OK\n";
		}
		else{			
			string res = s + to_string(m[s]);
			m[s]++;
			cout << res << "\n";
		}
	}
}