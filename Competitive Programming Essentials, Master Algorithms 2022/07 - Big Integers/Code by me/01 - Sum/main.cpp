#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Cac buoc lam
//Swap 2 chuoi neu size s1 > size s2
//Dao nguoc 2 chuoi
//Cong phan co ca 2 so (xem hinh duoi)
//Cong phan con lai (xem hinh duoi)
//Cong 1 neu con du
//Dao nguoc chuoi ket qua

string sum(string s1, string s2){
    string res;

    if (s1.size() > s2.size())
        swap(s1,s2);

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int carry = 0;
    for (int i = 0; i < s1.size(); i++){
        int n1 = (int)(s1[i] - '0');
        int n2 = (int)(s2[i] - '0');
        int r = n1 + n2 + carry;
        res.push_back((char)(r % 10 + '0'));
        carry = r / 10;
    }

    for (int i = s1.size(); i < s2.size(); i++){
        int n = (int)(s2[i] - '0');
        int r = n + carry;
        res.push_back((char)(r % 10 + '0'));
        carry = r / 10;
    }

    if (carry){
        res.push_back('1');
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << sum(s1, s2);
}
