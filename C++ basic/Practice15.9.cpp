//https://leetcode.com/problems/valid-anagram/
#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
	const int maxarr = 26;
	int hsh1[maxarr], hsh2[maxarr];  
	for (int i = 0; i < 26; i++)
		hsh1[i] = hsh2[i] = 0;
	for (int i = 0; i < s.size(); i++)
		hsh1[s[i] - 'a']++;
	for (int i = 0; i < t.size(); i++)
		hsh2[t[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		if (hsh1[i] != hsh2[i]) return false;
	return true; 
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s, t;
	cin >> s >> t;
	cout << isAnagram(s, t);
}