//https://www.hackerrank.com/challenges/cpp-maps/problem
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	map<string,int> m;
	while (n--)
	{
		int type; string name; int score;
		cin >> type >> name;
		if (type == 1) cin >> score;
		if (type == 1) m[name]+=score;
		else if (type == 2) m[name] = 0;
		else if (type == 3) cout << m[name] << "\n";
	}
	

}