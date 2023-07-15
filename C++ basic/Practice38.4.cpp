//https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
#include <iostream>
#include <algorithm>
using namespace std;

int lengmax = 0;
void checklonggetSubstring(string s, int k)
{
	if (s == "") {if (s.size() > lengmax) lengmax = s.size(); return;};
	if (s.size() == 1) 
		if (k == 1) {if (1 > lengmax) lengmax = s.size(); return;}
	else 
		{if (0 > lengmax) lengmax = s.size(); return;}
	int map[26] = {0};
	for (char c : s)
		map[c - 'a']++;
	bool isVaild = true;
	for (int i = 0; i < 26; i++)
		if ((map[i] > 0) && (map[i] < k)) {isVaild = false; break;}
	if (isVaild) {if (s.size() > lengmax) lengmax = s.size(); return;}
	else
	{
		int mid = 0;
		for (int i = 0; i < s.size(); i++)
			if (map[s[i] - 'a'] < k) mid = i + 1;
		string left = "";
		string right = "";
		for (int i = 0; i < mid - 1; i++)
			left.push_back(s[i]);
		for (int i = mid; i < s.size(); i++)
			right.push_back(s[i]);
		checklonggetSubstring(left, k);
		checklonggetSubstring(right, k);
	}
}

int longestSubstring(string s, int k) 
{
    checklonggetSubstring(s, k);
    return lengmax;  
}

int main()
{
	string s; int k;
	cin >> s >> k;
	cout << longestSubstring(s, k);
}