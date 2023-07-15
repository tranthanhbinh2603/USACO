//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	bool isPalin = true;
	for (int i = 0; i < str.size() / 2; i++)
		if (str[i] != str[str.size() - i - 1]){
			isPalin = false;
			break;
		}
	if (isPalin) cout << "YES";
		else cout << "NO";

}