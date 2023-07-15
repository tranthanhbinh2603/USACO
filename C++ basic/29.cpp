//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
	/*map<pair<int, int>, int> m;
	pair<int, int> p1, p2;
	p1 = {1,2};
	p2 = {2,3};
	cout << (p1 < p2);*/

	/*map<set<int>, int> m;
	set<int> s1 = {1,2,3};
	set<int> s2 = {2,3};
	cout << (s1 < s2);*/

	set<pair<int,int>> st;
	map<pair<string, string>, vector<int>> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string fn, ln;
		int ct;
		cin >> fn >> ln >> ct;
		for (int i = 0; i < ct; i++)
		{
			int x;
			cin >> x;
			m[{fn, ln}].push_back(x);
		}
	}
	for (auto &pr : m)
	{
		auto &full_name = pr.first;
		auto &list = pr.second;
		cout << full_name.first << " " << full_name.second << "\n";
		cout << list.size() << "\n";
		for (auto &element : list){
			cout << element << " ";
		}
		cout << "\n";
	}	
}