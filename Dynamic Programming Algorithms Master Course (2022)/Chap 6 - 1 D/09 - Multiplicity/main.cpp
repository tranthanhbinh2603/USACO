#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <iomanip>
#include <map>
#include <math.h>
using namespace std;

typedef long long ll;
typedef vector<vector<char>> GRAPH_C;
typedef vector<vector<ll>> GRAPH_NUM;
typedef vector<vector<bool>> GRAPH_BOOL;
#define rep(i,a,b) for (register ll i=(a);i<=(b);i++)
#define drep(i,a,b) for (register ll i=(a);i>=(b);i--)
#define pll pair<ll, ll>
#define fi first
#define se second
#define vll vector<ll>
#define pub push_back

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
 
map<ll, ll> ptnt(ll n){
    map<ll, ll> m;
    if (n == 1){
        m[1] = 1;
        return m;
    }
    while (n % 2 == 0){
        m[2]++;
        n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i+=2)
        while (n % i == 0){
            m[i]++;
            n /= i;
        }
    if (n > 2)
        m[n]++;
    return m;
}

//https://codeforces.com/problemset/problem/1061/C

//Cách 1: Duyệt trâu
ll n;
ll a[100005];
ll dp[1000005];
const ll MOD = 1e9 + 7;

// ll backtrack(ll k, ll z){
//     if (k > n) return 1;
//     ll ans {1};
//     rep(i,k + 1,n)
//         if (a[i] % (z + 1) == 0)
//             ans += backtrack(i, z + 1);
//     return ans;
// }

//Cách 2: Sử dụng thuật tìm ước tìm từng ước số chia hết cho phần tử i.
//Cứ mỗi lần làm vậy cộng lên cho mảng dp.
ll backtrack(){
    dp[0] = 1;
    rep(i,1,n){
        vll uoc;
        for (ll j = 1; j * j <= a[i]; j++){
            if (a[i] % j == 0){
                uoc.pub(j);
                if (j != a[i]/j) uoc.pub(a[i]/j);
            }            
        }
        sort(uoc.begin(), uoc.end());
        reverse(uoc.begin(), uoc.end());
        for (auto z : uoc){
            dp[z] += dp[z - 1];
            dp[z] %= MOD;
        }
    }
    ll ans {0};
    rep(i,1,n)
        ans += dp[i];
    return ans % MOD;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    ll ans {0};
    rep(i,1,n)
        cin >> a[i];
    cout << backtrack();
}