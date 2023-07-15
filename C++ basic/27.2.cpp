/*Cho N string và Q truy vấn
Tìm xem từng chuỗi trong Q nó có thuộc N không
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
Out: 
yes
yes
no
*/
#include <iostream>
#include <unordered_set>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unordered_set<string> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		m.insert(s);
	}
	int q;
	cin >> q;
	while (q--)
	{
		string str;
		cin >> str;
		if (m.find(str) == m.end())
			cout << "no\n";
		else
			cout << "yes\n"; 
	}
} 