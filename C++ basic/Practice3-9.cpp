//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	

	int t;
	cin >> t;

	while (t--)
	{		
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int z = 1; z <= i; z++) cout << "*";
			for (int z = n - i - 1; z >= 0; z--) cout << "##";
			for (int z = 1; z <= i; z++) cout << "*";
			cout << "\n";
		}
		cout << "\n";
	}
}