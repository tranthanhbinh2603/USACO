//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/
#include <iostream>
using namespace std;

const int maxarr = 26;
int str1[maxarr], str2[maxarr];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 26; i++){
			str1[i] = 0; 
			str2[i] = 0;
		}
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.size(); i++)
			str1[s1[i] - 'a']++;
		for (int i = 0; i < s2.size(); i++)
			str2[s2[i] - 'a']++;
		int res = 0;
		for (int i = 0; i < 26; i++)
			res += abs(str1[i] - str2[i]);
		cout << res << "\n";
	}
}