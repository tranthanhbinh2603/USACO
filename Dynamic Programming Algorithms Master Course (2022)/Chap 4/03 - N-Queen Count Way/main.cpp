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
#define rep(i,a,b) for (register ll i=(a);i<=(b);i++)
#define drep(i,a,b) for (register ll i=(a);i>=(b);i--)
#define pll pair<ll, ll>
#define fi first
#define se second
#define vll vector<ll>
typedef vector<vector<char>> GRAPH_C;
typedef vector<vector<ll>> GRAPH_NUM;
typedef vector<vector<bool>> GRAPH_BOOL;

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

ll way = 0;

bool isVaild (ll c[20][20], ll n, ll i, ll j){
    rep(k,0,i)
        if (c[k][j] == 1) return false;
    ll a = i, b = j;
    while (a >= 0 && b >= 0){
        if (c[a][b] == 1)
            return false;
        a--; b--;
    }
    a = i; b = j;
    while (a >= 0 && b < n){
        if (c[a][b] == 1)
            return false;
        a--; b++;
    }
    return true;
}

ll count_queen(ll n, ll chess[20][20], ll i){
    if (n == i){
        rep(i,0,n-1){
            rep(j,0,n-1)
                cout << chess[i][j] << " ";
            cout << "\n";
        }
        cout << "\n";
        return 1;
    }
    rep(j,0,n - 1){
        if (isVaild(chess, n, i, j)){
            chess[i][j] = 1;
            way += count_queen(n, chess, i + 1);
            chess[i][j] = 0;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("f.inp", "r", stdin);
        freopen("f.out", "w", stdout);
    #endif
    ll n; cin >> n;
    ll chess[20][20] {0};
    count_queen(n, chess, 0);
    cout << way;
}