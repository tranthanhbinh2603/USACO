#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

void printMap(unordered_map<int, string> m)
{
	cout << m.size() <<  "\n";
	for (auto pr : m){
		cout << pr.first << " " << pr.second << "\n";
	}
}

int main()
{
	//1. Inbuild implention
	//2. Time oxplex
	//3. Vaild key datatype
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*unordered_map <int, string> m;
	m[1] = "abc"; //O(1)
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});
	m[2] = "xyz";
	m[6]; //Lấy giá trị mặc định*/

	// auto it = m.find(5); //O(1)
	// m.erase(it);//O(1)
	// printMap(m); 

	// m.clear();
	// printMap(m);

	//Unordermap không có thể làm được cái này
	/*unordered_map<pair<int, int>, string> m; - Êrror */
}