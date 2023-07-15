/*Cách nhanh hơn
Đi từ l đến r, dùng hashing. Nếu tất cả kí tự là chẵn, thì chắc chắn có thể lập được 1 chuổi palin
Chú ý 1 kí tự. Nếu l - r = 0, mặc định ra YES luôn
Nếu l-r ra số lẻ, chỉ có 1 kí tự có 1 kí tự mới ra true*/
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int hsh[N][26]; //Hashing 2 chiều

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0 ; i < 26; ++i){
			for (int z = 0; z <= N; ++z){
				hsh[z][i] = 0;
			}			
		}
		int n, q;
		cin >> n >> q;
		string s; 
		cin >> s;
		for (int i = 0 ; i < n; ++i){
			hsh[i+1][s[i] - 'a']++;
		}
		for (int i = 0 ; i < 26; ++i){
			for (int z = 0; z <= n; ++z){
				hsh[z][i] += hsh[z - 1][i];
			}			
		}
		while (q--)
		{
			int l, r;
			cin >> l >> r;
			int oddCt = 0;
			for (int i = 0; i < 26; i++){
				int charCt = hsh[r][i] - hsh[l - 1][i];
				if (charCt % 2 != 0) oddCt++;
			}
			if (oddCt > 1) cout << "NO\n";
				else cout << "YES\n";
		}
	}
}

//O(t * n * 26)

