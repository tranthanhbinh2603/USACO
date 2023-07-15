//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<int, set<string>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int mark;
		string name;
		cin >> name >> mark;
		v[mark].insert(name);
	}
	auto it = --v.end();
	while (true)
	{
		auto (&students) = (*it).second;
		int marks = (*it).first;
		for (auto student : students){
			cout << student << " " << marks <<"\n";
		}
		if (it == v.begin()) break;
		it--;
	}
} 