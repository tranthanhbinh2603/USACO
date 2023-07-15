//https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T; cin >> T;
	while (T--)
	{
		set<long int> s;
		int n, m; cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			long long temp; cin >> temp;
			s.insert(temp);
		}
		for (int i = 0; i < m; i++)
		{
			long long temp; cin >> temp;
			auto it = s.find(temp);
			if (it == s.end()){
				cout << "NO\n";
				s.insert(temp);
			}
			else
				cout << "YES\n";
		}
	}
}