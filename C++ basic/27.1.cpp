#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void print(set<string> &s)
{
	for (string value : s){
		cout << value << "\n";
	}
	// for (auto it = s.begin(); it != s.end(); it++){
	// 	cout << (*it) << "\n";
	// }
}

void printMulti(multiset<string> &s)
{
	for (string value : s){
		cout << value << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*set<string> s;
	s.insert("abc"); //log(n)
	s.insert("zsdf");
	s.insert("bcd");

	auto it = s.find("abc");
	s.erase("abc");
	print(s);*/

	/*unordered_set<set<int>> s;*/

	multiset<string> s;
	s.insert("abc"); //log(n)
	s.insert("zsdf");
	s.insert("bcd");

	auto it = s.find("abc");
	s.erase("abc");
	printMulti(s);
 }