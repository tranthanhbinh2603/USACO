//https://practice.geeksforgeeks.org/problems/reverse-a-string/1
#include <iostream>
using namespace std;

int main()
{
	string a, a_rev;
	cin >> a;

	for (int i = a.size() - 1; i >= 0; i--)
	{
		a_rev += a[i];
	}
	cout << a_rev;
}