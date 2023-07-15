#include <iostream>
#include <algorithm>
using namespace std;

//Nhiem vu:
//Ham 1: Nhap 1 so, tinh giai thua
//Ham 2: Nhap 1 chuoi va 1 so, tinh tich

string mul(string a, int b){
    //Cac buoc
    //- Dao nguoc chuoi a
    //- Nhan tung so cua a, push_back vao string kq, dua vao phan du
    //- Phan du con lai tiep tuc push_back
    //- Sau do dao nguoc ket qua

    string ans = "";
    reverse(a.begin(), a.end());

    int carry = 0;
    for (int i = 0; i < a.size(); i++){
        int temp = (int)(a[i] - '0') * b + carry;
        ans.push_back((char)(temp % 10 + '0'));
        carry = temp / 10;
    }

    while (carry > 0){
        ans.push_back((char)(carry % 10 + '0'));
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

string fact(int n){
    string ans {"1"};
    for (int i = 2; i <= n; i++)
        ans = mul(ans, i);
    return ans;
}

int main()
{
    freopen("d.out", "w", stdout);
    for (int i = 0 ;i < 100000; i++)
        cout << i << " " << fact(i) << "\n";
}
