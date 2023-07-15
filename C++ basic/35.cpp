#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	int *ptr1 = lower_bound(arr, arr+n, 1010); //Giá trị của phần tử đầu tiên lớn hơn 6
	int *ptr2 = upper_bound(arr, arr+n, 8); //Giá trị của phần tử đầu tiên nhỏ hơn 6
	if (ptr1 == arr+n)
		cout << "\nNot Found!";
	else cout << "\n" << (*ptr1) << "\n";
	if (ptr2 == arr+n)
		cout << "\nNot Found!";
	else cout << "\n" << (*ptr2) << "\n";*/

	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++){
		int temp; cin >> temp;
		s.insert(temp);
	}
	auto it = s.upper_bound(7);
	cout << (*it) << "\n";
}
/*Các giải thuật này liên quan đến thuật tìm kiếm nhị phân:
https://leetcode.com/tag/binary-search/
https://www.codechef.com/tags/problems/binary-search
https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/
*/