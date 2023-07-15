#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //Dùng accumulate cần cái này
using namespace std;

int main()
{
	//Array tương tự. Thay begin và end là arr và arr+n
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int min = *min_element(v.begin() + 3, v.end());
	cout << min << "\n";
	int max = *max_element(v.begin(), v.end());
	cout << max << "\n";
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum << "\n";
	int ct = count(v.begin(), v.end(), 5);
	cout << ct << "\n";
	int element = *find(v.begin(), v.end(), 1000);
	cout << element << "\n";
	reverse(v.begin(), v.end());
	for (auto i : v)
		cout << i << " ";
	cout << "\n";
	string s = "1234567890";
	reverse(s.begin() + 1, s.end());
	cout << s << "\n";
}