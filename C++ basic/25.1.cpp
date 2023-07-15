#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string> m)
{
	cout << m.size() <<  "\n";
	for (auto pr : m){
		cout << pr.first << " " << pr.second << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<int, string> m;
	m[1] = "abc"; //O(log(n))
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});
	m[2] = "xyz";
	m[6]; //Lấy giá trị mặc định
	//map<int, string>::iterator it;
	// for (it = m.begin(); it != m.end(); ++it)
	// 	cout << (*it).first << " " << (*it).second << "\n";
	
	//printMap(m);

	// auto it = m.find(100); //O(log(n))
	// if (it == m.end())
	// 	cout << "No value";
	// else
	// 	cout << (*it).first << " " << (*it).second << "\n";

	// m.erase(3); //O(log n)
	// printMap(m);
	// cout << "\n";
	// auto it = m.find(5);
	// m.erase(it);
	// printMap(m);

	// m.clear();
	// printMap(m);
}