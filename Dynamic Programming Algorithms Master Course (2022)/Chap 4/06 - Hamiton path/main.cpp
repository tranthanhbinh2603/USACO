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
typedef vector<bool> GRAPH_BOOL;

#define pub push_back

//string sum_string(string s1, string s2){
//    string res;
//    if (s1.size() > s2.size())
//        swap(s1,s2);
//    reverse(s1.begin(), s1.end());
//    reverse(s2.begin(), s2.end());
//    int carry = 0;
//    for (int i = 0; i < s1.size(); i++){
//        int n1 = (int)(s1[i] - '0');
//        int n2 = (int)(s2[i] - '0');
//        int r = n1 + n2 + carry;
//        res.push_back((char)(r % 10 + '0'));
//        carry = r / 10;
//    }
//    for (int i = s1.size(); i < s2.size(); i++){
//        int n = (int)(s2[i] - '0');
//        int r = n + carry;
//        res.push_back((char)(r % 10 + '0'));
//        carry = r / 10;
//    }
//    if (carry){
//        res.push_back('1');
//    }
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//string mul_string(string a, int b){
//    string ans = "";
//    reverse(a.begin(), a.end());
//    int carry = 0;
//    for (int i = 0; i < a.size(); i++){
//        int temp = (int)(a[i] - '0') * b + carry;
//        ans.push_back((char)(temp % 10 + '0'));
//        carry = temp / 10;
//    }
//    while (carry > 0){
//        ans.push_back((char)(carry % 10 + '0'));
//        carry /= 10;
//    }
//    reverse(ans.begin(), ans.end());
//    return ans;
//}
//
//string mul_string(string s1, string s2){
//    string res;
//    if (s1 == "0" || s2 == "0")
//        return "0";
//    if (s1.size() < s2.size())
//        swap(s1,s2);
//    reverse(s2.begin(), s2.end());
//    drep(i,s2.size() - 1,0){
//        string k = mul_string(s1, (int)s2[i] - 48);
//        res = sum_string(res + "0", k);
//    }
//    return res;
//}

bool res = 0;

void hamiton_find(GRAPH_NUM &gr, GRAPH_BOOL &isVisited, ll i, ll n){
    if (i == n){
        res = true;
        return;
    }

    isVisited[i] = true;
    for (auto aa : gr[i]){
        if (!isVisited[aa])
            hamiton_find(gr, isVisited, aa, n + 1);
    }
    isVisited[i] = false;
    return;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("f.inp", "r", stdin);
        freopen("f.out", "w", stdout);
    #endif
    GRAPH_NUM gr (10000);
    ll u, v; cin >> u >> v;
    rep(i,1,v){
        ll fr, to; cin >> fr >> to;
        gr[fr].pub(to);
        gr[to].pub(fr);
    }
    GRAPH_BOOL isVisited (10000);
    hamiton_find(gr, isVisited, 1, u);
    cout << res;

}
