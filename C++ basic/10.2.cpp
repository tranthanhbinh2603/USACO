/* Cho 1 số lượng T Test case. Mỗi test có 1 dòng ghi số N là số lượng phần tử trong mỗi test,
dòng bên dưới là các phần tử.
Tính tổng các phần tử đó.
Ràng buộc:
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000
*/
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//Rõ ràng nếu ta dùng thuật toán
	int t;
	cin >> t;
	int ct = 0;
	while (t--)
	{
		int n;
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			sum += x;
			ct++;
		}
		cout << sum << "\n";
	}
	//Nó có độ phức tạp O(N*T) => Hai biến bằng nhau nên độ phức tạp là O(N^2)
}