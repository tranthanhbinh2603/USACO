#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <iomanip>
#include <map>
#include <stack>
#include <math.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for (register ll i=(a);i<=(b);i++)
#define drep(i,a,b) for (register ll i=(a);i>=(b);i--)
#define pll pair<ll, ll>
#define fi first
#define se second
#define vll vector<ll>
typedef vector<vector<char>> GRAPH_C;
typedef vector<vector<ll>> GRAPH_NUM;
typedef vector<bool> GRAPH_BOOL;
#define pub push_back
#define pob pop_back
#define ins insert

string sum_string(string s1, string s2){
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


bool compare_string(string a, string b){ //Chuoi truoc lon hon chuoi sau
    if (a.size() > b.size())
        return true;
    if (a.size() < b.size())
        return false;
    return a > b;
}

bool cm_str(string a, string b){
    if (a[0] == '-' && b[0] == '-'){
        string s1 = a.substr(1);
        string s2 = b.substr(1);
        return !compare_string(s1, s2);
    }
    if (a[0] == '-')
        return false;
    if (b[0] == '-')
        return true;
    return compare_string(a, b);
} 

string sub_string(string a, string b){
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    int d = 0, carry  = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        d = (int)(a[i] - '0') - (int)(b[i] - '0') - carry;
        if (d < 0)
        {
            d += 10;
            carry = 1;
        }
        else
            carry = 0;
        res = (char) (d + '0') + res;
    }
    while (res.size() > 1 && res.front() == '0')
        res.erase(res.begin());
    return res;
}

string sum(string s1, string s2){
    if (s1[0] != '-' && s2[0] != '-')
        return sum_string(s1, s2);
    if (s1[0] == '-' && s2[0] != '-'){
        string s1_n = s1.substr(1, s1.size() - 1);
        if (compare_string(s1_n, s2))
            return "-" + sub_string(s1_n, s2);
        else
            return sub_string(s2, s1_n);
    }
    if (s1[0] != '-' && s2[0] == '-'){
        string s2_n = s2.substr(1, s2.size() - 1);
        if (compare_string(s1, s2_n))
            return sub_string(s1, s2_n);
        else
            return "-" + sub_string(s2_n, s1);
    }
    if (s1[0] == '-' && s2[0] == '-'){
        string s1_n = s1.substr(1, s1.size() - 1);
        string s2_n = s2.substr(1, s2.size() - 1);
        return "-" + sum_string(s2_n, s1_n);
    }
}

string mul_string(string a, int b){
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
 
string mul_string(string s1, string s2){
    string res;
    if (s1 == "0" || s2 == "0")
        return "0";
    if (s1.size() < s2.size())
        swap(s1,s2);
    reverse(s2.begin(), s2.end());
    drep(i,s2.size() - 1,0){
        string k = mul_string(s1, (int)s2[i] - 48);
        res = sum_string(res + "0", k);
    }
    return res;
}

string m_str(string a, string b){
    if (a[0] == '-' && b[0] == '-'){
        string s1 = a.substr(1);
        string s2 = b.substr(1);
        return mul_string(s1, s2);
    }
    if (a[0] == '-'){
        string s1 = a.substr(1);
        return "-" + mul_string(s1, b);
    }
    if (b[0] == '-'){
        string s1 = b.substr(1);
        return "-" + mul_string(s1, a);
    }
    return mul_string(a, b);
}

ll check(ll a[], ll size, ll sl, ll ng){
    ll ht = a[0];
    ll k = 1, i = 1;
    while (k <= size){
        if (a[k] - ht >= sl){
            i++;
            ht = a[k];
        }
        k++;
    }
    return (i >= ng);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    ll a[n + 1], maxx;
    rep(i,1,n){
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    ll st = 0, en = maxx;
    ll ans = 0;
    while (st <= en){
        ll mid = st + (en - st) / 2;
        if (check(a, n, mid, k)){
            ans = mid;
            st = mid + 1;
        }
        else en = mid - 1;
    }
    cout << ans;
}