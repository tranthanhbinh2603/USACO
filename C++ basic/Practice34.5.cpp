//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/good-string-3/
//Hashmap
#include <iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int hsh[123];
	string s;
	cin >> s;

	for (int i = 0; i < 124; i++)
		hsh[i] = 0;

	for (int i = 0; i < s.size(); i++)
		hsh[(int)s[i]]++;

	int res = 0;
	for (int i = 0; i < 124; i++)
		if (hsh[i] > 1) res += hsh[i] - 1;

	cout << res;
}