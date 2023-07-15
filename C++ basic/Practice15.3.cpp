//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/?fbclid=IwAR2XcdRMJnGwG3ojY4diVU80L41VtxP85xk2VWMZ_lUYz58kKYk2TtZN3rc
#include <iostream>
using namespace std;

const int maxarr = 1e7;
int A[maxarr];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//Có 3 phương pháp:
	//1. Bruteforce: Cào 2 vòng for. Vòng 1 từ 1 đến N (i), vòng 2 là từ (i+1) tới N
	//2. Sort: Sort mảng, 2 chiều. Nếu ra tổng thì kết thúc, ngược lại thì nếu sum nhỏ hơn tổng thì tăng start, ngược lại tăng end
	//3. Sum hashing: Xem bên dưới:

    //freopen("inputf.in", "r", stdin);
	int n, k;
	cin >> n >> k;
	int temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		if (A[k - temp] >= 1){
			cout << "YES";
			break;
		}
		else{
		 	A[temp]++;
		}
		if (i == n - 1) cout << "NO";
	}
}
