//Bài Luffy ask "isPalin" đã mất trong trang hackerearth
//Do đó, mình sẽ ghi đề lại ở dưới
/*Luffy cùng với thủy thủ đoàn của mình đang trên đường đến Dressrosa, 
và cậu sẽ chiến đấu với một trong những lãnh chúa của biển Doflamingo. 
Nhưng bây giờ cô ấy đang cảm thấy buồn chán và muốn thực hiện một hoạt động vui vẻ. 
Anh ấy bị ám ảnh rất nhiều bởi các palindromes. 
Cho một chuỗi S gồm bảng chữ cái tiếng Anh viết thường có độ dài N và hai 
số nguyên L và R, 
anh ta muốn biết liệu tất cả các chữ cái của chuỗi con từ chỉ số L đến R 
(bao gồm cả L và R) có thể được sắp xếp lại để tạo thành một palindrome hay không. 
Anh ấy muốn biết điều này cho các Q truy vẫn từ L đến R và cần sự giúp đỡ của bạn trong 
việc tìm ra câu trả lời.
Palindrome là một chuỗi ký tự mà khi đảo ngược sẽ đọc giống như chuỗi onginal
hạn chế:
1 <= t <= 10
1 <= N, Q <= 100000
1 <= L <= R <= N
'a' <= S[i] <='z' for 1 <= i <= N
Ex1: 
1
5 3
abccde
1 2
2 5
3 5
4 4
Res: 
NO
NO
YES => Vì ccd có thể thành cdc
YES => 1 mình kí tự đó
Ex 2:
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4
Res: 
NO
NO
YES
NO
NO
YES
NO
YES
YES
YES
*/
/*Cách bruce force: 
Đi từ l đến r, dùng hashing. Nếu tất cả kí tự là chẵn, thì chắc chắn có thể lập được 1 chuổi palin
Chú ý 1 kí tự. Nếu l - r = 0, mặc định ra YES luôn
Nếu l-r ra số lẻ, chỉ có 1 kí tự có 1 kí tự mới ra true*/
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		string s; 
		cin >> s;
		while (q--)
		{
			int l, r;
			cin >> l >> r;
			int hsh[26];
			for (int i = 0; i < 26; i++)
				hsh[i] = 0;
			l--; r--;
			for (int i = l; i <= r; i++)
				hsh[s[i] - 'a']++;
			int oddCt = 0;
			for (int i = 0; i < 26; i++)
				if (hsh[i] % 2 != 0) oddCt++;
			if (oddCt > 1) cout << "NO\n";
				else cout << "YES\n";
		}
	}
}

//O(t * (n + q * (26 + n + 26)))

