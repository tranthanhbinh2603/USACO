/*Given N strings, print unique strings
in lexiographica (thứ tự từ điển) order with their
frequency
N <= 10^5
|S|<= 100*/

/*Ex: 
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<string, int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	for (auto it : m)
		cout << it.first << " " << it.second << "\n";
} 