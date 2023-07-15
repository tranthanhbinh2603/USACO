//https://codeforces.com/problemset/problem/610/A

//leng = l + l + s + s;
//leng = 2l + 2s;
//leng = 2 (l + s);
//leng / 2 = l + s

//Tu do suy ra duoc. Lay leng /2. Sau do lay phan nguyen cua ket qua.
//Cac so khong chan khong the chia duoc!

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	if (n % 2 != 0){
		cout << "0";
	}
	else{
		n /= 2;
		if (n % 2 != 0) cout << n / 2;
			else cout << (n / 2 - 1);
	}
}