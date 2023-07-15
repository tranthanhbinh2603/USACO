#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*vector<int> v = {1, 2, 3};
	for (int value : v){
		cout << value << " ";
	}
	cout << "\n";
	for (int &value : v){ //Cần lấy giá trị nên dùng &
		value++;
	}
	for (int value : v){
		cout << value << " ";
	}*/

	/*vector<pair<int, int>> v = {{1, 3}, {2, 3}, {8, 9}};
	for (pair<int, int> value : v)
	{
		cout << value.first << " " << value.second << "\n";
	}*/

	/*auto a = 1;
	cout << a << "\n";
	auto b = "abc";
	cout << b << "\n";
	auto c = 1.99999;
	cout << c << "\n";*/
	
	vector<pair<int, int>> v = {{1, 3}, {2, 3}, {8, 9}};
	for (auto value : v)
	{
		cout << value.first << " " << value.second << "\n";
	}
}