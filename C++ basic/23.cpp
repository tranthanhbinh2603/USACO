#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*vector<int> v = {1, 2, 3, 4, 5};
	vector<int>::iterator it = v.begin();
	//cout << *(it + 1) << "\n";
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";*/

	vector<pair<int, int>> v = {{1, 2}, {5, 3}, {3, 4}};
	vector<pair<int, int>>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		//cout << (*it).first << " ";
		cout << it->first << " "; //Tương tự
}