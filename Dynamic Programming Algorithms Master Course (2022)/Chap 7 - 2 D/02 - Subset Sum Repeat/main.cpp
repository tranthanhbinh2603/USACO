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

const ll MAX = 1e5 + 10;
ll a[MAX];
ll n, s; 
vector<vector<ll>> f;

bool backtrack(ll k, ll x){
    if (k == n + 1){
        return f[k][x] = (x == 0);
    } 
    if (f[k][x] != -1) return f[k][x];
    bool ans = 0;
    if (x >= a[k])
        ans |= backtrack(k, x - a[k]);
    //else 
        ans |= backtrack(k + 1, x);
    return f[k][x] = ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("f.inp", "r", stdin);
    //     freopen("f.out", "w", stdout);
    // #endif
    cin >> n >> s;
    f.resize(n + 2, vector<ll>(s + 1, -1));
    rep(i,1,n)
        cin >> a[i];
    cout << backtrack(1, s);
}
