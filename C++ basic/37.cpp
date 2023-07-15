#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isNavigate(int x)
{
	return x > 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*auto sum = [](int x, int y){return x + y;}(2,3);
	cout <<  sum << "\n";*/

	vector<int> v = {-2, -3, -1};
	cout << all_of(v.begin(), v.end(),
		[](int x){return x > 0;}) << "\n";//Tất cả phần tử lớn hơn 0
	//Tương đương:
	//cout << all_of(v.begin(), v.end(), isNavigate);
	cout << any_of(v.begin(), v.end(),
		[](int x){return x > 0;}) << "\n";
	cout << none_of(v.begin(), v.end(),
		[](int x){return x > 0;}); 
}