#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x;
	int sum = 0;
	sum = x + x;
	//Độ phức tạp: O(3)
	int n;
	cin >> n;
	//Độ phức tạp: O(5)
	for (int i = 0; i < n; ++i)
	{

	}
	//Độ phức tạp: O(n) + O(5)
	for (int i = 0; i < n; ++i)
	{
		int y;
		y = 5;
		y++;
	}
	//Độ phức tạp: O(3*n) + O(n) + O(5)

	//Một số công thức:
	//O(N) + O(N) = O(N)
	//O(K * N) = O(N) khi K quá nhỏ
	//O(4)-O(5) = O(1)
	//Số lượng phép toán 1 giây: 10^7 - 10^8

	//Bài tập:
	//Cho N < 100000
	//a[i] < 100000

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]
	}
	//O(1) + O(1) + O(N * 1) = O(N)

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]
	}
	//O(1) + O(1) + O(N * 1) + O(N * 1) + O(N * 1) + O(N * 1) = O(N)

	for (int i = 0; i < n; ++i)
	{
		for (int z = 0; z < n; z++){
			cin >> a[i]	
		}
		
	}
	//O(N^2)

	int n;
	cin >> n;
	while (n > 0)
	{
		n = n / 2;
	}
	//O(1) + O(1) + O(log(n)) = O(log(n))
	//8 - 4 - 2 - 1 - 0, 4 lan
	//10 - 5 - 2 - 1 - 0, 4 lan
	//Noi cách khác 2^a = N.
	//=> Log2(2^a) = Log2(N)
	//=> alog2(2) = Log2(N)
	//=> a = log2(N)

	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int z = 0; z < i; z++)
		{

		}
	}
	//O((n*(n+1))/2)
	//Mà (n*(n+1))/2 = n^2/2+n+1/2
	//Nên O(n^2/2+n+1/2) = O(n^2/2) + O(n+1/2).
	//Loại vế sau. Ta thấy O(n^2/2) thuộc O(n^2). Đó chính là độ phức tạp

}

