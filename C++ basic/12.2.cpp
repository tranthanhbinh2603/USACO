/*Cho 1 mảng array có N phần tử.
Cho q truy vấn, 1 truy vấn trên 1 dòng.
Tính số lượng xuất hiện phần tử cần truy vấn trong mảng

Vd: 
5 
1 1 2 2 3
3
2
3
100

KQ: 
2
1
0 

Ràng buộc: 
1 <= N, Q <= 10^5
1 <= A[i] <= 10^7*/

#include <iostream>
using namespace std;

const int N = 1e5;
int A[N];
const int N1 = 1e7 + 10;
int hsh[N1];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//Độ phức tạp: O(N) + O(T * N) = O(N*2) = 10^10
	/*int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];

	int t; cin >> t;
	while (t--)
	{
		int q; cin >> q;
		int res = 0;
		for (int i = 0; i < n; i++)
			if (A[i] == q) res++;
		cout << res << "\n";
	}
*/
	//Thuật Hashing (Mảng đánh dấu): Tạo 1 mảng chứa các giá trị xuất hiện
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> A[i];
		hsh[A[i]]++;
	}
	int t; cin >> t;
	while (t--)
	{
		int q; cin >> q;
		cout << hsh[q] << "\n";
	}

	//Mảng âm thì sao?
	//Vd: 12 -3 2 3 5
	//Cộng tất cả cho 3. Lúc này mảng dương, ta có thể truy quét
	//Tương tự thế, cộng mỗi Q cho 3.
}