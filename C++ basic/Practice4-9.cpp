//https://leetcode.com/problems/student-attendance-record-i/
#include <iostream>
using namespace std;

bool checkRecord(string s) {
	int absent = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'A') absent++;
	if (absent >= 2) return false;

	if (s.size() < 3) return true;

	for (int i = 0; i < s.size() - 2; i++)
		if ((s[i] == 'L') && (s[i + 1] == 'L') && (s[i + 2] == 'L'))
			return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;
	cout << checkRecord(s);
}