//https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int Q;
	cin >> Q;
	set<int> m;
	while (Q--)
	{
		int y, x;
		cin >> y >> x;
		if (y == 1) m.insert(x);
		if (y == 2) m.erase(x);
		if (y == 3) 
		{
			auto it = m.find(x);
			if (it == m.end())
				cout << "No\n";
			else
				cout << "Yes\n"; 
		}
	}
}