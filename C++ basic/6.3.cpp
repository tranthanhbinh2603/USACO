//https://www.hackerearth.com/problem/algorithm/gpl/
#include <iostream>
using namespace std;

void print(int leng, string n)
{
	long long res = 0; bool isStart = true;
	for (int i = 0; i < leng; i++)
	{
		if ((n[i] == '1') && (isStart == true))
		{
			res = 1;
			isStart = false;
		}
		else if ((n[i] == '0') && (isStart == false))
			res = res * 2;
		else if ((n[i] == '1') && (isStart == false))
			res = res * 2 + 1;
	}
	cout << res << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
	{
		int leng; 
		cin >> leng;
		string n;
		cin >> n;
		print(leng, n);
	}
}