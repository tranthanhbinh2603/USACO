//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/little-jhool-and-the-magical-jewels/
#include <iostream>
using namespace std;

const int maxarr = 26;
int hsh[maxarr];

/*cout << 'r' - 'a' << "\n"; - 17
cout << 'u' - 'a' << "\n"; - 20
cout << 'b' - 'a' << "\n"; - 1
cout << 'y' - 'a' << "\n"; - 24*/

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 26; i++)
			hsh[i] = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			hsh[s[i] - 'a']++;
		cout << min(hsh[17], min(hsh[20], min(hsh[1], hsh[24]))) << "\n";
	}
}