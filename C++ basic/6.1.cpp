//https://www.hackerearth.com/problem/algorithm/capitalbaazi/
#include <iostream>
using namespace std;

void print(string &s)
{
	for (int i = 0; i < s.size(); i++)
		s[i] = s[i] - 32;
	cout << s << "\n";
	s = "";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	getline(cin, s);
	string temp = "";
	for (int i = 0; i < s.size(); i++)
	{		
		if (s[i] == ' ')
		{
			print(temp);
		}
		else
		{
			temp = temp + s[i];
		}
	}
	print(temp);
}