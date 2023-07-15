//https://www.hackerrank.com/challenges/balanced-brackets/problem
#include <iostream>
#include <stack>
using namespace std;

string isBalanced(string s) {
	stack<char> s1;
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{'))
			s1.push(s[i]);
		else
		{
			char top = (s1.empty()) ? ' ' : s1.top();
			if ((s[i] == ')') && (top != '('))
				return "NO";
			else if ((s[i] == ']') && (top != '['))
				return "NO";
			else if ((s[i] == '}') && (top != '{'))
			 	return "NO";
			else s1.pop();
		}
	}
	if (!s1.empty()) return "NO";
	return "YES";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		cout << isBalanced(s) << "\n";
	}	
}