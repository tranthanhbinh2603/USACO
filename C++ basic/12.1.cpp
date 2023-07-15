/*Cho testcase T, T dòng tiếp theo chứa 1 số N. 
Tính N! % M.
Biết: M = 10^9+7.
1 <= T,N <= 10^5
*/
#include <iostream>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5;
long long fact[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//1 Tối ưu hoá bằng cách lưu vào mảng!
	int t; cin >> t;
	//while (t--)
	//{
	//	int n;
	//	cin >> n;

	//	long long fact = 1;
	//	for (int i = 2; i <= n; i++)
	//		fact = (fact * i) % M;
//
//		cout << fact << "\n";
//	}
	//O(T * N) = 10^10

	//cout << "\n";
	//Ta có thể tối ưu hoá bằng cách lưu vào 1 mảng

	fact[0] = fact[1] = 1;
	//Do chỉ đến 10^5 nên ta có thể tính trước luôn!
	for (int i = 2; i <= N; i++)
		fact[i] = (fact[i-1] * i)%M; //Lấy phần tử trước nhân chỉ số

	while (t--)
	{
		int n;
		cin >> n;
		cout << fact[n - 1] << "\n";
	}

	//o(T) + O(N) = 2 * 10^5
} 