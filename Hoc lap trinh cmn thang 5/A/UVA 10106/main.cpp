#include <iostream>

using namespace std;

string sum(string a, string b){
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    int carry {0};
    string ans;
    for (int i = 0; i < a.size(); i++){
        int su = (int)(a[i] - '0') + (int)(b[i] - '0') + carry;
        if (su / 10 == 1) carry = 1; else carry = 0;
        ans.push_back((char)(su % 10 + 48));
    }
    return ans;
}

string mul2(string a, char b){
    string ans; int carry {0};
    for (int i = a.size() - 1; i >= 0; i--){
        int mu = (int)(a[i] - '0') * (int)(b - '0') + carry;
        carry = mu / 10;
        ans = (char)(mu % 10 + 48) + ans;
    }
    return ans;
}

string mul(string a, string b){
    string ans; int carry;
    for (int i = b.size() - 1; i >= 0; i--) //Lay a * tung so cua b
    {
        string su = mul2(b, a[i]);
        for (int z = 0; z < b.size() - 1 - i; z++) su.push_back('0');
        ans = sum(ans, su);
    }
    return ans;
}

int main()
{
    freopen("r.inp", "r", stdin);
    //freopen("r.out", "w", stdout);
    string a; string b; getline(cin, a); getline(cin, b);
    while (a != " "){
        cout << a << "\n";
        //cout << mul(a, b);
        getline(cin, a); getline(cin, b);
    }
}
