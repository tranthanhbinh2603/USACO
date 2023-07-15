//https://codeforces.com/contest/1102/problem/A

/*Cai bai nay hoi kho do:
1: 1 => chia la 1;
2: 1 2 => Chia la 1;
3: 1 2 3 => Chia la 0 {1, 2} va {3}
4: 1 2 3 4 => Co 4 phan tu, chia la {4; 1} va {2; 3} => 0
5: 1 2 3 4 5: => Lay 4 phan tu cuoi, chia la {5; 2} va {3; 4} => Con lai 1 => 1
6: 1 2 3 4 5 6 => Lay 4 phan tu cuoi. Khoang cach la 1 (2-1)
...
10: Lay 4 phan tu cuoi va 4 phan tu giua, khoang cach la 2
Ro rang cac so chia het cho 4. Du 1,2 ra 1, con lai ra 0.
Day la quy luat!*/

#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

 	long long int n;
 	cin >> n;

 	n %= 4;
 	if ((n == 1) || (n == 2))
 		cout << 1;
 	else cout << 0;
}