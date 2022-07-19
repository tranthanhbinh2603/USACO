//https://www.hackerrank.com/challenges/printing-pattern-2/problem
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i<= (n * 2 - 1); i++)
	{
		int min = n - i + 1;
		if (min <= 0) min -= 2;
		if (min < 0) min *= (-1);
		for (int i = n; i >= min; i--) cout << i << " ";
		int temp = (n * 2) - ((n - min + 1) * 2);
		for (int i = 1; i < temp; i++) cout << min << " ";
		for (int i = min; i <= n; i++) 
			if (i != 1) cout << i << " ";
		cout << "\n";
	}
}