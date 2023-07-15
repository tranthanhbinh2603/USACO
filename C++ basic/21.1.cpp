#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void printVector(vector<string> v) //Chỉ truyền tham số. Muốn tham trị cần &
{ 
	//v.size() -> O(1)
	cout << "Size: " << v.size() << "\n";
	for (int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	//v.push_back(2);
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// pair<int,string> p;
	// //p = make_pair(2, "abc");
	// p = {2, "abcd"};
	// pair<int,string> &p1 = p;
	// p1.first = 3;
	// cout << p1.first << " " << p1.second << "\n"; 

	/*int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};
	pair <int, int> p_array[3];
	p_array[0] = {1, 2};
	p_array[1] = {2, 3};
	p_array[2] = {3, 4};
	for (int i = 0; i < 3; ++i)
		cout << p_array[i].first << " " << p_array[i].second << "\n"; 
	cout << "\n";
	swap(p_array[0], p_array[2]);
	for (int i = 0; i < 3; ++i)
		cout << p_array[i].first << " " << p_array[i].second << "\n"; */

	/*pair<int,string> p;
	cin >> p.first;
	cout << p.first;	*/

	/*//int a[10];
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		printVector(v);
		v.push_back(x);
	}
	printVector(v);*/

	/*vector<int> v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	printVector(v);
	v.pop_back();
	printVector(v);
	v.pop_back();
	v.pop_back();
	printVector(v); //O(1)
	cout << "\n";
	vector<int> v2 = v; //O(n)
	v2.push_back(10000);
	printVector(v2);*/

	vector<string> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	printVector(v);
}