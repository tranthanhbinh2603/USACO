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
ll n, s, t; 
vector<vector<ll>> f;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("f.inp", "r", stdin);
    //     freopen("f.out", "w", stdout);
    // #endif
    cin >> n >> s;    
    rep(i,1,n){
        cin >> a[i];
        t += a[i];
    }
    f.resize(n + 2, vector<ll>(t + 1, 0));
    rep(i,0,n)
        f[i][0] = 1;
    rep(i,1,n)
        rep(j,0,t){
            if (j - a[i] >= 0) 
                f[i][j] = f[i - 1][j - a[i]] | f[i - 1][j];
            else 
                f[i][j] |= f[i - 1][j];
        }
    // rep(i,0,n){
    //     rep(j,0,t)
    //         cout << f[i][j] << " ";
    //     cout << "\n";
    // }
    cout << f[n][s];
}
