//https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		set<string> s;
		while (N--)
		{
			string str;
			cin >> str;
			s.insert(str);
		}
		for (auto it : s)
			cout << it << "\n";
	}
}